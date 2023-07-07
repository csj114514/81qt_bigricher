/********************************************************************************
** Form generated from reading UI file 'rr50.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RR50_H
#define UI_RR50_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rr50
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *rr50)
    {
        if (rr50->objectName().isEmpty())
            rr50->setObjectName("rr50");
        rr50->resize(400, 300);
        lineEdit = new QLineEdit(rr50);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(140, 150, 113, 20));
        pushButton = new QPushButton(rr50);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 190, 80, 31));
        label = new QLabel(rr50);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 110, 191, 21));

        retranslateUi(rr50);

        QMetaObject::connectSlotsByName(rr50);
    } // setupUi

    void retranslateUi(QWidget *rr50)
    {
        rr50->setWindowTitle(QCoreApplication::translate("rr50", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("rr50", "\347\241\256\345\256\232", nullptr));
        label->setText(QCoreApplication::translate("rr50", "\350\257\267\350\276\223\345\205\245\344\275\240\346\214\207\345\256\232\347\232\204\345\257\271\350\261\241\347\232\204\347\274\226\345\217\267\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rr50: public Ui_rr50 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RR50_H
