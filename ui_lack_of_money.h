/********************************************************************************
** Form generated from reading UI file 'lack_of_money.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LACK_OF_MONEY_H
#define UI_LACK_OF_MONEY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lack_of_money
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *lack_of_money)
    {
        if (lack_of_money->objectName().isEmpty())
            lack_of_money->setObjectName("lack_of_money");
        lack_of_money->resize(400, 300);
        label = new QLabel(lack_of_money);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 120, 111, 20));
        pushButton = new QPushButton(lack_of_money);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 180, 93, 28));

        retranslateUi(lack_of_money);

        QMetaObject::connectSlotsByName(lack_of_money);
    } // setupUi

    void retranslateUi(QWidget *lack_of_money)
    {
        lack_of_money->setWindowTitle(QCoreApplication::translate("lack_of_money", "Form", nullptr));
        label->setText(QCoreApplication::translate("lack_of_money", "\344\275\240\347\232\204\347\216\260\351\207\221\344\270\215\350\266\263\357\274\201", nullptr));
        pushButton->setText(QCoreApplication::translate("lack_of_money", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lack_of_money: public Ui_lack_of_money {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LACK_OF_MONEY_H
