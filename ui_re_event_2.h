/********************************************************************************
** Form generated from reading UI file 're_event_2.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RE_EVENT_2_H
#define UI_RE_EVENT_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_re_event_2
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *re_event_2)
    {
        if (re_event_2->objectName().isEmpty())
            re_event_2->setObjectName("re_event_2");
        re_event_2->resize(400, 300);
        label = new QLabel(re_event_2);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 140, 141, 19));
        pushButton = new QPushButton(re_event_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 170, 93, 28));

        retranslateUi(re_event_2);

        QMetaObject::connectSlotsByName(re_event_2);
    } // setupUi

    void retranslateUi(QWidget *re_event_2)
    {
        re_event_2->setWindowTitle(QCoreApplication::translate("re_event_2", "Form", nullptr));
        label->setText(QCoreApplication::translate("re_event_2", "\344\272\213\344\273\2662\357\274\232\345\207\217\345\260\22150\351\207\221\345\270\201", nullptr));
        pushButton->setText(QCoreApplication::translate("re_event_2", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class re_event_2: public Ui_re_event_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RE_EVENT_2_H
