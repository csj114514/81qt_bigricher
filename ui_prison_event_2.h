/********************************************************************************
** Form generated from reading UI file 'prison_event_2.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRISON_EVENT_2_H
#define UI_PRISON_EVENT_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_prison_event_2
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *prison_event_2)
    {
        if (prison_event_2->objectName().isEmpty())
            prison_event_2->setObjectName("prison_event_2");
        prison_event_2->resize(400, 300);
        label = new QLabel(prison_event_2);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 100, 221, 20));
        pushButton = new QPushButton(prison_event_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 170, 93, 28));

        retranslateUi(prison_event_2);

        QMetaObject::connectSlotsByName(prison_event_2);
    } // setupUi

    void retranslateUi(QWidget *prison_event_2)
    {
        prison_event_2->setWindowTitle(QCoreApplication::translate("prison_event_2", "Form", nullptr));
        label->setText(QCoreApplication::translate("prison_event_2", "\346\212\261\346\255\211\357\274\214\344\275\240\350\277\231\344\270\200\345\233\236\345\220\210\344\270\215\350\203\275\346\211\247\350\241\214\346\223\215\344\275\234\357\274\201", nullptr));
        pushButton->setText(QCoreApplication::translate("prison_event_2", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class prison_event_2: public Ui_prison_event_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRISON_EVENT_2_H
