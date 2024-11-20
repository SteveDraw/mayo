/****************************************************************************
** Copyright (c) 2022, Fougue Ltd. <http://www.fougue.pro>
** All rights reserved.
** See license at https://github.com/fougue/mayo/blob/master/LICENSE.txt
****************************************************************************/

#include "commands_window.h"

#include "../base/application.h"
#include "theme.h"

#include <QtGui/QShowEvent>
#include <QtWidgets/QWidget>

namespace Mayo {

CommandMainWidgetToggleFullscreen::CommandMainWidgetToggleFullscreen(IAppContext* context)
    : Command(context)
{
    auto action = new QAction(this);
    action->setText(Command::tr("全屏显示"));
    action->setToolTip(Command::tr("选择 全屏/正常状态"));
    action->setShortcut(Qt::Key_F11);
    action->setCheckable(true);
    action->setChecked(context->widgetMain()->isFullScreen());
    this->setAction(action);
}

void CommandMainWidgetToggleFullscreen::execute()
{
    auto widget = this->widgetMain();
    if (widget->isFullScreen()) {
        if (m_previousWindowState.testFlag(Qt::WindowMaximized))
            widget->showMaximized();
        else
            widget->showNormal();
    }
    else {
        m_previousWindowState = widget->windowState();
        widget->showFullScreen();
    }
}

CommandLeftSidebarWidgetToggle::CommandLeftSidebarWidgetToggle(IAppContext* context)
    : Command(context)
{
    auto action = new QAction(this);
    action->setToolTip(Command::tr("显示/隐藏 左侧边栏"));
    action->setShortcut(Qt::ALT + Qt::Key_0);
    action->setCheckable(true);
    action->setChecked(context->pageDocuments_widgetLeftSideBar()->isVisible());
    this->setAction(action);
    this->updateAction();
    context->pageDocuments_widgetLeftSideBar()->installEventFilter(this);
}

void CommandLeftSidebarWidgetToggle::execute()
{
    QWidget* widget = this->context()->pageDocuments_widgetLeftSideBar();
    widget->setVisible(!widget->isVisible());
}

bool CommandLeftSidebarWidgetToggle::getEnabledStatus() const
{
    return this->context()->currentPage() != IAppContext::Page::Home;
}

bool CommandLeftSidebarWidgetToggle::eventFilter(QObject* watched, QEvent* event)
{
    if (event->type() == QEvent::Show || event->type() == QEvent::Hide) {
        if (watched == this->context()->pageDocuments_widgetLeftSideBar()) {
            this->updateAction();
            return true;
        }
    }

    return Command::eventFilter(watched, event);
}

void CommandLeftSidebarWidgetToggle::updateAction()
{
    if (this->context()->pageDocuments_widgetLeftSideBar()->isVisible()) {
        this->action()->setText(Command::tr("隐藏左侧边栏"));
        this->action()->setIcon(mayoTheme()->icon(Theme::Icon::BackSquare));
    }
    else {
        this->action()->setText(Command::tr("显示左侧边栏"));
        this->action()->setIcon(mayoTheme()->icon(Theme::Icon::LeftSidebar));
    }

    this->action()->setToolTip(this->action()->text());
}

CommandSwitchMainWidgetMode::CommandSwitchMainWidgetMode(IAppContext* context)
    : Command(context)
{
    auto action = new QAction(this);
    action->setToolTip(Command::tr("转到主页"));
    action->setShortcut(Qt::CTRL + Qt::Key_0);
    this->setAction(action);
    this->updateAction();
    context->widgetPage(IAppContext::Page::Home)->installEventFilter(this);
    context->widgetPage(IAppContext::Page::Documents)->installEventFilter(this);
}

void CommandSwitchMainWidgetMode::execute()
{
    auto newPage = IAppContext::Page::Unknown;
    switch (this->context()->currentPage()) {
    case IAppContext::Page::Home:
        newPage = IAppContext::Page::Documents;
        break;
    case IAppContext::Page::Documents:
        newPage = IAppContext::Page::Home;
        break;
    case IAppContext::Page::Unknown:
        break;
    }

    this->context()->setCurrentPage(newPage);
    this->context()->updateControlsEnabledStatus();
}

bool CommandSwitchMainWidgetMode::getEnabledStatus() const
{
    return this->app()->documentCount() != 0;
}

bool CommandSwitchMainWidgetMode::eventFilter(QObject* watched, QEvent* event)
{
    if (event->type() == QEvent::Show) {
        if (watched == this->context()->widgetPage(IAppContext::Page::Home)
                || watched == this->context()->widgetPage(IAppContext::Page::Documents))
        {
            this->updateAction();
            return true;
        }
    }

    return Command::eventFilter(watched, event);
}

void CommandSwitchMainWidgetMode::updateAction()
{
    switch (this->context()->currentPage()) {
    case IAppContext::Page::Home:
        this->action()->setText(Command::tr("转到项目文档"));
        break;
    case IAppContext::Page::Documents:
        this->action()->setText(Command::tr("转到主页"));
        break;
    case IAppContext::Page::Unknown:
        break;
    }
}

CommandPreviousDocument::CommandPreviousDocument(IAppContext* context)
    : Command(context)
{
    auto action = new QAction(this);
    action->setText(Command::tr("前一个的项目文档"));
    action->setToolTip(Command::tr("前一个的项目文档"));
    action->setIcon(mayoTheme()->icon(Theme::Icon::Back));
    action->setShortcut(Qt::ALT + Qt::Key_Left);
    this->setAction(action);
}

void CommandPreviousDocument::execute()
{
    const int prevDocIndex = this->currentDocumentIndex() - 1;
    this->context()->setCurrentDocument(this->context()->findDocumentFromIndex(prevDocIndex));
}

bool CommandPreviousDocument::getEnabledStatus() const
{
    return this->app()->documentCount() != 0
            && this->context()->currentPage() == IAppContext::Page::Documents
            && this->currentDocumentIndex() > 0;
}

CommandNextDocument::CommandNextDocument(IAppContext* context)
    : Command(context)
{
    auto action = new QAction(this);
    action->setText(Command::tr("后一个的项目文档"));
    action->setToolTip(Command::tr("后一个的项目文档"));
    action->setIcon(mayoTheme()->icon(Theme::Icon::Next));
    action->setShortcut(Qt::ALT + Qt::Key_Right);
    this->setAction(action);
}

void CommandNextDocument::execute()
{
    const int nextDocIndex = this->currentDocumentIndex() + 1;
    this->context()->setCurrentDocument(this->context()->findDocumentFromIndex(nextDocIndex));
}

bool CommandNextDocument::getEnabledStatus() const
{
    const int appDocumentCount = this->app()->documentCount();
    return appDocumentCount != 0
            && this->context()->currentPage() == IAppContext::Page::Documents
            && this->currentDocumentIndex() < appDocumentCount - 1;
}

} // namespace Mayo
