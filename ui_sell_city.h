/********************************************************************************
** Form generated from reading UI file 'sell_city.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELL_CITY_H
#define UI_SELL_CITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sell_city
{
public:
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *prnum;
    QLabel *label_4;
    QLineEdit *citylist;
    QPushButton *pushButton;
    QLineEdit *coins;
    QLabel *label;
    QLineEdit *citysell;
    QPushButton *pushButton_2;

    void setupUi(QWidget *sell_city)
    {
        if (sell_city->objectName().isEmpty())
            sell_city->setObjectName("sell_city");
        sell_city->resize(703, 540);
        label_3 = new QLabel(sell_city);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(170, 150, 371, 21));
        label_2 = new QLabel(sell_city);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(330, 120, 81, 20));
        prnum = new QLineEdit(sell_city);
        prnum->setObjectName("prnum");
        prnum->setGeometry(QRect(230, 120, 81, 21));
        label_4 = new QLabel(sell_city);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(170, 320, 161, 20));
        citylist = new QLineEdit(sell_city);
        citylist->setObjectName("citylist");
        citylist->setGeometry(QRect(200, 180, 281, 121));
        pushButton = new QPushButton(sell_city);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(290, 360, 80, 31));
        coins = new QLineEdit(sell_city);
        coins->setObjectName("coins");
        coins->setGeometry(QRect(420, 120, 91, 21));
        label = new QLabel(sell_city);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 120, 71, 21));
        citysell = new QLineEdit(sell_city);
        citysell->setObjectName("citysell");
        citysell->setGeometry(QRect(350, 320, 113, 20));
        pushButton_2 = new QPushButton(sell_city);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(290, 400, 80, 31));

        retranslateUi(sell_city);

        QMetaObject::connectSlotsByName(sell_city);
    } // setupUi

    void retranslateUi(QWidget *sell_city)
    {
        sell_city->setWindowTitle(QCoreApplication::translate("sell_city", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("sell_city", "\350\257\245\347\216\251\345\256\266\346\213\245\346\234\211\347\232\204\345\237\216\345\270\202\347\274\226\345\217\267\345\217\212\345\215\226\345\207\272\350\277\231\344\270\200\345\237\216\345\270\202\346\211\200\350\203\275\350\216\267\345\276\227\347\232\204\346\224\266\347\233\212\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("sell_city", "\347\216\251\345\256\266\351\207\221\345\270\201\346\225\260\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("sell_city", "\344\275\240\345\206\263\345\256\232\345\215\226\345\207\272\347\232\204\345\237\216\345\270\202\347\274\226\345\217\267\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("sell_city", "\347\241\256\345\256\232", nullptr));
        label->setText(QCoreApplication::translate("sell_city", "\347\216\251\345\256\266\347\274\226\345\217\267\357\274\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("sell_city", "\347\246\273\345\274\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sell_city: public Ui_sell_city {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELL_CITY_H
