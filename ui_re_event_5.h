/********************************************************************************
** Form generated from reading UI file 're_event_5.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RE_EVENT_5_H
#define UI_RE_EVENT_5_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_re_event_5
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *re_event_5)
    {
        if (re_event_5->objectName().isEmpty())
            re_event_5->setObjectName("re_event_5");
        re_event_5->resize(600, 401);
        label = new QLabel(re_event_5);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 180, 411, 20));
        pushButton = new QPushButton(re_event_5);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(240, 220, 93, 28));

        retranslateUi(re_event_5);

        QMetaObject::connectSlotsByName(re_event_5);
    } // setupUi

    void retranslateUi(QWidget *re_event_5)
    {
        re_event_5->setWindowTitle(QCoreApplication::translate("re_event_5", "Form", nullptr));
        label->setText(QCoreApplication::translate("re_event_5", "\344\272\213\344\273\2665\357\274\232\345\217\257\344\273\245\347\247\273\345\212\250\345\210\260\345\234\272\344\270\212\344\273\273\344\270\200\344\270\252\346\240\274\345\255\220(\351\231\244\344\272\206\346\234\272\345\234\272)\345\271\266\346\211\247\350\241\214\345\257\271\345\272\224\346\223\215\344\275\234", nullptr));
        pushButton->setText(QCoreApplication::translate("re_event_5", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class re_event_5: public Ui_re_event_5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RE_EVENT_5_H
