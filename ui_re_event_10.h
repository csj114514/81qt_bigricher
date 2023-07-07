/********************************************************************************
** Form generated from reading UI file 're_event_10.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RE_EVENT_10_H
#define UI_RE_EVENT_10_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_re_event_10
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *re_event_10)
    {
        if (re_event_10->objectName().isEmpty())
            re_event_10->setObjectName("re_event_10");
        re_event_10->resize(400, 300);
        label = new QLabel(re_event_10);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 140, 351, 20));
        pushButton = new QPushButton(re_event_10);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 170, 93, 28));

        retranslateUi(re_event_10);

        QMetaObject::connectSlotsByName(re_event_10);
    } // setupUi

    void retranslateUi(QWidget *re_event_10)
    {
        re_event_10->setWindowTitle(QCoreApplication::translate("re_event_10", "Form", nullptr));
        label->setText(QCoreApplication::translate("re_event_10", "\344\272\213\344\273\26610\357\274\232\346\214\207\345\256\232\344\270\200\344\270\252\351\235\236\350\207\252\345\267\261\347\232\204\347\216\251\345\256\266\357\274\214\344\275\240\344\272\244\347\273\231\345\205\266100\351\207\221\345\270\201", nullptr));
        pushButton->setText(QCoreApplication::translate("re_event_10", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class re_event_10: public Ui_re_event_10 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RE_EVENT_10_H
