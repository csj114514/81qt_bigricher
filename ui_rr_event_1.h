/********************************************************************************
** Form generated from reading UI file 'rr_event_1.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RR_EVENT_1_H
#define UI_RR_EVENT_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rr_event_1
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *rr_event_1)
    {
        if (rr_event_1->objectName().isEmpty())
            rr_event_1->setObjectName("rr_event_1");
        rr_event_1->resize(400, 300);
        pushButton = new QPushButton(rr_event_1);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 170, 80, 31));
        label = new QLabel(rr_event_1);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 120, 141, 21));

        retranslateUi(rr_event_1);

        QMetaObject::connectSlotsByName(rr_event_1);
    } // setupUi

    void retranslateUi(QWidget *rr_event_1)
    {
        rr_event_1->setWindowTitle(QCoreApplication::translate("rr_event_1", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("rr_event_1", "\347\241\256\345\256\232", nullptr));
        label->setText(QCoreApplication::translate("rr_event_1", "\345\245\226\345\212\2611\357\274\232\350\216\267\345\276\227100\351\207\221\345\270\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rr_event_1: public Ui_rr_event_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RR_EVENT_1_H
