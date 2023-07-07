/********************************************************************************
** Form generated from reading UI file 'wrong_input_sign.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRONG_INPUT_SIGN_H
#define UI_WRONG_INPUT_SIGN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wrong_input_sign
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *wrong_input_sign)
    {
        if (wrong_input_sign->objectName().isEmpty())
            wrong_input_sign->setObjectName("wrong_input_sign");
        wrong_input_sign->resize(400, 300);
        label = new QLabel(wrong_input_sign);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 110, 121, 21));
        pushButton = new QPushButton(wrong_input_sign);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(170, 170, 61, 21));

        retranslateUi(wrong_input_sign);

        QMetaObject::connectSlotsByName(wrong_input_sign);
    } // setupUi

    void retranslateUi(QWidget *wrong_input_sign)
    {
        wrong_input_sign->setWindowTitle(QCoreApplication::translate("wrong_input_sign", "Form", nullptr));
        label->setText(QCoreApplication::translate("wrong_input_sign", "\344\275\240\347\232\204\350\276\223\345\205\245\344\270\215\345\220\210\346\263\225\357\274\201", nullptr));
        pushButton->setText(QCoreApplication::translate("wrong_input_sign", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wrong_input_sign: public Ui_wrong_input_sign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRONG_INPUT_SIGN_H
