/********************************************************************************
** Form generated from reading UI file 'prison_event.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRISON_EVENT_H
#define UI_PRISON_EVENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_prison_event
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *prison_event)
    {
        if (prison_event->objectName().isEmpty())
            prison_event->setObjectName("prison_event");
        prison_event->resize(477, 361);
        label = new QLabel(prison_event);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 140, 221, 20));
        pushButton = new QPushButton(prison_event);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(190, 210, 93, 28));

        retranslateUi(prison_event);

        QMetaObject::connectSlotsByName(prison_event);
    } // setupUi

    void retranslateUi(QWidget *prison_event)
    {
        prison_event->setWindowTitle(QCoreApplication::translate("prison_event", "Form", nullptr));
        label->setText(QCoreApplication::translate("prison_event", "\346\212\261\346\255\211\357\274\214\344\275\240\344\270\213\344\270\200\345\233\236\345\220\210\344\270\215\350\203\275\346\211\247\350\241\214\346\223\215\344\275\234\357\274\201", nullptr));
        pushButton->setText(QCoreApplication::translate("prison_event", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class prison_event: public Ui_prison_event {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRISON_EVENT_H
