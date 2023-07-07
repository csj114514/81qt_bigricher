/********************************************************************************
** Form generated from reading UI file 'airport_event.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AIRPORT_EVENT_H
#define UI_AIRPORT_EVENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_airport_event
{
public:
    QLabel *label;
    QLineEdit *des;
    QPushButton *pushButton;

    void setupUi(QWidget *airport_event)
    {
        if (airport_event->objectName().isEmpty())
            airport_event->setObjectName("airport_event");
        airport_event->resize(397, 338);
        label = new QLabel(airport_event);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 150, 191, 20));
        des = new QLineEdit(airport_event);
        des->setObjectName("des");
        des->setGeometry(QRect(240, 150, 113, 24));
        pushButton = new QPushButton(airport_event);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 200, 93, 28));

        retranslateUi(airport_event);

        QMetaObject::connectSlotsByName(airport_event);
    } // setupUi

    void retranslateUi(QWidget *airport_event)
    {
        airport_event->setWindowTitle(QCoreApplication::translate("airport_event", "Form", nullptr));
        label->setText(QCoreApplication::translate("airport_event", "\350\257\267\351\200\211\346\213\251\344\275\240\350\246\201\345\216\273\347\232\204\345\234\260\347\202\271\347\232\204\347\274\226\345\217\267\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("airport_event", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class airport_event: public Ui_airport_event {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AIRPORT_EVENT_H
