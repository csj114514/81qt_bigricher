/********************************************************************************
** Form generated from reading UI file 'bank.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANK_H
#define UI_BANK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bank
{
public:
    QLabel *label_8;
    QLineEdit *coins1;
    QLineEdit *coins3;
    QLabel *label_7;
    QLabel *label_2;
    QLineEdit *bank1;
    QLineEdit *coins2;
    QLabel *label_6;
    QLineEdit *bank2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *bank3;
    QPushButton *close;
    QLineEdit *coins0;
    QLabel *label;
    QLineEdit *bank0;

    void setupUi(QWidget *bank)
    {
        if (bank->objectName().isEmpty())
            bank->setObjectName("bank");
        bank->resize(566, 469);
        label_8 = new QLabel(bank);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(270, 260, 151, 20));
        coins1 = new QLineEdit(bank);
        coins1->setObjectName("coins1");
        coins1->setGeometry(QRect(170, 180, 81, 21));
        coins3 = new QLineEdit(bank);
        coins3->setObjectName("coins3");
        coins3->setGeometry(QRect(170, 260, 81, 21));
        label_7 = new QLabel(bank);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(270, 180, 151, 20));
        label_2 = new QLabel(bank);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(270, 140, 151, 20));
        bank1 = new QLineEdit(bank);
        bank1->setObjectName("bank1");
        bank1->setGeometry(QRect(430, 180, 81, 21));
        coins2 = new QLineEdit(bank);
        coins2->setObjectName("coins2");
        coins2->setGeometry(QRect(170, 220, 81, 21));
        label_6 = new QLabel(bank);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(270, 220, 151, 20));
        bank2 = new QLineEdit(bank);
        bank2->setObjectName("bank2");
        bank2->setGeometry(QRect(430, 220, 81, 21));
        label_4 = new QLabel(bank);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 260, 111, 20));
        label_3 = new QLabel(bank);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 180, 111, 20));
        label_5 = new QLabel(bank);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(60, 220, 111, 20));
        bank3 = new QLineEdit(bank);
        bank3->setObjectName("bank3");
        bank3->setGeometry(QRect(430, 260, 81, 21));
        close = new QPushButton(bank);
        close->setObjectName("close");
        close->setGeometry(QRect(230, 320, 91, 31));
        coins0 = new QLineEdit(bank);
        coins0->setObjectName("coins0");
        coins0->setGeometry(QRect(170, 140, 81, 21));
        label = new QLabel(bank);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 140, 111, 20));
        bank0 = new QLineEdit(bank);
        bank0->setObjectName("bank0");
        bank0->setGeometry(QRect(430, 140, 81, 21));

        retranslateUi(bank);

        QMetaObject::connectSlotsByName(bank);
    } // setupUi

    void retranslateUi(QWidget *bank)
    {
        bank->setWindowTitle(QCoreApplication::translate("bank", "Form", nullptr));
        label_8->setText(QCoreApplication::translate("bank", "player3\351\223\266\350\241\214\344\270\255\351\207\221\345\270\201\346\225\260\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("bank", "player1\351\223\266\350\241\214\344\270\255\351\207\221\345\270\201\346\225\260\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("bank", "player0\351\223\266\350\241\214\344\270\255\351\207\221\345\270\201\346\225\260\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("bank", "player2\351\223\266\350\241\214\344\270\255\351\207\221\345\270\201\346\225\260\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("bank", "player3\351\207\221\345\270\201\346\225\260\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("bank", "player1\351\207\221\345\270\201\346\225\260\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("bank", "player2\351\207\221\345\270\201\346\225\260\357\274\232", nullptr));
        close->setText(QCoreApplication::translate("bank", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", nullptr));
        label->setText(QCoreApplication::translate("bank", "player0\351\207\221\345\270\201\346\225\260\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bank: public Ui_bank {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANK_H
