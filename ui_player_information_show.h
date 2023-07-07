/********************************************************************************
** Form generated from reading UI file 'player_information_show.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYER_INFORMATION_SHOW_H
#define UI_PLAYER_INFORMATION_SHOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_player_information_show
{
public:
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *pr_coins;
    QLineEdit *pr_coinsinbank;
    QLineEdit *pr_city_owned;
    QPushButton *close;
    QLineEdit *pr_if_play;
    QLineEdit *pr_ifskipround;
    QLabel *label_2;
    QLineEdit *pr_factory_owned;
    QLineEdit *pr_num;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label_6;

    void setupUi(QWidget *player_information_show)
    {
        if (player_information_show->objectName().isEmpty())
            player_information_show->setObjectName("player_information_show");
        player_information_show->resize(667, 511);
        label_5 = new QLabel(player_information_show);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 290, 161, 21));
        label_4 = new QLabel(player_information_show);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 170, 151, 21));
        label = new QLabel(player_information_show);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 130, 71, 21));
        pr_coins = new QLineEdit(player_information_show);
        pr_coins->setObjectName("pr_coins");
        pr_coins->setGeometry(QRect(220, 210, 71, 21));
        pr_coins->setReadOnly(true);
        pr_coinsinbank = new QLineEdit(player_information_show);
        pr_coinsinbank->setObjectName("pr_coinsinbank");
        pr_coinsinbank->setGeometry(QRect(220, 250, 71, 21));
        pr_coinsinbank->setReadOnly(true);
        pr_city_owned = new QLineEdit(player_information_show);
        pr_city_owned->setObjectName("pr_city_owned");
        pr_city_owned->setGeometry(QRect(340, 150, 161, 61));
        pr_city_owned->setReadOnly(true);
        close = new QPushButton(player_information_show);
        close->setObjectName("close");
        close->setGeometry(QRect(270, 360, 91, 31));
        pr_if_play = new QLineEdit(player_information_show);
        pr_if_play->setObjectName("pr_if_play");
        pr_if_play->setGeometry(QRect(220, 170, 71, 21));
        pr_if_play->setReadOnly(true);
        pr_ifskipround = new QLineEdit(player_information_show);
        pr_ifskipround->setObjectName("pr_ifskipround");
        pr_ifskipround->setGeometry(QRect(220, 290, 71, 21));
        pr_ifskipround->setReadOnly(true);
        label_2 = new QLabel(player_information_show);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(130, 210, 81, 21));
        pr_factory_owned = new QLineEdit(player_information_show);
        pr_factory_owned->setObjectName("pr_factory_owned");
        pr_factory_owned->setGeometry(QRect(340, 250, 161, 61));
        pr_factory_owned->setReadOnly(true);
        pr_num = new QLineEdit(player_information_show);
        pr_num->setObjectName("pr_num");
        pr_num->setGeometry(QRect(220, 130, 71, 21));
        pr_num->setReadOnly(true);
        label_7 = new QLabel(player_information_show);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(340, 220, 141, 20));
        label_3 = new QLabel(player_information_show);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 250, 111, 20));
        label_6 = new QLabel(player_information_show);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(340, 120, 141, 21));

        retranslateUi(player_information_show);

        QMetaObject::connectSlotsByName(player_information_show);
    } // setupUi

    void retranslateUi(QWidget *player_information_show)
    {
        player_information_show->setWindowTitle(QCoreApplication::translate("player_information_show", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("player_information_show", "\347\216\251\345\256\266\346\230\257\345\220\246\350\267\263\350\277\207\344\270\213\344\270\200\345\233\236\345\220\210\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("player_information_show", "\347\216\251\345\256\266\346\230\257\345\220\246\350\277\230\345\234\250\346\270\270\346\210\217\344\270\255\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("player_information_show", "\347\216\251\345\256\266\347\274\226\345\217\267\357\274\232", nullptr));
        close->setText(QCoreApplication::translate("player_information_show", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", nullptr));
        label_2->setText(QCoreApplication::translate("player_information_show", "\347\216\251\345\256\266\351\207\221\345\270\201\346\225\260\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("player_information_show", "\347\216\251\345\256\266\346\213\245\346\234\211\347\232\204\345\267\245\345\216\202\350\202\241\344\273\275\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("player_information_show", "\347\216\251\345\256\266\351\223\266\350\241\214\345\255\230\346\254\276\346\225\260\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("player_information_show", "\347\216\251\345\256\266\346\213\245\346\234\211\347\232\204\345\237\216\345\270\202\347\274\226\345\217\267\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class player_information_show: public Ui_player_information_show {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYER_INFORMATION_SHOW_H
