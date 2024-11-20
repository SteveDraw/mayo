/********************************************************************************
** Form generated from reading UI file 'dialog_about.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_ABOUT_H
#define UI_DIALOG_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

namespace Mayo {

class Ui_DialogAbout
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label_Logo;
    QLabel *label_AppByOrg;
    QLabel *label_Version;
    QLabel *label_BuildDateTime;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *layout_Infos;
    QLabel *label_Qt;
    QLabel *label_Occ;
    QSpacerItem *verticalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Mayo__DialogAbout)
    {
        if (Mayo__DialogAbout->objectName().isEmpty())
            Mayo__DialogAbout->setObjectName("Mayo__DialogAbout");
        Mayo__DialogAbout->resize(270, 160);
        Mayo__DialogAbout->setModal(true);
        gridLayout_2 = new QGridLayout(Mayo__DialogAbout);
        gridLayout_2->setObjectName("gridLayout_2");
        label_Logo = new QLabel(Mayo__DialogAbout);
        label_Logo->setObjectName("label_Logo");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_Logo->sizePolicy().hasHeightForWidth());
        label_Logo->setSizePolicy(sizePolicy);
        label_Logo->setMaximumSize(QSize(128, 128));
        label_Logo->setPixmap(QPixmap(QString::fromUtf8(":/images/appicon_64.png")));
        label_Logo->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);

        gridLayout_2->addWidget(label_Logo, 0, 0, 4, 1);

        label_AppByOrg = new QLabel(Mayo__DialogAbout);
        label_AppByOrg->setObjectName("label_AppByOrg");
        QFont font;
        font.setBold(true);
        label_AppByOrg->setFont(font);

        gridLayout_2->addWidget(label_AppByOrg, 0, 1, 1, 2);

        label_Version = new QLabel(Mayo__DialogAbout);
        label_Version->setObjectName("label_Version");

        gridLayout_2->addWidget(label_Version, 1, 1, 1, 2);

        label_BuildDateTime = new QLabel(Mayo__DialogAbout);
        label_BuildDateTime->setObjectName("label_BuildDateTime");

        gridLayout_2->addWidget(label_BuildDateTime, 2, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 3, 1, 1, 1);

        layout_Infos = new QVBoxLayout();
        layout_Infos->setObjectName("layout_Infos");
        label_Qt = new QLabel(Mayo__DialogAbout);
        label_Qt->setObjectName("label_Qt");

        layout_Infos->addWidget(label_Qt);

        label_Occ = new QLabel(Mayo__DialogAbout);
        label_Occ->setObjectName("label_Occ");

        layout_Infos->addWidget(label_Occ);


        gridLayout_2->addLayout(layout_Infos, 3, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 35, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 4, 1, 1, 1);

        buttonBox = new QDialogButtonBox(Mayo__DialogAbout);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Close);

        gridLayout_2->addWidget(buttonBox, 5, 2, 1, 1);


        retranslateUi(Mayo__DialogAbout);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Mayo__DialogAbout, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Mayo__DialogAbout, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Mayo__DialogAbout);
    } // setupUi

    void retranslateUi(QDialog *Mayo__DialogAbout)
    {
        Mayo__DialogAbout->setWindowTitle(QCoreApplication::translate("Mayo::DialogAbout", "About", nullptr));
        label_Logo->setText(QString());
        label_AppByOrg->setText(QCoreApplication::translate("Mayo::DialogAbout", "Mayo By Fougue Ltd.", nullptr));
        label_Version->setText(QCoreApplication::translate("Mayo::DialogAbout", "Version %1 (%2bit)", nullptr));
        label_BuildDateTime->setText(QCoreApplication::translate("Mayo::DialogAbout", "Built on %1 at %2", nullptr));
        label_Qt->setText(QCoreApplication::translate("Mayo::DialogAbout", "Qt %1", nullptr));
        label_Occ->setText(QCoreApplication::translate("Mayo::DialogAbout", "OpenCascade %1", nullptr));
    } // retranslateUi

};

} // namespace Mayo

namespace Mayo {
namespace Ui {
    class DialogAbout: public Ui_DialogAbout {};
} // namespace Ui
} // namespace Mayo

#endif // UI_DIALOG_ABOUT_H
