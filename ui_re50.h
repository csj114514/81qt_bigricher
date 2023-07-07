/********************************************************************************
** Form generated from reading UI file 're50.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RE50_H
#define UI_RE50_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_re50
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *re50)
    {
        if (re50->objectName().isEmpty())
            re50->setObjectName("re50");
        re50->resize(400, 300);
        label = new QLabel(re50);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 110, 191, 20));
        lineEdit = new QLineEdit(re50);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(140, 140, 113, 24));
        pushButton = new QPushButton(re50);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 180, 93, 28));

        retranslateUi(re50);

        QMetaObject::connectSlotsByName(re50);
    } // setupUi

    void retranslateUi(QWidget *re50)
    {
        re50->setWindowTitle(QCoreApplication::translate("re50", "Form", nullptr));
        label->setText(QCoreApplication::translate("re50", "\350\257\267\350\276\223\345\205\245\344\275\240\346\214\207\345\256\232\347\232\204\345\257\271\350\261\241\347\232\204\347\274\226\345\217\267\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("re50", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class re50: public Ui_re50 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RE50_H
