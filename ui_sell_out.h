/********************************************************************************
** Form generated from reading UI file 'sell_out.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELL_OUT_H
#define UI_SELL_OUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sell_out
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *sell_out)
    {
        if (sell_out->objectName().isEmpty())
            sell_out->setObjectName("sell_out");
        sell_out->resize(535, 398);
        pushButton_2 = new QPushButton(sell_out);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(190, 180, 131, 31));
        pushButton_3 = new QPushButton(sell_out);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(190, 220, 131, 31));
        pushButton_4 = new QPushButton(sell_out);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(190, 260, 131, 31));
        label = new QLabel(sell_out);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 100, 251, 20));
        pushButton = new QPushButton(sell_out);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(189, 140, 131, 31));

        retranslateUi(sell_out);

        QMetaObject::connectSlotsByName(sell_out);
    } // setupUi

    void retranslateUi(QWidget *sell_out)
    {
        sell_out->setWindowTitle(QCoreApplication::translate("sell_out", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("sell_out", "\345\215\226\345\207\272\345\267\245\345\216\202\350\202\241\344\273\275", nullptr));
        pushButton_3->setText(QCoreApplication::translate("sell_out", "\344\273\216\351\223\266\350\241\214\344\270\255\350\216\267\345\276\227\351\207\221\345\270\201", nullptr));
        pushButton_4->setText(QCoreApplication::translate("sell_out", "\350\277\233\345\205\245\344\270\213\344\270\200\346\255\245", nullptr));
        label->setText(QCoreApplication::translate("sell_out", "\344\275\240\345\217\257\344\273\245\351\200\211\346\213\251\344\273\245\344\270\213\347\232\204\350\213\245\345\271\262\351\241\271\346\223\215\344\275\234\345\271\266\346\211\247\350\241\214", nullptr));
        pushButton->setText(QCoreApplication::translate("sell_out", "\345\215\226\345\207\272\345\237\216\345\270\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sell_out: public Ui_sell_out {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELL_OUT_H
