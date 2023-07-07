/********************************************************************************
** Form generated from reading UI file 'end.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_END_H
#define UI_END_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_end
{
public:
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QWidget *end)
    {
        if (end->objectName().isEmpty())
            end->setObjectName("end");
        end->resize(460, 369);
        label = new QLabel(end);
        label->setObjectName("label");
        label->setGeometry(QRect(128, 170, 121, 20));
        lineEdit = new QLineEdit(end);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(260, 170, 113, 24));

        retranslateUi(end);

        QMetaObject::connectSlotsByName(end);
    } // setupUi

    void retranslateUi(QWidget *end)
    {
        end->setWindowTitle(QCoreApplication::translate("end", "Form", nullptr));
        label->setText(QCoreApplication::translate("end", "\350\203\234\345\207\272\350\200\205\347\232\204\347\274\226\345\217\267\344\270\272\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class end: public Ui_end {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_END_H
