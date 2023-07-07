/********************************************************************************
** Form generated from reading UI file 'near_death_choose.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEAR_DEATH_CHOOSE_H
#define UI_NEAR_DEATH_CHOOSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_near_death_choose
{
public:
    QPushButton *close;
    QLineEdit *money_owed;
    QPushButton *get_money_from_bank;
    QPushButton *sell_city;
    QLabel *label;
    QLabel *label_2;
    QPushButton *sell_factory;
    QPushButton *pushButton;

    void setupUi(QWidget *near_death_choose)
    {
        if (near_death_choose->objectName().isEmpty())
            near_death_choose->setObjectName("near_death_choose");
        near_death_choose->resize(487, 423);
        close = new QPushButton(near_death_choose);
        close->setObjectName("close");
        close->setGeometry(QRect(180, 330, 141, 31));
        money_owed = new QLineEdit(near_death_choose);
        money_owed->setObjectName("money_owed");
        money_owed->setGeometry(QRect(200, 150, 91, 21));
        money_owed->setReadOnly(true);
        get_money_from_bank = new QPushButton(near_death_choose);
        get_money_from_bank->setObjectName("get_money_from_bank");
        get_money_from_bank->setGeometry(QRect(180, 290, 141, 31));
        sell_city = new QPushButton(near_death_choose);
        sell_city->setObjectName("sell_city");
        sell_city->setGeometry(QRect(179, 210, 141, 31));
        label = new QLabel(near_death_choose);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 90, 131, 21));
        label_2 = new QLabel(near_death_choose);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 150, 51, 20));
        sell_factory = new QPushButton(near_death_choose);
        sell_factory->setObjectName("sell_factory");
        sell_factory->setGeometry(QRect(179, 249, 141, 31));
        pushButton = new QPushButton(near_death_choose);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(320, 150, 41, 21));

        retranslateUi(near_death_choose);

        QMetaObject::connectSlotsByName(near_death_choose);
    } // setupUi

    void retranslateUi(QWidget *near_death_choose)
    {
        near_death_choose->setWindowTitle(QCoreApplication::translate("near_death_choose", "Form", nullptr));
        close->setText(QCoreApplication::translate("near_death_choose", "\347\273\223\346\235\237", nullptr));
        get_money_from_bank->setText(QCoreApplication::translate("near_death_choose", "\344\273\216\351\223\266\350\241\214\344\270\255\350\216\267\345\276\227\351\207\221\345\270\201", nullptr));
        sell_city->setText(QCoreApplication::translate("near_death_choose", "\351\200\211\346\213\251\345\215\226\345\207\272\345\237\216\345\270\202", nullptr));
        label->setText(QCoreApplication::translate("near_death_choose", "\344\275\240\345\267\262\350\277\233\345\205\245\346\277\222\346\255\273\347\212\266\346\200\201\357\274\201", nullptr));
        label_2->setText(QCoreApplication::translate("near_death_choose", "\346\254\240\346\254\276\346\225\260\357\274\232", nullptr));
        sell_factory->setText(QCoreApplication::translate("near_death_choose", "\351\200\211\346\213\251\345\215\226\345\207\272\345\267\245\345\216\202\350\202\241\344\273\275", nullptr));
        pushButton->setText(QCoreApplication::translate("near_death_choose", "\345\210\267\346\226\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class near_death_choose: public Ui_near_death_choose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEAR_DEATH_CHOOSE_H
