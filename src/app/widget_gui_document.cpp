/****************************************************************************
** Copyright (c) 2021, Fougue Ltd. <http://www.fougue.pro>
** All rights reserved.
** See license at https://github.com/fougue/mayo/blob/master/LICENSE.txt
****************************************************************************/

#include "widget_gui_document.h"

#include "../graphics/graphics_utils.h"
#include "../graphics/v3d_view_camera_animation.h"
#include "../gui/gui_document.h"
#include "button_flat.h"
#include "theme.h"
#include "widget_clip_planes.h"
#include "widget_explode_assembly.h"
#include "widget_occ_view.h"
#include "widget_occ_view_controller.h"
#include "widgets_utils.h"

#include <QtCore/QtDebug>
#include <QtGui/QPainter>
#include <QtGui/QGuiApplication>
#include <QtWidgets/QBoxLayout>
#include <QtWidgets/QMenu>
#include <QtWidgets/QProxyStyle>
#include <QtWidgets/QWidgetAction>
#include <Standard_Version.hxx>

namespace Mayo {

namespace Internal {

class PanelView3d : public QWidget {
public:
    PanelView3d(WidgetGuiDocument* parent = nullptr)
        : QWidget(parent)
    {}

protected:
    void paintEvent(QPaintEvent*) override
    {
        QPainter painter(this);
        const QRect frame = this->frameGeometry();
        const QRect surface(0, 0, frame.width(), frame.height());
        auto widgetGuiDocument = static_cast<const WidgetGuiDocument*>(this->parentWidget());
        painter.fillRect(surface, widgetGuiDocument->panelBackgroundColor());
    }    
};

class MenuIconSizeStyle : public QProxyStyle {
public:
    void setMenuIconSize(int size) {
        m_menuIconSize = size;
    }

    int pixelMetric(QStyle::PixelMetric metric, const QStyleOption* option, const QWidget* widget) const override
    {
        if (metric == QStyle::PM_SmallIconSize && m_menuIconSize > 0)
            return m_menuIconSize;

        return QProxyStyle::pixelMetric(metric, option, widget);
    }

private:
    int m_menuIconSize = -1;
};

const int widgetMargin = 4;

} // namespace Internal

WidgetGuiDocument::WidgetGuiDocument(GuiDocument* guiDoc, QWidget* parent)
    : QWidget(parent),
      m_guiDoc(guiDoc),
      m_qtOccView(IWidgetOccView::create(guiDoc->v3dView(), this)),
      m_controller(new WidgetOccViewController(m_qtOccView))
{
    {
        auto layout = new QVBoxLayout;
        layout->setContentsMargins(0, 0, 0, 0);
        layout->addWidget(m_qtOccView->widget());
        this->setLayout(layout);
    }

    m_btnFitAll = this->createViewBtn(this, Theme::Icon::Expand, tr("Fit All"));
    m_btnEditClipping = this->createViewBtn(this, Theme::Icon::ClipPlane, tr("Edit clip planes"));
    m_btnEditClipping->setCheckable(true);
    m_btnExplode = this->createViewBtn(this, Theme::Icon::Multiple, tr("Explode assemblies"));
    m_btnExplode->setCheckable(true);

    auto gfxScene = m_guiDoc->graphicsScene();
    QObject::connect(m_btnFitAll, &ButtonFlat::clicked, this, [=]{
        m_guiDoc->runViewCameraAnimation(&GraphicsUtils::V3dView_fitAll);
    });
    QObject::connect(
                m_btnEditClipping, &ButtonFlat::checked,
                this, &WidgetGuiDocument::toggleWidgetClipPlanes);
    QObject::connect(
                m_btnExplode, &ButtonFlat::checked,
                this, &WidgetGuiDocument::toggleWidgetExplode);
    QObject::connect(
                m_controller, &V3dViewController::dynamicActionStarted,
                m_guiDoc, &GuiDocument::stopViewCameraAnimation);
    QObject::connect(
                m_controller, &V3dViewController::viewScaled,
                m_guiDoc, &GuiDocument::stopViewCameraAnimation);
    QObject::connect(m_controller, &V3dViewController::mouseClicked, this, [=](Qt::MouseButton btn) {
        if (btn == Qt::LeftButton && !m_guiDoc->processAction(gfxScene->currentHighlightedOwner())) {
            gfxScene->select();
            m_qtOccView->redraw();
        }
    });
    QObject::connect(m_controller, &WidgetOccViewController::multiSelectionToggled, this, [=](bool on) {
        auto mode = on ? GraphicsScene::SelectionMode::Multi : GraphicsScene::SelectionMode::Single;
        gfxScene->setSelectionMode(mode);
    });
    QObject::connect(
                m_guiDoc, &GuiDocument::viewTrihedronModeChanged,
                this, &WidgetGuiDocument::recreateViewControls);

    m_guiDoc->viewCameraAnimation()->setRenderFunction([=](const Handle_V3d_View& view){
        if (view == m_qtOccView->v3dView())
            m_qtOccView->redraw();
    });

    this->recreateViewControls();
}

QColor WidgetGuiDocument::panelBackgroundColor() const
{
    QColor color = mayoTheme()->color(Theme::Color::Palette_Window);
    if (m_qtOccView->supportsWidgetOpacity())
        color.setAlpha(150);

    return color;
}

void WidgetGuiDocument::resizeEvent(QResizeEvent* event)
{
    QWidget::resizeEvent(event);
    this->layoutViewControls();
    this->layoutWidgetPanel(m_widgetClipPlanes);
    this->layoutWidgetPanel(m_widgetExplodeAsm);
}

void WidgetGuiDocument::toggleWidgetClipPlanes(bool on)
{
    if (!m_widgetClipPlanes) {
        if (on) {
            auto panel = new Internal::PanelView3d(this);
            auto widget = new WidgetClipPlanes(m_guiDoc->v3dView(), panel);
            WidgetsUtils::addContentsWidget(panel, widget);
            panel->show();
            panel->adjustSize();
            m_widgetClipPlanes = widget;
            QObject::connect(
                        m_guiDoc, &GuiDocument::graphicsBoundingBoxChanged,
                        widget, &WidgetClipPlanes::setRanges);
            widget->setRanges(m_guiDoc->graphicsBoundingBox());
        }
    }
    else {
        QWidget* panel = m_widgetClipPlanes->parentWidget();
        panel->setVisible(on);
        m_widgetClipPlanes->setClippingOn(panel->isVisible());
    }

    this->layoutWidgetPanel(m_widgetClipPlanes);
    if (on)
        m_btnExplode->setChecked(false);
}

void WidgetGuiDocument::toggleWidgetExplode(bool on)
{
    if (!m_widgetExplodeAsm) {
        if (on) {
            auto panel = new Internal::PanelView3d(this);
            auto widget = new WidgetExplodeAssembly(m_guiDoc, panel);
            WidgetsUtils::addContentsWidget(panel, widget);
            panel->show();
            panel->adjustSize();
            m_widgetExplodeAsm = widget;
        }
    }
    else {
        QWidget* panel = m_widgetExplodeAsm->parentWidget();
        panel->setVisible(on);
    }

    this->layoutWidgetPanel(m_widgetExplodeAsm);
    if (on)
        m_btnEditClipping->setChecked(false);
}

void WidgetGuiDocument::layoutWidgetPanel(QWidget* panel)
{
    auto fnPanelPos = [=](QWidget* panel) -> QPoint {
        const QRect ctrlRect = this->viewControlsRect();
        const int margin = Internal::widgetMargin;
        if (m_guiDoc->viewTrihedronMode() != GuiDocument::ViewTrihedronMode::AisViewCube)
            return QPoint(margin, ctrlRect.bottom() + margin);

        switch (m_guiDoc->viewTrihedronCorner()) {
        case Qt::TopLeftCorner:
            return QPoint(ctrlRect.left(), ctrlRect.bottom() + margin);
        case Qt::TopRightCorner:
            return QPoint(this->width() - panel->width(), ctrlRect.bottom() + margin);
        case Qt::BottomLeftCorner:
            return QPoint(margin, ctrlRect.top() - panel->height() - margin);
        case Qt::BottomRightCorner:
            return QPoint(this->width() - panel->width(), ctrlRect.top() - panel->height() - margin);
        } // endswitch

        return QPoint(margin, ctrlRect.bottom() + margin);
    };

    QWidget* widget = panel ? panel->parentWidget() : nullptr;
    if (widget && widget->isVisible())
        widget->move(fnPanelPos(widget));
}

ButtonFlat* WidgetGuiDocument::createViewBtn(QWidget* parent, Theme::Icon icon, const QString& tooltip) const
{
    const QColor bkgndColor =
            m_qtOccView->supportsWidgetOpacity() ?
                Qt::transparent :
                mayoTheme()->color(Theme::Color::ButtonView3d_Background);

    auto btn = new ButtonFlat(parent);
    btn->setBackgroundBrush(bkgndColor);
    btn->setCheckedBrush(mayoTheme()->color(Theme::Color::ButtonView3d_Checked));
    btn->setHoverBrush(mayoTheme()->color(Theme::Color::ButtonView3d_Hover));
    btn->setIcon(mayoTheme()->icon(icon));
    btn->setIconSize(QSize(18, 18));
    btn->setFixedSize(24, 24);
    btn->setToolTip(tooltip);
    return btn;
}

void WidgetGuiDocument::recreateViewControls()
{
    for (QWidget* widget : m_vecWidgetForViewProj)
        delete widget;

    m_vecWidgetForViewProj.clear();

    struct ButtonCreationData {
        V3d_TypeOfOrientation proj;
        Theme::Icon icon;
        QString text;
    };
    const ButtonCreationData btnCreationData[] = {
        { V3d_XposYnegZpos, Theme::Icon::View3dIso, tr("Isometric") },
        { V3d_Ypos, Theme::Icon::View3dBack,   tr("Back")},
        { V3d_Yneg, Theme::Icon::View3dFront,  tr("Front") },
        { V3d_Xneg, Theme::Icon::View3dLeft,   tr("Left") },
        { V3d_Xpos, Theme::Icon::View3dRight,  tr("Right") },
        { V3d_Zpos, Theme::Icon::View3dTop,    tr("Top") },
        { V3d_Zneg, Theme::Icon::View3dBottom, tr("Bottom") }
    };
    if (m_guiDoc->viewTrihedronMode() == GuiDocument::ViewTrihedronMode::AisViewCube) {
        static Internal::MenuIconSizeStyle* menuStyle = nullptr;
        if (!menuStyle) {
            menuStyle = new Internal::MenuIconSizeStyle;
            menuStyle->setMenuIconSize(m_btnFitAll->iconSize().width());
        }

        const QString strTemplateTooltip =
                tr("<b>Left-click</b>: popup menu of pre-defined views\n"
                   "<b>CTRL+Left-click</b>: apply '%1' view");
        auto btnViewMenu = this->createViewBtn(this, Theme::Icon::View3dIso, QString());
        btnViewMenu->setToolTip(strTemplateTooltip.arg(btnCreationData[0].text));
        btnViewMenu->setData(static_cast<int>(btnCreationData[0].proj));
        auto menuBtnView = new QMenu(btnViewMenu);
        menuBtnView->setStyle(menuStyle);
        const QString strPanelBkgndColor = this->panelBackgroundColor().name(QColor::HexArgb);
        menuBtnView->setStyleSheet(QString("QMenu { background:%1; border: 0px }").arg(strPanelBkgndColor));
        menuBtnView->setWindowFlags(menuBtnView->windowFlags() | Qt::FramelessWindowHint | Qt::NoDropShadowWindowHint);
        if (m_qtOccView->supportsWidgetOpacity())
            menuBtnView->setAttribute(Qt::WA_TranslucentBackground);

        m_vecWidgetForViewProj.push_back(btnViewMenu);
        for (const ButtonCreationData& btnData : btnCreationData) {
            auto action = menuBtnView->addAction(mayoTheme()->icon(btnData.icon), btnData.text);
            QObject::connect(action, &QAction::triggered, this, [=]{
                m_guiDoc->setViewCameraOrientation(btnData.proj);
                btnViewMenu->setIcon(action->icon());
                btnViewMenu->setToolTip(strTemplateTooltip.arg(btnData.text));
                btnViewMenu->setData(int(btnData.proj));
                btnViewMenu->update();
            });
        }

        //QStyle::PE_IndicatorArrowDown
        QObject::connect(btnViewMenu, &ButtonFlat::clicked, this, [=]{
            const Qt::KeyboardModifiers keyMods = QGuiApplication::queryKeyboardModifiers();
            if (!keyMods.testFlag(Qt::ControlModifier))
                menuBtnView->popup(btnViewMenu->mapToGlobal({ 0, btnViewMenu->height() }));
            else
                m_guiDoc->setViewCameraOrientation(V3d_TypeOfOrientation(btnViewMenu->data().toInt()));
        });
    }
    else {
        for (const ButtonCreationData& btnData : btnCreationData) {
            auto btnViewProj = this->createViewBtn(this, btnData.icon, btnData.text);
            QObject::connect(btnViewProj, &ButtonFlat::clicked, this, [=]{
                m_guiDoc->setViewCameraOrientation(btnData.proj);
            });
            m_vecWidgetForViewProj.push_back(btnViewProj);
        }
    }

    this->layoutViewControls();
}

QRect WidgetGuiDocument::viewControlsRect() const
{
    const QRect rectFirstBtn = m_btnFitAll->frameGeometry();
    const QRect rectLastBtn = m_btnExplode->frameGeometry();
    QRect rect;
    rect.setCoords(
                rectFirstBtn.left(), rectFirstBtn.top(),
                rectLastBtn.right(), rectLastBtn.bottom());
    return rect;
}

void WidgetGuiDocument::layoutViewControls()
{
    const int margin = Internal::widgetMargin;
    auto fnGetViewControlsPos = [=]() -> QPoint {
        if (m_guiDoc->viewTrihedronMode() == GuiDocument::ViewTrihedronMode::AisViewCube) {
            const int btnSize = m_btnFitAll->width();
            const int viewCubeBndSize = m_guiDoc->aisViewCubeBoundingSize();
            const int ctrlCount = 2 + m_vecWidgetForViewProj.size();
            const int ctrlWidth = ctrlCount * btnSize + (ctrlCount - 1) * margin;
            const int ctrlHeight = btnSize;
            const int ctrlXOffset = (viewCubeBndSize - ctrlWidth) / 2;
            switch (m_guiDoc->viewTrihedronCorner()) {
            case Qt::TopLeftCorner:
                return { ctrlXOffset, viewCubeBndSize + margin };
            case Qt::TopRightCorner:
                return { this->width() - viewCubeBndSize + ctrlXOffset, viewCubeBndSize + margin };
            case Qt::BottomLeftCorner:
                return { ctrlXOffset, this->height() - viewCubeBndSize - margin - ctrlHeight };
            case Qt::BottomRightCorner:
                return { this->width() - viewCubeBndSize + ctrlXOffset,
                         this->height() - viewCubeBndSize - margin - ctrlHeight };
            } // endswitch
        }

        return { margin, margin };
    };

    m_btnFitAll->move(fnGetViewControlsPos());
    const QWidget* widgetLast = m_btnFitAll;
    for (QWidget* widget : m_vecWidgetForViewProj) {
        WidgetsUtils::moveWidgetRightTo(widget, widgetLast, margin);
        widgetLast = widget;
    }

    WidgetsUtils::moveWidgetRightTo(m_btnEditClipping, widgetLast, margin);
    WidgetsUtils::moveWidgetRightTo(m_btnExplode, m_btnEditClipping, margin);
}

} // namespace Mayo
