/********************************************************************************
** Form generated from reading UI file 'chartwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARTWINDOW_H
#define UI_CHARTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_chartWindow
{
public:

    void setupUi(QDialog *chartWindow)
    {
        if (chartWindow->objectName().isEmpty())
            chartWindow->setObjectName("chartWindow");
        chartWindow->resize(400, 300);

        retranslateUi(chartWindow);

        QMetaObject::connectSlotsByName(chartWindow);
    } // setupUi

    void retranslateUi(QDialog *chartWindow)
    {
        chartWindow->setWindowTitle(QCoreApplication::translate("chartWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chartWindow: public Ui_chartWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARTWINDOW_H
