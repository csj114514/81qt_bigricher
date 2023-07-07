/********************************************************************************
** Form generated from reading UI file 'begin_information.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEGIN_INFORMATION_H
#define UI_BEGIN_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_begin_information
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QWidget *begin_information)
    {
        if (begin_information->objectName().isEmpty())
            begin_information->setObjectName("begin_information");
        begin_information->resize(400, 300);
        label = new QLabel(begin_information);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 100, 301, 20));
        label_2 = new QLabel(begin_information);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 120, 271, 20));
        pushButton = new QPushButton(begin_information);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 170, 93, 28));

        retranslateUi(begin_information);

        QMetaObject::connectSlotsByName(begin_information);
    } // setupUi

    void retranslateUi(QWidget *begin_information)
    {
        begin_information->setWindowTitle(QCoreApplication::translate("begin_information", "Form", nullptr));
        label->setText(QCoreApplication::translate("begin_information", "\345\275\223\344\270\224\344\273\205\345\275\223\347\216\251\345\256\266\350\267\257\350\277\207\350\265\267\347\202\271\346\227\266\347\216\260\346\234\211\351\207\221\345\270\201\346\225\260\345\242\236\345\212\240200", nullptr));
        label_2->setText(QCoreApplication::translate("begin_information", "\357\274\210\345\215\263\351\200\232\350\277\207\345\217\243\350\242\213\351\224\232\347\202\271\345\210\260\350\276\276\346\210\226\347\273\217\350\277\207\350\265\267\347\202\271\344\270\215\347\256\227\357\274\211", nullptr));
        pushButton->setText(QCoreApplication::translate("begin_information", "\350\277\224\345\233\236\344\270\273\351\241\265\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class begin_information: public Ui_begin_information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEGIN_INFORMATION_H
