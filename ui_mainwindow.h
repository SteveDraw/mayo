/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace Mayo {

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_4;
    QStackedWidget *stack_Main;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menu_Help;
    QMenu *menu_Tools;
    QMenu *menu_Window;
    QMenu *menu_Display;

    void setupUi(QMainWindow *Mayo__MainWindow)
    {
        if (Mayo__MainWindow->objectName().isEmpty())
            Mayo__MainWindow->setObjectName("Mayo__MainWindow");
        Mayo__MainWindow->resize(950, 791);
        centralWidget = new QWidget(Mayo__MainWindow);
        centralWidget->setObjectName("centralWidget");
        verticalLayout_4 = new QVBoxLayout(centralWidget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        stack_Main = new QStackedWidget(centralWidget);
        stack_Main->setObjectName("stack_Main");

        verticalLayout_4->addWidget(stack_Main);

        Mayo__MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Mayo__MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 950, 22));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName("menu_File");
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName("menu_Help");
        menu_Tools = new QMenu(menuBar);
        menu_Tools->setObjectName("menu_Tools");
        menu_Window = new QMenu(menuBar);
        menu_Window->setObjectName("menu_Window");
        menu_Display = new QMenu(menuBar);
        menu_Display->setObjectName("menu_Display");
        Mayo__MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menu_Display->menuAction());
        menuBar->addAction(menu_Tools->menuAction());
        menuBar->addAction(menu_Window->menuAction());
        menuBar->addAction(menu_Help->menuAction());

        retranslateUi(Mayo__MainWindow);

        stack_Main->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(Mayo__MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *Mayo__MainWindow)
    {
        Mayo__MainWindow->setWindowTitle(QCoreApplication::translate("Mayo::MainWindow", "Mayo", nullptr));
        menu_File->setTitle(QCoreApplication::translate("Mayo::MainWindow", "&File", nullptr));
        menu_Help->setTitle(QCoreApplication::translate("Mayo::MainWindow", "&Help", nullptr));
        menu_Tools->setTitle(QCoreApplication::translate("Mayo::MainWindow", "&Tools", nullptr));
        menu_Window->setTitle(QCoreApplication::translate("Mayo::MainWindow", "&Window", nullptr));
        menu_Display->setTitle(QCoreApplication::translate("Mayo::MainWindow", "&Display", nullptr));
    } // retranslateUi

};

} // namespace Mayo

namespace Mayo {
namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui
} // namespace Mayo

#endif // UI_MAINWINDOW_H
