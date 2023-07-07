/********************************************************************************
** Form generated from reading UI file 're_event_3.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RE_EVENT_3_H
#define UI_RE_EVENT_3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_re_event_3
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *re_event_3)
    {
        if (re_event_3->objectName().isEmpty())
            re_event_3->setObjectName("re_event_3");
        re_event_3->resize(400, 300);
        label = new QLabel(re_event_3);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 140, 191, 19));
        pushButton = new QPushButton(re_event_3);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 170, 93, 28));

        retranslateUi(re_event_3);

        QMetaObject::connectSlotsByName(re_event_3);
    } // setupUi

    void retranslateUi(QWidget *re_event_3)
    {
        re_event_3->setWindowTitle(QCoreApplication::translate("re_event_3", "Form", nullptr));
        label->setText(QCoreApplication::translate("re_event_3", "\344\272\213\344\273\2663\357\274\232\345\217\257\344\273\245\345\220\221\351\223\266\350\241\214\344\270\255\345\255\230\345\217\226\346\254\276", nullptr));
        pushButton->setText(QCoreApplication::translate("re_event_3", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class re_event_3: public Ui_re_event_3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RE_EVENT_3_H
