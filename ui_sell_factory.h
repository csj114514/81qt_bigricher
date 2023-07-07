/********************************************************************************
** Form generated from reading UI file 'sell_factory.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELL_FACTORY_H
#define UI_SELL_FACTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sell_factory
{
public:
    QLineEdit *num1;
    QLabel *label_7;
    QLineEdit *prnum;
    QLineEdit *fnum;
    QLineEdit *coins;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label;
    QLineEdit *num2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QLabel *label_6;
    QPushButton *pushButton_2;
    QLineEdit *num0;

    void setupUi(QWidget *sell_factory)
    {
        if (sell_factory->objectName().isEmpty())
            sell_factory->setObjectName("sell_factory");
        sell_factory->resize(532, 498);
        num1 = new QLineEdit(sell_factory);
        num1->setObjectName("num1");
        num1->setGeometry(QRect(290, 210, 81, 21));
        label_7 = new QLabel(sell_factory);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(150, 310, 231, 20));
        prnum = new QLineEdit(sell_factory);
        prnum->setObjectName("prnum");
        prnum->setGeometry(QRect(290, 120, 81, 21));
        fnum = new QLineEdit(sell_factory);
        fnum->setObjectName("fnum");
        fnum->setGeometry(QRect(290, 270, 81, 21));
        coins = new QLineEdit(sell_factory);
        coins->setObjectName("coins");
        coins->setGeometry(QRect(290, 150, 81, 21));
        label_2 = new QLabel(sell_factory);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 150, 91, 21));
        label_5 = new QLabel(sell_factory);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(60, 240, 231, 21));
        label = new QLabel(sell_factory);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 120, 71, 20));
        num2 = new QLineEdit(sell_factory);
        num2->setObjectName("num2");
        num2->setGeometry(QRect(290, 240, 81, 21));
        label_3 = new QLabel(sell_factory);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 180, 221, 21));
        label_4 = new QLabel(sell_factory);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 210, 231, 21));
        pushButton = new QPushButton(sell_factory);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(230, 360, 80, 21));
        label_6 = new QLabel(sell_factory);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(60, 270, 231, 21));
        pushButton_2 = new QPushButton(sell_factory);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(230, 400, 80, 21));
        num0 = new QLineEdit(sell_factory);
        num0->setObjectName("num0");
        num0->setGeometry(QRect(290, 180, 81, 21));

        retranslateUi(sell_factory);

        QMetaObject::connectSlotsByName(sell_factory);
    } // setupUi

    void retranslateUi(QWidget *sell_factory)
    {
        sell_factory->setWindowTitle(QCoreApplication::translate("sell_factory", "Form", nullptr));
        label_7->setText(QCoreApplication::translate("sell_factory", "\344\275\240\345\215\226\345\207\272\344\270\200\344\273\275\350\202\241\344\273\275\357\274\214\345\260\206\350\216\267\345\276\227100\351\207\221\345\270\201", nullptr));
        label_2->setText(QCoreApplication::translate("sell_factory", "\347\216\251\345\256\266\351\207\221\345\270\201\346\225\260\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("sell_factory", "\347\216\251\345\256\266\345\234\250\347\254\25429\345\217\267\345\267\245\345\216\202\346\213\245\346\234\211\347\232\204\350\202\241\344\273\275\346\225\260\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("sell_factory", "\347\216\251\345\256\266\347\274\226\345\217\267\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("sell_factory", "\347\216\251\345\256\266\345\234\250\347\254\2547\345\217\267\345\267\245\345\216\202\346\213\245\346\234\211\347\232\204\350\202\241\344\273\275\346\225\260\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("sell_factory", "\347\216\251\345\256\266\345\234\250\347\254\25422\345\217\267\345\267\245\345\216\202\346\213\245\346\234\211\347\232\204\350\202\241\344\273\275\346\225\260\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("sell_factory", "\347\241\256\345\256\232", nullptr));
        label_6->setText(QCoreApplication::translate("sell_factory", "\344\275\240\345\260\206\350\246\201\345\215\226\345\207\272\345\223\252\344\270\252\345\267\245\345\216\202\347\232\204\344\270\200\344\273\275\350\202\241\344\273\275\357\274\237", nullptr));
        pushButton_2->setText(QCoreApplication::translate("sell_factory", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sell_factory: public Ui_sell_factory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELL_FACTORY_H
