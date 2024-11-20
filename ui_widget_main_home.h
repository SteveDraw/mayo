/********************************************************************************
** Form generated from reading UI file 'widget_main_home.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_MAIN_HOME_H
#define UI_WIDGET_MAIN_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widget_home_files.h"

namespace Mayo {

class Ui_WidgetMainHome
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_MainHome;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_AppIcon;
    QSpacerItem *verticalSpacer;
    WidgetHomeFiles *widget_HomeFiles;

    void setupUi(QWidget *Mayo__WidgetMainHome)
    {
        if (Mayo__WidgetMainHome->objectName().isEmpty())
            Mayo__WidgetMainHome->setObjectName("Mayo__WidgetMainHome");
        Mayo__WidgetMainHome->resize(770, 536);
        verticalLayout = new QVBoxLayout(Mayo__WidgetMainHome);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_MainHome = new QWidget(Mayo__WidgetMainHome);
        widget_MainHome->setObjectName("widget_MainHome");
        verticalLayout_9 = new QVBoxLayout(widget_MainHome);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_AppIcon = new QLabel(widget_MainHome);
        label_AppIcon->setObjectName("label_AppIcon");
        label_AppIcon->setPixmap(QPixmap(QString::fromUtf8(":/images/appicon_128.png")));
        label_AppIcon->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_9->addWidget(label_AppIcon);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_9->addItem(verticalSpacer);

        widget_HomeFiles = new WidgetHomeFiles(widget_MainHome);
        widget_HomeFiles->setObjectName("widget_HomeFiles");

        verticalLayout_9->addWidget(widget_HomeFiles);


        verticalLayout->addWidget(widget_MainHome);


        retranslateUi(Mayo__WidgetMainHome);

        QMetaObject::connectSlotsByName(Mayo__WidgetMainHome);
    } // setupUi

    void retranslateUi(QWidget *Mayo__WidgetMainHome)
    {
        Mayo__WidgetMainHome->setWindowTitle(QCoreApplication::translate("Mayo::WidgetMainHome", "Form", nullptr));
        label_AppIcon->setText(QString());
    } // retranslateUi

};

} // namespace Mayo

namespace Mayo {
namespace Ui {
    class WidgetMainHome: public Ui_WidgetMainHome {};
} // namespace Ui
} // namespace Mayo

#endif // UI_WIDGET_MAIN_HOME_H
