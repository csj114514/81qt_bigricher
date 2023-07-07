/********************************************************************************
** Form generated from reading UI file 're_event_9.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RE_EVENT_9_H
#define UI_RE_EVENT_9_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_re_event_9
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *re_event_9)
    {
        if (re_event_9->objectName().isEmpty())
            re_event_9->setObjectName("re_event_9");
        re_event_9->resize(400, 300);
        label = new QLabel(re_event_9);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 140, 181, 19));
        pushButton = new QPushButton(re_event_9);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 170, 93, 28));

        retranslateUi(re_event_9);

        QMetaObject::connectSlotsByName(re_event_9);
    } // setupUi

    void retranslateUi(QWidget *re_event_9)
    {
        re_event_9->setWindowTitle(QCoreApplication::translate("re_event_9", "Form", nullptr));
        label->setText(QCoreApplication::translate("re_event_9", "\344\272\213\344\273\2669\357\274\232\346\211\200\346\234\211\344\272\272\350\216\267\345\276\22725\351\207\221\345\270\201", nullptr));
        pushButton->setText(QCoreApplication::translate("re_event_9", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class re_event_9: public Ui_re_event_9 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RE_EVENT_9_H
