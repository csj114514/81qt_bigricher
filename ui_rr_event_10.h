/********************************************************************************
** Form generated from reading UI file 'rr_event_10.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RR_EVENT_10_H
#define UI_RR_EVENT_10_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rr_event_10
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *rr_event_10)
    {
        if (rr_event_10->objectName().isEmpty())
            rr_event_10->setObjectName("rr_event_10");
        rr_event_10->resize(400, 300);
        pushButton = new QPushButton(rr_event_10);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(170, 170, 80, 31));
        label = new QLabel(rr_event_10);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 110, 211, 20));

        retranslateUi(rr_event_10);

        QMetaObject::connectSlotsByName(rr_event_10);
    } // setupUi

    void retranslateUi(QWidget *rr_event_10)
    {
        rr_event_10->setWindowTitle(QCoreApplication::translate("rr_event_10", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("rr_event_10", "\347\241\256\345\256\232", nullptr));
        label->setText(QCoreApplication::translate("rr_event_10", "\345\245\226\345\212\26110\357\274\232\345\217\257\344\273\245\345\220\221\351\223\266\350\241\214\344\270\255\345\255\230\345\217\226\346\254\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rr_event_10: public Ui_rr_event_10 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RR_EVENT_10_H
