/********************************************************************************
** Form generated from reading UI file 'get_money_from_bank.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GET_MONEY_FROM_BANK_H
#define UI_GET_MONEY_FROM_BANK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_get_money_from_bank
{
public:
    QLabel *label_5;
    QPushButton *pushButton;
    QLineEdit *money_got;
    QLabel *label_2;
    QLineEdit *coins_in_bank;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *coins;
    QLabel *label;
    QLineEdit *pr_num;

    void setupUi(QWidget *get_money_from_bank)
    {
        if (get_money_from_bank->objectName().isEmpty())
            get_money_from_bank->setObjectName("get_money_from_bank");
        get_money_from_bank->resize(612, 487);
        label_5 = new QLabel(get_money_from_bank);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(80, 250, 201, 20));
        pushButton = new QPushButton(get_money_from_bank);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(240, 300, 80, 31));
        money_got = new QLineEdit(get_money_from_bank);
        money_got->setObjectName("money_got");
        money_got->setGeometry(QRect(300, 250, 71, 21));
        label_2 = new QLabel(get_money_from_bank);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(160, 160, 131, 20));
        coins_in_bank = new QLineEdit(get_money_from_bank);
        coins_in_bank->setObjectName("coins_in_bank");
        coins_in_bank->setGeometry(QRect(300, 160, 71, 21));
        coins_in_bank->setReadOnly(true);
        pushButton_2 = new QPushButton(get_money_from_bank);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(240, 350, 80, 31));
        label_4 = new QLabel(get_money_from_bank);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 220, 341, 21));
        label_3 = new QLabel(get_money_from_bank);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(200, 190, 81, 20));
        coins = new QLineEdit(get_money_from_bank);
        coins->setObjectName("coins");
        coins->setGeometry(QRect(300, 190, 71, 21));
        coins->setReadOnly(true);
        label = new QLabel(get_money_from_bank);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 130, 71, 21));
        pr_num = new QLineEdit(get_money_from_bank);
        pr_num->setObjectName("pr_num");
        pr_num->setGeometry(QRect(300, 130, 71, 21));
        pr_num->setReadOnly(true);

        retranslateUi(get_money_from_bank);

        QMetaObject::connectSlotsByName(get_money_from_bank);
    } // setupUi

    void retranslateUi(QWidget *get_money_from_bank)
    {
        get_money_from_bank->setWindowTitle(QCoreApplication::translate("get_money_from_bank", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("get_money_from_bank", "\344\275\240\345\260\206\350\246\201\344\273\216\351\223\266\350\241\214\344\270\255\345\217\226\345\276\227\347\232\204\351\207\221\345\270\201\346\225\260\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("get_money_from_bank", "\347\241\256\345\256\232", nullptr));
        label_2->setText(QCoreApplication::translate("get_money_from_bank", "\344\275\240\345\234\250\351\223\266\350\241\214\344\270\255\347\232\204\345\255\230\346\254\276\357\274\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("get_money_from_bank", "\347\246\273\345\274\200", nullptr));
        label_4->setText(QCoreApplication::translate("get_money_from_bank", "\344\275\240\345\256\236\351\231\205\350\216\267\345\276\227\347\232\204\351\207\221\345\270\201\346\225\260\344\270\272\344\273\216\351\223\266\350\241\214\345\217\226\344\270\255\351\207\221\345\270\201\346\225\260\347\232\2040.95\345\200\215\357\274\210\344\270\213\345\217\226\346\225\264\357\274\211", nullptr));
        label_3->setText(QCoreApplication::translate("get_money_from_bank", "\344\275\240\347\232\204\351\207\221\345\270\201\346\225\260\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("get_money_from_bank", "\347\216\251\345\256\266\347\274\226\345\217\267\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class get_money_from_bank: public Ui_get_money_from_bank {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GET_MONEY_FROM_BANK_H
