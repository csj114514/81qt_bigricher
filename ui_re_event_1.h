/********************************************************************************
** Form generated from reading UI file 're_event_1.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RE_EVENT_1_H
#define UI_RE_EVENT_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_re_event_1
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *re_event_1)
    {
        if (re_event_1->objectName().isEmpty())
            re_event_1->setObjectName("re_event_1");
        re_event_1->resize(400, 300);
        label = new QLabel(re_event_1);
        label->setObjectName("label");
        label->setGeometry(QRect(128, 140, 141, 20));
        pushButton = new QPushButton(re_event_1);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 170, 93, 28));

        retranslateUi(re_event_1);

        QMetaObject::connectSlotsByName(re_event_1);
    } // setupUi

    void retranslateUi(QWidget *re_event_1)
    {
        re_event_1->setWindowTitle(QCoreApplication::translate("re_event_1", "Form", nullptr));
        label->setText(QCoreApplication::translate("re_event_1", "\344\272\213\344\273\2661\357\274\232\350\216\267\345\276\22750\351\207\221\345\270\201", nullptr));
        pushButton->setText(QCoreApplication::translate("re_event_1", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class re_event_1: public Ui_re_event_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RE_EVENT_1_H
