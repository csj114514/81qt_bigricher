/********************************************************************************
** Form generated from reading UI file 're_event.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RE_EVENT_H
#define UI_RE_EVENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_re_event
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QWidget *re_event)
    {
        if (re_event->objectName().isEmpty())
            re_event->setObjectName("re_event");
        re_event->resize(414, 311);
        label = new QLabel(re_event);
        label->setObjectName("label");
        label->setGeometry(QRect(128, 80, 131, 20));
        label_2 = new QLabel(re_event);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 170, 111, 19));
        pushButton = new QPushButton(re_event);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(220, 160, 93, 41));

        retranslateUi(re_event);

        QMetaObject::connectSlotsByName(re_event);
    } // setupUi

    void retranslateUi(QWidget *re_event)
    {
        re_event->setWindowTitle(QCoreApplication::translate("re_event", "Form", nullptr));
        label->setText(QCoreApplication::translate("re_event", "\344\275\240\351\201\255\351\201\207\344\272\206\351\232\217\346\234\272\344\272\213\344\273\266\357\274\201", nullptr));
        label_2->setText(QCoreApplication::translate("re_event", "\350\257\267\351\200\211\346\213\251\344\275\240\347\232\204\344\272\213\344\273\266\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("re_event", "\351\200\211\346\213\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class re_event: public Ui_re_event {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RE_EVENT_H
