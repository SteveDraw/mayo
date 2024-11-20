/********************************************************************************
** Form generated from reading UI file 'widget_measure.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_MEASURE_H
#define UI_WIDGET_MEASURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace Mayo {

class Ui_WidgetMeasure
{
public:
    QGridLayout *layout_Main;
    QLabel *label_AreaUnit;
    QLabel *label_LengthUnit;
    QLabel *label_MeasureType;
    QLabel *label_AngleUnit;
    QComboBox *combo_LengthUnit;
    QComboBox *combo_AngleUnit;
    QComboBox *combo_MeasureType;
    QComboBox *combo_AreaUnit;
    QWidget *widget_Message;
    QVBoxLayout *layout_Message;
    QWidget *widget_Void;

    void setupUi(QWidget *Mayo__WidgetMeasure)
    {
        if (Mayo__WidgetMeasure->objectName().isEmpty())
            Mayo__WidgetMeasure->setObjectName("Mayo__WidgetMeasure");
        Mayo__WidgetMeasure->resize(229, 156);
        layout_Main = new QGridLayout(Mayo__WidgetMeasure);
        layout_Main->setObjectName("layout_Main");
        layout_Main->setContentsMargins(4, 4, 4, 4);
        label_AreaUnit = new QLabel(Mayo__WidgetMeasure);
        label_AreaUnit->setObjectName("label_AreaUnit");

        layout_Main->addWidget(label_AreaUnit, 3, 0, 1, 1);

        label_LengthUnit = new QLabel(Mayo__WidgetMeasure);
        label_LengthUnit->setObjectName("label_LengthUnit");

        layout_Main->addWidget(label_LengthUnit, 1, 0, 1, 1);

        label_MeasureType = new QLabel(Mayo__WidgetMeasure);
        label_MeasureType->setObjectName("label_MeasureType");

        layout_Main->addWidget(label_MeasureType, 0, 0, 1, 1);

        label_AngleUnit = new QLabel(Mayo__WidgetMeasure);
        label_AngleUnit->setObjectName("label_AngleUnit");

        layout_Main->addWidget(label_AngleUnit, 2, 0, 1, 1);

        combo_LengthUnit = new QComboBox(Mayo__WidgetMeasure);
        combo_LengthUnit->addItem(QString());
        combo_LengthUnit->addItem(QString());
        combo_LengthUnit->addItem(QString());
        combo_LengthUnit->addItem(QString());
        combo_LengthUnit->addItem(QString());
        combo_LengthUnit->addItem(QString());
        combo_LengthUnit->setObjectName("combo_LengthUnit");

        layout_Main->addWidget(combo_LengthUnit, 1, 1, 1, 1);

        combo_AngleUnit = new QComboBox(Mayo__WidgetMeasure);
        combo_AngleUnit->addItem(QString());
        combo_AngleUnit->addItem(QString());
        combo_AngleUnit->setObjectName("combo_AngleUnit");

        layout_Main->addWidget(combo_AngleUnit, 2, 1, 1, 1);

        combo_MeasureType = new QComboBox(Mayo__WidgetMeasure);
        combo_MeasureType->addItem(QString());
        combo_MeasureType->addItem(QString());
        combo_MeasureType->addItem(QString());
        combo_MeasureType->addItem(QString());
        combo_MeasureType->addItem(QString());
        combo_MeasureType->addItem(QString());
        combo_MeasureType->addItem(QString());
        combo_MeasureType->addItem(QString());
        combo_MeasureType->setObjectName("combo_MeasureType");

        layout_Main->addWidget(combo_MeasureType, 0, 1, 1, 1);

        combo_AreaUnit = new QComboBox(Mayo__WidgetMeasure);
        combo_AreaUnit->addItem(QString());
        combo_AreaUnit->addItem(QString());
        combo_AreaUnit->addItem(QString());
        combo_AreaUnit->addItem(QString());
        combo_AreaUnit->addItem(QString());
        combo_AreaUnit->addItem(QString());
        combo_AreaUnit->setObjectName("combo_AreaUnit");

        layout_Main->addWidget(combo_AreaUnit, 3, 1, 1, 1);

        widget_Message = new QWidget(Mayo__WidgetMeasure);
        widget_Message->setObjectName("widget_Message");
        layout_Message = new QVBoxLayout(widget_Message);
        layout_Message->setObjectName("layout_Message");
        layout_Message->setContentsMargins(0, 0, 0, 0);
        widget_Void = new QWidget(widget_Message);
        widget_Void->setObjectName("widget_Void");

        layout_Message->addWidget(widget_Void);


        layout_Main->addWidget(widget_Message, 4, 0, 1, 2);


        retranslateUi(Mayo__WidgetMeasure);

        QMetaObject::connectSlotsByName(Mayo__WidgetMeasure);
    } // setupUi

    void retranslateUi(QWidget *Mayo__WidgetMeasure)
    {
        Mayo__WidgetMeasure->setWindowTitle(QCoreApplication::translate("Mayo::WidgetMeasure", "Form", nullptr));
        label_AreaUnit->setText(QCoreApplication::translate("Mayo::WidgetMeasure", "Area Unit", nullptr));
        label_LengthUnit->setText(QCoreApplication::translate("Mayo::WidgetMeasure", "Length Unit", nullptr));
        label_MeasureType->setText(QCoreApplication::translate("Mayo::WidgetMeasure", "Measure", nullptr));
        label_AngleUnit->setText(QCoreApplication::translate("Mayo::WidgetMeasure", "Angle Unit", nullptr));
        combo_LengthUnit->setItemText(0, QCoreApplication::translate("Mayo::WidgetMeasure", "Millimeter(mm)", nullptr));
        combo_LengthUnit->setItemText(1, QCoreApplication::translate("Mayo::WidgetMeasure", "Centimeter(cm)", nullptr));
        combo_LengthUnit->setItemText(2, QCoreApplication::translate("Mayo::WidgetMeasure", "Meter(m)", nullptr));
        combo_LengthUnit->setItemText(3, QCoreApplication::translate("Mayo::WidgetMeasure", "Inch(in)", nullptr));
        combo_LengthUnit->setItemText(4, QCoreApplication::translate("Mayo::WidgetMeasure", "Foot(ft)", nullptr));
        combo_LengthUnit->setItemText(5, QCoreApplication::translate("Mayo::WidgetMeasure", "Yard(yd)", nullptr));

        combo_AngleUnit->setItemText(0, QCoreApplication::translate("Mayo::WidgetMeasure", "Degree(\302\260)", nullptr));
        combo_AngleUnit->setItemText(1, QCoreApplication::translate("Mayo::WidgetMeasure", "Radian(rad)", nullptr));

        combo_MeasureType->setItemText(0, QCoreApplication::translate("Mayo::WidgetMeasure", "Vertex Position", nullptr));
        combo_MeasureType->setItemText(1, QCoreApplication::translate("Mayo::WidgetMeasure", "Circle Center", nullptr));
        combo_MeasureType->setItemText(2, QCoreApplication::translate("Mayo::WidgetMeasure", "Circle Diameter", nullptr));
        combo_MeasureType->setItemText(3, QCoreApplication::translate("Mayo::WidgetMeasure", "Min Distance", nullptr));
        combo_MeasureType->setItemText(4, QCoreApplication::translate("Mayo::WidgetMeasure", "Center-to-center Distance", nullptr));
        combo_MeasureType->setItemText(5, QCoreApplication::translate("Mayo::WidgetMeasure", "Angle", nullptr));
        combo_MeasureType->setItemText(6, QCoreApplication::translate("Mayo::WidgetMeasure", "Length", nullptr));
        combo_MeasureType->setItemText(7, QCoreApplication::translate("Mayo::WidgetMeasure", "Surface Area", nullptr));

        combo_AreaUnit->setItemText(0, QCoreApplication::translate("Mayo::WidgetMeasure", "Square Millimeter(mm\302\262)", nullptr));
        combo_AreaUnit->setItemText(1, QCoreApplication::translate("Mayo::WidgetMeasure", "Square Centimeter(cm\302\262)", nullptr));
        combo_AreaUnit->setItemText(2, QCoreApplication::translate("Mayo::WidgetMeasure", "Square Meter(m\302\262)", nullptr));
        combo_AreaUnit->setItemText(3, QCoreApplication::translate("Mayo::WidgetMeasure", "Square Inch(in\302\262)", nullptr));
        combo_AreaUnit->setItemText(4, QCoreApplication::translate("Mayo::WidgetMeasure", "Square Foot(ft\302\262)", nullptr));
        combo_AreaUnit->setItemText(5, QCoreApplication::translate("Mayo::WidgetMeasure", "Square Yard(yd\302\262)", nullptr));

    } // retranslateUi

};

} // namespace Mayo

namespace Mayo {
namespace Ui {
    class WidgetMeasure: public Ui_WidgetMeasure {};
} // namespace Ui
} // namespace Mayo

#endif // UI_WIDGET_MEASURE_H
