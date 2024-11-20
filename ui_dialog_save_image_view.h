/********************************************************************************
** Form generated from reading UI file 'dialog_save_image_view.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SAVE_IMAGE_VIEW_H
#define UI_DIALOG_SAVE_IMAGE_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

namespace Mayo {

class Ui_DialogSaveImageView
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *edit_Width;
    QLabel *label_2;
    QSpinBox *edit_Height;
    QLabel *label_3;
    QCheckBox *checkBox_KeepRatio;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Mayo__DialogSaveImageView)
    {
        if (Mayo__DialogSaveImageView->objectName().isEmpty())
            Mayo__DialogSaveImageView->setObjectName("Mayo__DialogSaveImageView");
        Mayo__DialogSaveImageView->resize(247, 116);
        Mayo__DialogSaveImageView->setModal(true);
        horizontalLayout = new QHBoxLayout(Mayo__DialogSaveImageView);
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox = new QGroupBox(Mayo__DialogSaveImageView);
        groupBox->setObjectName("groupBox");
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName("formLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        edit_Width = new QSpinBox(groupBox);
        edit_Width->setObjectName("edit_Width");
        edit_Width->setMaximum(100000);
        edit_Width->setSingleStep(10);

        formLayout->setWidget(0, QFormLayout::FieldRole, edit_Width);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        edit_Height = new QSpinBox(groupBox);
        edit_Height->setObjectName("edit_Height");
        edit_Height->setMaximum(100000);
        edit_Height->setSingleStep(10);

        formLayout->setWidget(1, QFormLayout::FieldRole, edit_Height);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        checkBox_KeepRatio = new QCheckBox(groupBox);
        checkBox_KeepRatio->setObjectName("checkBox_KeepRatio");
        checkBox_KeepRatio->setChecked(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, checkBox_KeepRatio);


        horizontalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(Mayo__DialogSaveImageView);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);


        retranslateUi(Mayo__DialogSaveImageView);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Mayo__DialogSaveImageView, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Mayo__DialogSaveImageView, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Mayo__DialogSaveImageView);
    } // setupUi

    void retranslateUi(QDialog *Mayo__DialogSaveImageView)
    {
        Mayo__DialogSaveImageView->setWindowTitle(QCoreApplication::translate("Mayo::DialogSaveImageView", "Save View to Image", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Mayo::DialogSaveImageView", "Options", nullptr));
        label->setText(QCoreApplication::translate("Mayo::DialogSaveImageView", "Width", nullptr));
        edit_Width->setSuffix(QCoreApplication::translate("Mayo::DialogSaveImageView", "px", nullptr));
        label_2->setText(QCoreApplication::translate("Mayo::DialogSaveImageView", "Height", nullptr));
        edit_Height->setSuffix(QCoreApplication::translate("Mayo::DialogSaveImageView", "px", nullptr));
        label_3->setText(QCoreApplication::translate("Mayo::DialogSaveImageView", "Keep ratio", nullptr));
        checkBox_KeepRatio->setText(QString());
    } // retranslateUi

};

} // namespace Mayo

namespace Mayo {
namespace Ui {
    class DialogSaveImageView: public Ui_DialogSaveImageView {};
} // namespace Ui
} // namespace Mayo

#endif // UI_DIALOG_SAVE_IMAGE_VIEW_H
