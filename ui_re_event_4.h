/********************************************************************************
** Form generated from reading UI file 're_event_4.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RE_EVENT_4_H
#define UI_RE_EVENT_4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_re_event_4
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *re_event_4)
    {
        if (re_event_4->objectName().isEmpty())
            re_event_4->setObjectName("re_event_4");
        re_event_4->resize(400, 300);
        label = new QLabel(re_event_4);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 140, 191, 19));
        pushButton = new QPushButton(re_event_4);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 170, 93, 28));

        retranslateUi(re_event_4);

        QMetaObject::connectSlotsByName(re_event_4);
    } // setupUi

    void retranslateUi(QWidget *re_event_4)
    {
        re_event_4->setWindowTitle(QCoreApplication::translate("re_event_4", "Form", nullptr));
        label->setText(QCoreApplication::translate("re_event_4", "\344\272\213\344\273\2664\357\274\232\345\217\226\346\266\210\344\270\213\346\254\241\346\216\267\351\252\260\345\255\220\347\247\273\345\212\250", nullptr));
        pushButton->setText(QCoreApplication::translate("re_event_4", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class re_event_4: public Ui_re_event_4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RE_EVENT_4_H
