/********************************************************************************
** Form generated from reading UI file 'show_dice_num.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_DICE_NUM_H
#define UI_SHOW_DICE_NUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_show_dice_num
{
public:
    QLabel *label;
    QLineEdit *dice_number;
    QPushButton *close;

    void setupUi(QWidget *show_dice_num)
    {
        if (show_dice_num->objectName().isEmpty())
            show_dice_num->setObjectName("show_dice_num");
        show_dice_num->resize(400, 300);
        label = new QLabel(show_dice_num);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 100, 111, 20));
        dice_number = new QLineEdit(show_dice_num);
        dice_number->setObjectName("dice_number");
        dice_number->setGeometry(QRect(140, 130, 113, 20));
        dice_number->setReadOnly(true);
        close = new QPushButton(show_dice_num);
        close->setObjectName("close");
        close->setGeometry(QRect(150, 180, 80, 21));

        retranslateUi(show_dice_num);

        QMetaObject::connectSlotsByName(show_dice_num);
    } // setupUi

    void retranslateUi(QWidget *show_dice_num)
    {
        show_dice_num->setWindowTitle(QCoreApplication::translate("show_dice_num", "Form", nullptr));
        label->setText(QCoreApplication::translate("show_dice_num", "\344\275\240\346\216\267\345\276\227\347\232\204\347\202\271\346\225\260\346\230\257\357\274\232", nullptr));
        close->setText(QCoreApplication::translate("show_dice_num", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class show_dice_num: public Ui_show_dice_num {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_DICE_NUM_H
