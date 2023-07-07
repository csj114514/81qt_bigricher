/********************************************************************************
** Form generated from reading UI file 'rr_event_3.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RR_EVENT_3_H
#define UI_RR_EVENT_3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rr_event_3
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *rr_event_3)
    {
        if (rr_event_3->objectName().isEmpty())
            rr_event_3->setObjectName("rr_event_3");
        rr_event_3->resize(400, 300);
        label = new QLabel(rr_event_3);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 110, 141, 20));
        pushButton = new QPushButton(rr_event_3);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 160, 80, 31));

        retranslateUi(rr_event_3);

        QMetaObject::connectSlotsByName(rr_event_3);
    } // setupUi

    void retranslateUi(QWidget *rr_event_3)
    {
        rr_event_3->setWindowTitle(QCoreApplication::translate("rr_event_3", "Form", nullptr));
        label->setText(QCoreApplication::translate("rr_event_3", "\345\245\226\345\212\2613\357\274\232\350\216\267\345\276\22750\351\207\221\345\270\201", nullptr));
        pushButton->setText(QCoreApplication::translate("rr_event_3", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rr_event_3: public Ui_rr_event_3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RR_EVENT_3_H
