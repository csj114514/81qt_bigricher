/********************************************************************************
** Form generated from reading UI file 'bank_event.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANK_EVENT_H
#define UI_BANK_EVENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bank_event
{
public:
    QPushButton *pushButton_2;
    QLabel *label_4;
    QLabel *label_2;
    QPushButton *pushButton;
    QLineEdit *coins;
    QLineEdit *moneyget;
    QCheckBox *outbox;
    QLabel *label;
    QLabel *label_3;
    QCheckBox *inbox;
    QLineEdit *prnum;
    QLineEdit *coinsinbank;

    void setupUi(QWidget *bank_event)
    {
        if (bank_event->objectName().isEmpty())
            bank_event->setObjectName("bank_event");
        bank_event->resize(567, 420);
        pushButton_2 = new QPushButton(bank_event);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(230, 300, 80, 31));
        label_4 = new QLabel(bank_event);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(170, 220, 101, 20));
        label_2 = new QLabel(bank_event);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 120, 111, 21));
        pushButton = new QPushButton(bank_event);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(230, 260, 80, 31));
        coins = new QLineEdit(bank_event);
        coins->setObjectName("coins");
        coins->setGeometry(QRect(290, 120, 71, 21));
        moneyget = new QLineEdit(bank_event);
        moneyget->setObjectName("moneyget");
        moneyget->setGeometry(QRect(290, 220, 71, 21));
        outbox = new QCheckBox(bank_event);
        outbox->setObjectName("outbox");
        outbox->setGeometry(QRect(290, 190, 61, 18));
        label = new QLabel(bank_event);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 90, 71, 21));
        label_3 = new QLabel(bank_event);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(120, 150, 161, 20));
        inbox = new QCheckBox(bank_event);
        inbox->setObjectName("inbox");
        inbox->setGeometry(QRect(180, 190, 61, 18));
        prnum = new QLineEdit(bank_event);
        prnum->setObjectName("prnum");
        prnum->setGeometry(QRect(290, 90, 71, 21));
        coinsinbank = new QLineEdit(bank_event);
        coinsinbank->setObjectName("coinsinbank");
        coinsinbank->setGeometry(QRect(290, 150, 71, 21));

        retranslateUi(bank_event);

        QMetaObject::connectSlotsByName(bank_event);
    } // setupUi

    void retranslateUi(QWidget *bank_event)
    {
        bank_event->setWindowTitle(QCoreApplication::translate("bank_event", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("bank_event", "\347\246\273\345\274\200", nullptr));
        label_4->setText(QCoreApplication::translate("bank_event", "\345\255\230/\345\217\226\346\254\276\351\207\221\351\242\235\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("bank_event", "\347\216\251\345\256\266\347\216\260\346\234\211\351\207\221\345\270\201\346\225\260\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("bank_event", "\347\241\256\345\256\232", nullptr));
        outbox->setText(QCoreApplication::translate("bank_event", "\345\217\226\346\254\276", nullptr));
        label->setText(QCoreApplication::translate("bank_event", "\347\216\251\345\256\266\347\274\226\345\217\267\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("bank_event", "\347\216\251\345\256\266\345\234\250\351\223\266\350\241\214\344\270\255\351\207\221\345\270\201\346\225\260\357\274\232", nullptr));
        inbox->setText(QCoreApplication::translate("bank_event", "\345\255\230\346\254\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bank_event: public Ui_bank_event {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANK_EVENT_H
