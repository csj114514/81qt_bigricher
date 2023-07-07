/********************************************************************************
** Form generated from reading UI file 'rr_event.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RR_EVENT_H
#define UI_RR_EVENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rr_event
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QWidget *rr_event)
    {
        if (rr_event->objectName().isEmpty())
            rr_event->setObjectName("rr_event");
        rr_event->resize(472, 375);
        label = new QLabel(rr_event);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 120, 141, 16));
        label_2 = new QLabel(rr_event);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 210, 151, 16));
        pushButton = new QPushButton(rr_event);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(270, 200, 81, 51));

        retranslateUi(rr_event);

        QMetaObject::connectSlotsByName(rr_event);
    } // setupUi

    void retranslateUi(QWidget *rr_event)
    {
        rr_event->setWindowTitle(QCoreApplication::translate("rr_event", "Form", nullptr));
        label->setText(QCoreApplication::translate("rr_event", "\344\275\240\350\216\267\345\276\227\344\272\206\351\232\217\346\234\272\345\245\226\345\212\261\357\274\201", nullptr));
        label_2->setText(QCoreApplication::translate("rr_event", "\350\257\267\351\200\211\346\213\251\344\275\240\347\232\204\351\232\217\346\234\272\345\245\226\345\212\261\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("rr_event", "\351\200\211\346\213\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rr_event: public Ui_rr_event {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RR_EVENT_H
