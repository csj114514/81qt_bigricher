/********************************************************************************
** Form generated from reading UI file 'rr_event_8.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RR_EVENT_8_H
#define UI_RR_EVENT_8_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rr_event_8
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *rr_event_8)
    {
        if (rr_event_8->objectName().isEmpty())
            rr_event_8->setObjectName("rr_event_8");
        rr_event_8->resize(400, 300);
        label = new QLabel(rr_event_8);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 110, 241, 16));
        pushButton = new QPushButton(rr_event_8);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 160, 80, 31));

        retranslateUi(rr_event_8);

        QMetaObject::connectSlotsByName(rr_event_8);
    } // setupUi

    void retranslateUi(QWidget *rr_event_8)
    {
        rr_event_8->setWindowTitle(QCoreApplication::translate("rr_event_8", "Form", nullptr));
        label->setText(QCoreApplication::translate("rr_event_8", "\345\245\226\345\212\2618\357\274\232\346\211\200\346\234\211\345\255\230\346\264\273\350\247\222\350\211\262\350\216\267\345\276\22725\351\207\221\345\270\201", nullptr));
        pushButton->setText(QCoreApplication::translate("rr_event_8", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rr_event_8: public Ui_rr_event_8 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RR_EVENT_8_H
