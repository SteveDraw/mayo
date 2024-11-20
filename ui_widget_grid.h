/********************************************************************************
** Form generated from reading UI file 'widget_grid.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_GRID_H
#define UI_WIDGET_GRID_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace Mayo {

class Ui_WidgetGrid
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *check_ShowGrid;
    QComboBox *combo_Plane;
    QWidget *widget_Main;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *btn_Config;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_Config;
    QGridLayout *gridLayout_4;
    QLabel *label_Type;
    QComboBox *combo_Type;
    QStackedWidget *stack_Config;
    QWidget *page_Rectangular;
    QGridLayout *gridLayout;
    QDoubleSpinBox *edit_RectOriginY;
    QLabel *label_7;
    QDoubleSpinBox *edit_RectStepX;
    QDoubleSpinBox *edit_RectStepY;
    QLabel *label;
    QDoubleSpinBox *edit_RectSizeX;
    QDoubleSpinBox *edit_RectSizeY;
    QLabel *label_5;
    QDoubleSpinBox *edit_RectRotation;
    QWidget *widget_2;
    QLabel *label_8;
    QDoubleSpinBox *edit_RectOffset;
    QDoubleSpinBox *edit_RectOriginX;
    QLabel *label_RectOrigin;
    QWidget *page_Circular;
    QGridLayout *gridLayout_2;
    QLabel *label_9;
    QDoubleSpinBox *edit_CircOriginX;
    QDoubleSpinBox *edit_CircOriginY;
    QLabel *label_4;
    QDoubleSpinBox *edit_CircRadius;
    QWidget *widget;
    QLabel *label_2;
    QDoubleSpinBox *edit_CircRadiusStep;
    QLabel *label_3;
    QSpinBox *edit_CircDivision;
    QLabel *label_10;
    QDoubleSpinBox *edit_CircRotation;
    QLabel *label_11;
    QDoubleSpinBox *edit_CircOffset;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QToolButton *btn_Graphics;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_Graphics;
    QGridLayout *gridLayout_3;
    QToolButton *btn_Color;
    QLabel *label_ColorTenth;
    QToolButton *btn_ColorTenth;
    QLabel *label_14;
    QComboBox *combo_DrawMode;
    QLabel *label_12;
    QCheckBox *check_ColorTenth;
    QWidget *widget_3;

    void setupUi(QWidget *Mayo__WidgetGrid)
    {
        if (Mayo__WidgetGrid->objectName().isEmpty())
            Mayo__WidgetGrid->setObjectName("Mayo__WidgetGrid");
        Mayo__WidgetGrid->resize(196, 336);
        verticalLayout_5 = new QVBoxLayout(Mayo__WidgetGrid);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(4, 4, 4, 4);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        check_ShowGrid = new QCheckBox(Mayo__WidgetGrid);
        check_ShowGrid->setObjectName("check_ShowGrid");

        horizontalLayout_3->addWidget(check_ShowGrid);

        combo_Plane = new QComboBox(Mayo__WidgetGrid);
        combo_Plane->addItem(QString());
        combo_Plane->addItem(QString());
        combo_Plane->addItem(QString());
        combo_Plane->addItem(QString());
        combo_Plane->setObjectName("combo_Plane");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(combo_Plane->sizePolicy().hasHeightForWidth());
        combo_Plane->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(combo_Plane);


        verticalLayout_5->addLayout(horizontalLayout_3);

        widget_Main = new QWidget(Mayo__WidgetGrid);
        widget_Main->setObjectName("widget_Main");
        verticalLayout_4 = new QVBoxLayout(widget_Main);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btn_Config = new QToolButton(widget_Main);
        btn_Config->setObjectName("btn_Config");
        btn_Config->setCheckable(true);
        btn_Config->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btn_Config->setAutoRaise(true);
        btn_Config->setArrowType(Qt::RightArrow);

        horizontalLayout_2->addWidget(btn_Config);

        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        widget_Config = new QWidget(widget_Main);
        widget_Config->setObjectName("widget_Config");
        gridLayout_4 = new QGridLayout(widget_Config);
        gridLayout_4->setSpacing(2);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_Type = new QLabel(widget_Config);
        label_Type->setObjectName("label_Type");
        label_Type->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_Type, 0, 0, 1, 1);

        combo_Type = new QComboBox(widget_Config);
        combo_Type->addItem(QString());
        combo_Type->addItem(QString());
        combo_Type->setObjectName("combo_Type");
        sizePolicy.setHeightForWidth(combo_Type->sizePolicy().hasHeightForWidth());
        combo_Type->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(combo_Type, 0, 1, 1, 1);

        stack_Config = new QStackedWidget(widget_Config);
        stack_Config->setObjectName("stack_Config");
        page_Rectangular = new QWidget();
        page_Rectangular->setObjectName("page_Rectangular");
        gridLayout = new QGridLayout(page_Rectangular);
        gridLayout->setSpacing(2);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        edit_RectOriginY = new QDoubleSpinBox(page_Rectangular);
        edit_RectOriginY->setObjectName("edit_RectOriginY");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(edit_RectOriginY->sizePolicy().hasHeightForWidth());
        edit_RectOriginY->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(edit_RectOriginY, 0, 2, 1, 1);

        label_7 = new QLabel(page_Rectangular);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        edit_RectStepX = new QDoubleSpinBox(page_Rectangular);
        edit_RectStepX->setObjectName("edit_RectStepX");
        sizePolicy1.setHeightForWidth(edit_RectStepX->sizePolicy().hasHeightForWidth());
        edit_RectStepX->setSizePolicy(sizePolicy1);
        edit_RectStepX->setMinimum(0.010000000000000);

        gridLayout->addWidget(edit_RectStepX, 1, 1, 1, 1);

        edit_RectStepY = new QDoubleSpinBox(page_Rectangular);
        edit_RectStepY->setObjectName("edit_RectStepY");
        sizePolicy1.setHeightForWidth(edit_RectStepY->sizePolicy().hasHeightForWidth());
        edit_RectStepY->setSizePolicy(sizePolicy1);
        edit_RectStepY->setMinimum(0.010000000000000);

        gridLayout->addWidget(edit_RectStepY, 1, 2, 1, 1);

        label = new QLabel(page_Rectangular);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        edit_RectSizeX = new QDoubleSpinBox(page_Rectangular);
        edit_RectSizeX->setObjectName("edit_RectSizeX");
        sizePolicy1.setHeightForWidth(edit_RectSizeX->sizePolicy().hasHeightForWidth());
        edit_RectSizeX->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(edit_RectSizeX, 2, 1, 1, 1);

        edit_RectSizeY = new QDoubleSpinBox(page_Rectangular);
        edit_RectSizeY->setObjectName("edit_RectSizeY");
        sizePolicy1.setHeightForWidth(edit_RectSizeY->sizePolicy().hasHeightForWidth());
        edit_RectSizeY->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(edit_RectSizeY, 2, 2, 1, 1);

        label_5 = new QLabel(page_Rectangular);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        edit_RectRotation = new QDoubleSpinBox(page_Rectangular);
        edit_RectRotation->setObjectName("edit_RectRotation");
        sizePolicy1.setHeightForWidth(edit_RectRotation->sizePolicy().hasHeightForWidth());
        edit_RectRotation->setSizePolicy(sizePolicy1);
        edit_RectRotation->setMinimum(-180.000000000000000);
        edit_RectRotation->setMaximum(180.000000000000000);
        edit_RectRotation->setSingleStep(5.000000000000000);

        gridLayout->addWidget(edit_RectRotation, 3, 1, 1, 1);

        widget_2 = new QWidget(page_Rectangular);
        widget_2->setObjectName("widget_2");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(widget_2, 3, 2, 1, 1);

        label_8 = new QLabel(page_Rectangular);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 4, 0, 1, 1);

        edit_RectOffset = new QDoubleSpinBox(page_Rectangular);
        edit_RectOffset->setObjectName("edit_RectOffset");
        sizePolicy1.setHeightForWidth(edit_RectOffset->sizePolicy().hasHeightForWidth());
        edit_RectOffset->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(edit_RectOffset, 4, 1, 1, 1);

        edit_RectOriginX = new QDoubleSpinBox(page_Rectangular);
        edit_RectOriginX->setObjectName("edit_RectOriginX");
        sizePolicy1.setHeightForWidth(edit_RectOriginX->sizePolicy().hasHeightForWidth());
        edit_RectOriginX->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(edit_RectOriginX, 0, 1, 1, 1);

        label_RectOrigin = new QLabel(page_Rectangular);
        label_RectOrigin->setObjectName("label_RectOrigin");
        label_RectOrigin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_RectOrigin, 0, 0, 1, 1);

        stack_Config->addWidget(page_Rectangular);
        page_Circular = new QWidget();
        page_Circular->setObjectName("page_Circular");
        gridLayout_2 = new QGridLayout(page_Circular);
        gridLayout_2->setSpacing(2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(page_Circular);
        label_9->setObjectName("label_9");
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_9, 0, 0, 1, 1);

        edit_CircOriginX = new QDoubleSpinBox(page_Circular);
        edit_CircOriginX->setObjectName("edit_CircOriginX");
        sizePolicy1.setHeightForWidth(edit_CircOriginX->sizePolicy().hasHeightForWidth());
        edit_CircOriginX->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(edit_CircOriginX, 0, 1, 1, 1);

        edit_CircOriginY = new QDoubleSpinBox(page_Circular);
        edit_CircOriginY->setObjectName("edit_CircOriginY");
        sizePolicy1.setHeightForWidth(edit_CircOriginY->sizePolicy().hasHeightForWidth());
        edit_CircOriginY->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(edit_CircOriginY, 0, 2, 1, 1);

        label_4 = new QLabel(page_Circular);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        edit_CircRadius = new QDoubleSpinBox(page_Circular);
        edit_CircRadius->setObjectName("edit_CircRadius");
        sizePolicy1.setHeightForWidth(edit_CircRadius->sizePolicy().hasHeightForWidth());
        edit_CircRadius->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(edit_CircRadius, 1, 1, 1, 1);

        widget = new QWidget(page_Circular);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(widget, 1, 2, 1, 1);

        label_2 = new QLabel(page_Circular);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        edit_CircRadiusStep = new QDoubleSpinBox(page_Circular);
        edit_CircRadiusStep->setObjectName("edit_CircRadiusStep");
        sizePolicy1.setHeightForWidth(edit_CircRadiusStep->sizePolicy().hasHeightForWidth());
        edit_CircRadiusStep->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(edit_CircRadiusStep, 2, 1, 1, 1);

        label_3 = new QLabel(page_Circular);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        edit_CircDivision = new QSpinBox(page_Circular);
        edit_CircDivision->setObjectName("edit_CircDivision");
        sizePolicy1.setHeightForWidth(edit_CircDivision->sizePolicy().hasHeightForWidth());
        edit_CircDivision->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(edit_CircDivision, 3, 1, 1, 1);

        label_10 = new QLabel(page_Circular);
        label_10->setObjectName("label_10");
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_10, 4, 0, 1, 1);

        edit_CircRotation = new QDoubleSpinBox(page_Circular);
        edit_CircRotation->setObjectName("edit_CircRotation");
        sizePolicy1.setHeightForWidth(edit_CircRotation->sizePolicy().hasHeightForWidth());
        edit_CircRotation->setSizePolicy(sizePolicy1);
        edit_CircRotation->setMinimum(-180.000000000000000);
        edit_CircRotation->setMaximum(180.000000000000000);
        edit_CircRotation->setSingleStep(5.000000000000000);

        gridLayout_2->addWidget(edit_CircRotation, 4, 1, 1, 1);

        label_11 = new QLabel(page_Circular);
        label_11->setObjectName("label_11");
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_11, 5, 0, 1, 1);

        edit_CircOffset = new QDoubleSpinBox(page_Circular);
        edit_CircOffset->setObjectName("edit_CircOffset");
        sizePolicy1.setHeightForWidth(edit_CircOffset->sizePolicy().hasHeightForWidth());
        edit_CircOffset->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(edit_CircOffset, 5, 1, 1, 1);

        stack_Config->addWidget(page_Circular);

        gridLayout_4->addWidget(stack_Config, 1, 0, 1, 2);


        verticalLayout_2->addWidget(widget_Config);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btn_Graphics = new QToolButton(widget_Main);
        btn_Graphics->setObjectName("btn_Graphics");
        btn_Graphics->setCheckable(true);
        btn_Graphics->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btn_Graphics->setAutoRaise(true);
        btn_Graphics->setArrowType(Qt::RightArrow);

        horizontalLayout->addWidget(btn_Graphics);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout);

        widget_Graphics = new QWidget(widget_Main);
        widget_Graphics->setObjectName("widget_Graphics");
        gridLayout_3 = new QGridLayout(widget_Graphics);
        gridLayout_3->setSpacing(2);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        btn_Color = new QToolButton(widget_Graphics);
        btn_Color->setObjectName("btn_Color");

        gridLayout_3->addWidget(btn_Color, 1, 1, 1, 1);

        label_ColorTenth = new QLabel(widget_Graphics);
        label_ColorTenth->setObjectName("label_ColorTenth");
        label_ColorTenth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_ColorTenth, 2, 0, 1, 1);

        btn_ColorTenth = new QToolButton(widget_Graphics);
        btn_ColorTenth->setObjectName("btn_ColorTenth");

        gridLayout_3->addWidget(btn_ColorTenth, 2, 1, 1, 1);

        label_14 = new QLabel(widget_Graphics);
        label_14->setObjectName("label_14");
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_14, 0, 0, 1, 1);

        combo_DrawMode = new QComboBox(widget_Graphics);
        combo_DrawMode->addItem(QString());
        combo_DrawMode->addItem(QString());
        combo_DrawMode->setObjectName("combo_DrawMode");

        gridLayout_3->addWidget(combo_DrawMode, 0, 1, 1, 3);

        label_12 = new QLabel(widget_Graphics);
        label_12->setObjectName("label_12");
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_12, 1, 0, 1, 1);

        check_ColorTenth = new QCheckBox(widget_Graphics);
        check_ColorTenth->setObjectName("check_ColorTenth");
        check_ColorTenth->setChecked(true);

        gridLayout_3->addWidget(check_ColorTenth, 2, 2, 1, 1);

        widget_3 = new QWidget(widget_Graphics);
        widget_3->setObjectName("widget_3");
        sizePolicy3.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(widget_3, 1, 2, 1, 2);


        verticalLayout_3->addWidget(widget_Graphics);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_5->addWidget(widget_Main);

        QWidget::setTabOrder(check_ShowGrid, combo_Plane);
        QWidget::setTabOrder(combo_Plane, btn_Config);
        QWidget::setTabOrder(btn_Config, combo_Type);
        QWidget::setTabOrder(combo_Type, edit_RectOriginX);
        QWidget::setTabOrder(edit_RectOriginX, edit_RectOriginY);
        QWidget::setTabOrder(edit_RectOriginY, edit_RectStepX);
        QWidget::setTabOrder(edit_RectStepX, edit_RectStepY);
        QWidget::setTabOrder(edit_RectStepY, edit_RectSizeX);
        QWidget::setTabOrder(edit_RectSizeX, edit_RectSizeY);
        QWidget::setTabOrder(edit_RectSizeY, edit_RectRotation);
        QWidget::setTabOrder(edit_RectRotation, edit_RectOffset);
        QWidget::setTabOrder(edit_RectOffset, btn_Graphics);
        QWidget::setTabOrder(btn_Graphics, combo_DrawMode);
        QWidget::setTabOrder(combo_DrawMode, btn_Color);
        QWidget::setTabOrder(btn_Color, btn_ColorTenth);
        QWidget::setTabOrder(btn_ColorTenth, edit_CircOriginX);
        QWidget::setTabOrder(edit_CircOriginX, edit_CircOriginY);
        QWidget::setTabOrder(edit_CircOriginY, edit_CircRadius);
        QWidget::setTabOrder(edit_CircRadius, edit_CircRadiusStep);
        QWidget::setTabOrder(edit_CircRadiusStep, edit_CircDivision);
        QWidget::setTabOrder(edit_CircDivision, edit_CircRotation);
        QWidget::setTabOrder(edit_CircRotation, edit_CircOffset);

        retranslateUi(Mayo__WidgetGrid);

        stack_Config->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Mayo__WidgetGrid);
    } // setupUi

    void retranslateUi(QWidget *Mayo__WidgetGrid)
    {
        Mayo__WidgetGrid->setWindowTitle(QCoreApplication::translate("Mayo::WidgetGrid", "Form", nullptr));
        check_ShowGrid->setText(QCoreApplication::translate("Mayo::WidgetGrid", "Show Grid", nullptr));
        combo_Plane->setItemText(0, QCoreApplication::translate("Mayo::WidgetGrid", "Plane: XOY", nullptr));
        combo_Plane->setItemText(1, QCoreApplication::translate("Mayo::WidgetGrid", "Plane: ZOX", nullptr));
        combo_Plane->setItemText(2, QCoreApplication::translate("Mayo::WidgetGrid", "Plane: YOZ", nullptr));
        combo_Plane->setItemText(3, QCoreApplication::translate("Mayo::WidgetGrid", "Plane: Custom", nullptr));

        btn_Config->setText(QCoreApplication::translate("Mayo::WidgetGrid", "Configuration", nullptr));
        label_Type->setText(QCoreApplication::translate("Mayo::WidgetGrid", "Type", nullptr));
        combo_Type->setItemText(0, QCoreApplication::translate("Mayo::WidgetGrid", "Rectangular", nullptr));
        combo_Type->setItemText(1, QCoreApplication::translate("Mayo::WidgetGrid", "Circular", nullptr));

        edit_RectOriginY->setPrefix(QCoreApplication::translate("Mayo::WidgetGrid", "Y", nullptr));
        label_7->setText(QCoreApplication::translate("Mayo::WidgetGrid", "Step", nullptr));
        edit_RectStepX->setPrefix(QCoreApplication::translate("Mayo::WidgetGrid", "X", nullptr));
        edit_RectStepY->setPrefix(QCoreApplication::translate("Mayo::WidgetGrid", "Y", nullptr));
        label->setText(QCoreApplication::translate("Mayo::WidgetGrid", "Size", nullptr));
        edit_RectSizeX->setPrefix(QCoreApplication::translate("Mayo::WidgetGrid", "X", nullptr));
        edit_RectSizeY->setPrefix(QCoreApplication::translate("Mayo::WidgetGrid", "Y", nullptr));
        label_5->setText(QCoreApplication::translate("Mayo::WidgetGrid", "Rotation", nullptr));
        edit_RectRotation->setSuffix(QCoreApplication::translate("Mayo::WidgetGrid", "\302\260", nullptr));
        label_8->setText(QCoreApplication::translate("Mayo::WidgetGrid", "Offset", nullptr));
        edit_RectOffset->setSuffix(QString());
        edit_RectOriginX->setPrefix(QCoreApplication::translate("Mayo::WidgetGrid", "X", nullptr));
        label_RectOrigin->setText(QCoreApplication::translate("Mayo::WidgetGrid", "Origin", nullptr));
        label_9->setText(QCoreApplication::translate("Mayo::WidgetGrid", "Origin", nullptr));
        edit_CircOriginX->setPrefix(QCoreApplication::translate("Mayo::WidgetGrid", "X", nullptr));
        edit_CircOriginY->setPrefix(QCoreApplication::translate("Mayo::WidgetGrid", "Y", nullptr));
        label_4->setText(QCoreApplication::translate("Mayo::WidgetGrid", "Radius", nullptr));
        label_2->setText(QCoreApplication::translate("Mayo::WidgetGrid", "Radius Step", nullptr));
        label_3->setText(QCoreApplication::translate("Mayo::WidgetGrid", "Division", nullptr));
        label_10->setText(QCoreApplication::translate("Mayo::WidgetGrid", "Rotation", nullptr));
        edit_CircRotation->setSuffix(QCoreApplication::translate("Mayo::WidgetGrid", "\302\260", nullptr));
        label_11->setText(QCoreApplication::translate("Mayo::WidgetGrid", "Offset", nullptr));
        edit_CircOffset->setSuffix(QString());
        btn_Graphics->setText(QCoreApplication::translate("Mayo::WidgetGrid", "Graphics", nullptr));
        btn_Color->setText(QCoreApplication::translate("Mayo::WidgetGrid", "...", nullptr));
        label_ColorTenth->setText(QCoreApplication::translate("Mayo::WidgetGrid", "Tenth Color", nullptr));
        btn_ColorTenth->setText(QCoreApplication::translate("Mayo::WidgetGrid", "...", nullptr));
        label_14->setText(QCoreApplication::translate("Mayo::WidgetGrid", "Mode", nullptr));
        combo_DrawMode->setItemText(0, QCoreApplication::translate("Mayo::WidgetGrid", "Lines", nullptr));
        combo_DrawMode->setItemText(1, QCoreApplication::translate("Mayo::WidgetGrid", "Points", nullptr));

        label_12->setText(QCoreApplication::translate("Mayo::WidgetGrid", "Color", nullptr));
        check_ColorTenth->setText(QString());
    } // retranslateUi

};

} // namespace Mayo

namespace Mayo {
namespace Ui {
    class WidgetGrid: public Ui_WidgetGrid {};
} // namespace Ui
} // namespace Mayo

#endif // UI_WIDGET_GRID_H
