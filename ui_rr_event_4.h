/********************************************************************************
** Form generated from reading UI file 'rr_event_4.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RR_EVENT_4_H
#define UI_RR_EVENT_4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rr_event_4
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *rr_event_4)
    {
        if (rr_event_4->objectName().isEmpty())
            rr_event_4->setObjectName("rr_event_4");
        rr_event_4->resize(400, 300);
        pushButton = new QPushButton(rr_event_4);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 160, 80, 31));
        label = new QLabel(rr_event_4);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 110, 221, 20));

        retranslateUi(rr_event_4);

        QMetaObject::connectSlotsByName(rr_event_4);
    } // setupUi

    void retranslateUi(QWidget *rr_event_4)
    {
        rr_event_4->setWindowTitle(QCoreApplication::translate("rr_event_4", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("rr_event_4", "\347\241\256\345\256\232", nullptr));
        label->setText(QCoreApplication::translate("rr_event_4", "\345\245\226\345\212\2614\357\274\232\344\270\213\344\270\200\345\233\236\345\220\210\345\244\232\346\211\247\350\241\214\344\270\200\344\270\252\345\233\236\345\220\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rr_event_4: public Ui_rr_event_4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RR_EVENT_4_H
