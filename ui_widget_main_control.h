/********************************************************************************
** Form generated from reading UI file 'widget_main_control.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_MAIN_CONTROL_H
#define UI_WIDGET_MAIN_CONTROL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widget_file_system.h"
#include "widget_model_tree.h"
#include "widget_properties_editor.h"

namespace Mayo {

class Ui_WidgetMainControl
{
public:
    QVBoxLayout *verticalLayout_4;
    QSplitter *splitter_Main;
    QWidget *widget_Left;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget_LeftContents;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_LeftHeader;
    QHBoxLayout *Layout_WidgetLeftHeader;
    QComboBox *combo_LeftContents;
    QFrame *line_SeparatorComboLeftContents;
    QToolButton *btn_CloseLeftSideBar;
    QStackedWidget *stack_LeftContents;
    QWidget *page_ModelTree;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter_ModelTree;
    WidgetModelTree *widget_ModelTree;
    WidgetPropertiesEditor *widget_Properties;
    QWidget *page_OpenedDocuments;
    QVBoxLayout *verticalLayout_6;
    QListView *listView_OpenedDocuments;
    QWidget *page_FileSystem;
    QVBoxLayout *verticalLayout_3;
    WidgetFileSystem *widget_FileSystem;
    QWidget *widget_Right;
    QVBoxLayout *verticalLayout;
    QWidget *widget_ControlGuiDocuments;
    QHBoxLayout *horizontalLayout;
    QToolButton *btn_PreviousGuiDocument;
    QToolButton *btn_NextGuiDocument;
    QComboBox *combo_GuiDocuments;
    QFrame *line;
    QToolButton *btn_CloseGuiDocument;
    QFrame *line_2;
    QWidget *widget_Spacer;
    QWidget *widget_MouseCoords;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_PosX;
    QLabel *label_ValuePosX;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_PosY;
    QLabel *label_ValuePosY;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_PosZ;
    QLabel *label_ValuePosZ;
    QStackedWidget *stack_GuiDocuments;

    void setupUi(QWidget *Mayo__WidgetMainControl)
    {
        if (Mayo__WidgetMainControl->objectName().isEmpty())
            Mayo__WidgetMainControl->setObjectName("Mayo__WidgetMainControl");
        Mayo__WidgetMainControl->resize(947, 560);
        verticalLayout_4 = new QVBoxLayout(Mayo__WidgetMainControl);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        splitter_Main = new QSplitter(Mayo__WidgetMainControl);
        splitter_Main->setObjectName("splitter_Main");
        splitter_Main->setOrientation(Qt::Horizontal);
        splitter_Main->setChildrenCollapsible(false);
        widget_Left = new QWidget(splitter_Main);
        widget_Left->setObjectName("widget_Left");
        horizontalLayout_3 = new QHBoxLayout(widget_Left);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_LeftContents = new QWidget(widget_Left);
        widget_LeftContents->setObjectName("widget_LeftContents");
        verticalLayout_5 = new QVBoxLayout(widget_LeftContents);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        widget_LeftHeader = new QWidget(widget_LeftContents);
        widget_LeftHeader->setObjectName("widget_LeftHeader");
        Layout_WidgetLeftHeader = new QHBoxLayout(widget_LeftHeader);
        Layout_WidgetLeftHeader->setSpacing(1);
        Layout_WidgetLeftHeader->setObjectName("Layout_WidgetLeftHeader");
        Layout_WidgetLeftHeader->setContentsMargins(0, 0, 4, 0);
        combo_LeftContents = new QComboBox(widget_LeftHeader);
        combo_LeftContents->addItem(QString());
        combo_LeftContents->addItem(QString());
        combo_LeftContents->addItem(QString());
        combo_LeftContents->setObjectName("combo_LeftContents");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(combo_LeftContents->sizePolicy().hasHeightForWidth());
        combo_LeftContents->setSizePolicy(sizePolicy);
        combo_LeftContents->setMinimumSize(QSize(0, 22));

        Layout_WidgetLeftHeader->addWidget(combo_LeftContents);

        line_SeparatorComboLeftContents = new QFrame(widget_LeftHeader);
        line_SeparatorComboLeftContents->setObjectName("line_SeparatorComboLeftContents");
        line_SeparatorComboLeftContents->setFrameShadow(QFrame::Plain);
        line_SeparatorComboLeftContents->setFrameShape(QFrame::VLine);

        Layout_WidgetLeftHeader->addWidget(line_SeparatorComboLeftContents);

        btn_CloseLeftSideBar = new QToolButton(widget_LeftHeader);
        btn_CloseLeftSideBar->setObjectName("btn_CloseLeftSideBar");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/classic/left-arrow-cross_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_CloseLeftSideBar->setIcon(icon);
        btn_CloseLeftSideBar->setAutoRaise(true);

        Layout_WidgetLeftHeader->addWidget(btn_CloseLeftSideBar);


        verticalLayout_5->addWidget(widget_LeftHeader);

        stack_LeftContents = new QStackedWidget(widget_LeftContents);
        stack_LeftContents->setObjectName("stack_LeftContents");
        page_ModelTree = new QWidget();
        page_ModelTree->setObjectName("page_ModelTree");
        verticalLayout_2 = new QVBoxLayout(page_ModelTree);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        splitter_ModelTree = new QSplitter(page_ModelTree);
        splitter_ModelTree->setObjectName("splitter_ModelTree");
        splitter_ModelTree->setOrientation(Qt::Vertical);
        widget_ModelTree = new WidgetModelTree(splitter_ModelTree);
        widget_ModelTree->setObjectName("widget_ModelTree");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(widget_ModelTree->sizePolicy().hasHeightForWidth());
        widget_ModelTree->setSizePolicy(sizePolicy1);
        splitter_ModelTree->addWidget(widget_ModelTree);
        widget_Properties = new WidgetPropertiesEditor(splitter_ModelTree);
        widget_Properties->setObjectName("widget_Properties");
        splitter_ModelTree->addWidget(widget_Properties);

        verticalLayout_2->addWidget(splitter_ModelTree);

        stack_LeftContents->addWidget(page_ModelTree);
        page_OpenedDocuments = new QWidget();
        page_OpenedDocuments->setObjectName("page_OpenedDocuments");
        verticalLayout_6 = new QVBoxLayout(page_OpenedDocuments);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        listView_OpenedDocuments = new QListView(page_OpenedDocuments);
        listView_OpenedDocuments->setObjectName("listView_OpenedDocuments");
        listView_OpenedDocuments->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listView_OpenedDocuments->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listView_OpenedDocuments->setTextElideMode(Qt::ElideMiddle);

        verticalLayout_6->addWidget(listView_OpenedDocuments);

        stack_LeftContents->addWidget(page_OpenedDocuments);
        page_FileSystem = new QWidget();
        page_FileSystem->setObjectName("page_FileSystem");
        verticalLayout_3 = new QVBoxLayout(page_FileSystem);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_FileSystem = new WidgetFileSystem(page_FileSystem);
        widget_FileSystem->setObjectName("widget_FileSystem");

        verticalLayout_3->addWidget(widget_FileSystem);

        stack_LeftContents->addWidget(page_FileSystem);

        verticalLayout_5->addWidget(stack_LeftContents);


        horizontalLayout_3->addWidget(widget_LeftContents);

        splitter_Main->addWidget(widget_Left);
        widget_Right = new QWidget(splitter_Main);
        widget_Right->setObjectName("widget_Right");
        verticalLayout = new QVBoxLayout(widget_Right);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(1, 0, 0, 1);
        widget_ControlGuiDocuments = new QWidget(widget_Right);
        widget_ControlGuiDocuments->setObjectName("widget_ControlGuiDocuments");
        horizontalLayout = new QHBoxLayout(widget_ControlGuiDocuments);
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(2, 0, 0, 0);
        btn_PreviousGuiDocument = new QToolButton(widget_ControlGuiDocuments);
        btn_PreviousGuiDocument->setObjectName("btn_PreviousGuiDocument");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/classic/back_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_PreviousGuiDocument->setIcon(icon1);
        btn_PreviousGuiDocument->setIconSize(QSize(12, 12));
        btn_PreviousGuiDocument->setAutoRaise(true);

        horizontalLayout->addWidget(btn_PreviousGuiDocument);

        btn_NextGuiDocument = new QToolButton(widget_ControlGuiDocuments);
        btn_NextGuiDocument->setObjectName("btn_NextGuiDocument");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/classic/next_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_NextGuiDocument->setIcon(icon2);
        btn_NextGuiDocument->setIconSize(QSize(12, 12));
        btn_NextGuiDocument->setAutoRaise(true);

        horizontalLayout->addWidget(btn_NextGuiDocument);

        combo_GuiDocuments = new QComboBox(widget_ControlGuiDocuments);
        combo_GuiDocuments->setObjectName("combo_GuiDocuments");
        combo_GuiDocuments->setMinimumSize(QSize(0, 22));
        combo_GuiDocuments->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(combo_GuiDocuments);

        line = new QFrame(widget_ControlGuiDocuments);
        line->setObjectName("line");
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::VLine);

        horizontalLayout->addWidget(line);

        btn_CloseGuiDocument = new QToolButton(widget_ControlGuiDocuments);
        btn_CloseGuiDocument->setObjectName("btn_CloseGuiDocument");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/classic/cross_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_CloseGuiDocument->setIcon(icon3);
        btn_CloseGuiDocument->setIconSize(QSize(12, 12));
        btn_CloseGuiDocument->setAutoRaise(true);

        horizontalLayout->addWidget(btn_CloseGuiDocument);

        line_2 = new QFrame(widget_ControlGuiDocuments);
        line_2->setObjectName("line_2");
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setFrameShape(QFrame::VLine);

        horizontalLayout->addWidget(line_2);

        widget_Spacer = new QWidget(widget_ControlGuiDocuments);
        widget_Spacer->setObjectName("widget_Spacer");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_Spacer->sizePolicy().hasHeightForWidth());
        widget_Spacer->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(widget_Spacer);

        widget_MouseCoords = new QWidget(widget_ControlGuiDocuments);
        widget_MouseCoords->setObjectName("widget_MouseCoords");
        horizontalLayout_7 = new QHBoxLayout(widget_MouseCoords);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_PosX = new QLabel(widget_MouseCoords);
        label_PosX->setObjectName("label_PosX");

        horizontalLayout_4->addWidget(label_PosX);

        label_ValuePosX = new QLabel(widget_MouseCoords);
        label_ValuePosX->setObjectName("label_ValuePosX");

        horizontalLayout_4->addWidget(label_ValuePosX);


        horizontalLayout_7->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_PosY = new QLabel(widget_MouseCoords);
        label_PosY->setObjectName("label_PosY");

        horizontalLayout_5->addWidget(label_PosY);

        label_ValuePosY = new QLabel(widget_MouseCoords);
        label_ValuePosY->setObjectName("label_ValuePosY");

        horizontalLayout_5->addWidget(label_ValuePosY);


        horizontalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_PosZ = new QLabel(widget_MouseCoords);
        label_PosZ->setObjectName("label_PosZ");

        horizontalLayout_6->addWidget(label_PosZ);

        label_ValuePosZ = new QLabel(widget_MouseCoords);
        label_ValuePosZ->setObjectName("label_ValuePosZ");

        horizontalLayout_6->addWidget(label_ValuePosZ);


        horizontalLayout_7->addLayout(horizontalLayout_6);


        horizontalLayout->addWidget(widget_MouseCoords);


        verticalLayout->addWidget(widget_ControlGuiDocuments);

        stack_GuiDocuments = new QStackedWidget(widget_Right);
        stack_GuiDocuments->setObjectName("stack_GuiDocuments");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(2);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(stack_GuiDocuments->sizePolicy().hasHeightForWidth());
        stack_GuiDocuments->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(stack_GuiDocuments);

        splitter_Main->addWidget(widget_Right);

        verticalLayout_4->addWidget(splitter_Main);


        retranslateUi(Mayo__WidgetMainControl);

        stack_LeftContents->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Mayo__WidgetMainControl);
    } // setupUi

    void retranslateUi(QWidget *Mayo__WidgetMainControl)
    {
        Mayo__WidgetMainControl->setWindowTitle(QCoreApplication::translate("Mayo::WidgetMainControl", "Form", nullptr));
        combo_LeftContents->setItemText(0, QCoreApplication::translate("Mayo::WidgetMainControl", "Model tree", nullptr));
        combo_LeftContents->setItemText(1, QCoreApplication::translate("Mayo::WidgetMainControl", "Opened documents", nullptr));
        combo_LeftContents->setItemText(2, QCoreApplication::translate("Mayo::WidgetMainControl", "File system", nullptr));

#if QT_CONFIG(tooltip)
        btn_CloseLeftSideBar->setToolTip(QCoreApplication::translate("Mayo::WidgetMainControl", "Close Left Side Bar", nullptr));
#endif // QT_CONFIG(tooltip)
        label_PosX->setText(QCoreApplication::translate("Mayo::WidgetMainControl", "X=", nullptr));
        label_ValuePosX->setText(QCoreApplication::translate("Mayo::WidgetMainControl", "?", nullptr));
        label_PosY->setText(QCoreApplication::translate("Mayo::WidgetMainControl", "Y=", nullptr));
        label_ValuePosY->setText(QCoreApplication::translate("Mayo::WidgetMainControl", "?", nullptr));
        label_PosZ->setText(QCoreApplication::translate("Mayo::WidgetMainControl", "Z=", nullptr));
        label_ValuePosZ->setText(QCoreApplication::translate("Mayo::WidgetMainControl", "?", nullptr));
    } // retranslateUi

};

} // namespace Mayo

namespace Mayo {
namespace Ui {
    class WidgetMainControl: public Ui_WidgetMainControl {};
} // namespace Ui
} // namespace Mayo

#endif // UI_WIDGET_MAIN_CONTROL_H
