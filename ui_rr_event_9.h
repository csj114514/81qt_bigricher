/********************************************************************************
** Form generated from reading UI file 'rr_event_9.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RR_EVENT_9_H
#define UI_RR_EVENT_9_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rr_event_9
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *rr_event_9)
    {
        if (rr_event_9->objectName().isEmpty())
            rr_event_9->setObjectName("rr_event_9");
        rr_event_9->resize(529, 365);
        label = new QLabel(rr_event_9);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 120, 391, 21));
        pushButton = new QPushButton(rr_event_9);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(220, 200, 81, 31));

        retranslateUi(rr_event_9);

        QMetaObject::connectSlotsByName(rr_event_9);
    } // setupUi

    void retranslateUi(QWidget *rr_event_9)
    {
        rr_event_9->setWindowTitle(QCoreApplication::translate("rr_event_9", "Form", nullptr));
        label->setText(QCoreApplication::translate("rr_event_9", "\345\245\226\345\212\2619\357\274\232\346\214\207\345\256\232\344\270\200\344\270\252\344\270\216\344\275\240\344\270\215\345\220\214\347\232\204\350\247\222\350\211\262\357\274\214\344\275\240\344\270\216\345\205\266\345\205\261\345\220\214\350\216\267\345\276\22750\351\207\221\345\270\201", nullptr));
        pushButton->setText(QCoreApplication::translate("rr_event_9", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rr_event_9: public Ui_rr_event_9 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RR_EVENT_9_H
