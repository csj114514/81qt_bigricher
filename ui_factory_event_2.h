/********************************************************************************
** Form generated from reading UI file 'factory_event_2.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACTORY_EVENT_2_H
#define UI_FACTORY_EVENT_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_factory_event_2
{
public:
    QLabel *label;
    QLineEdit *passtax;
    QLabel *label_2;
    QLineEdit *position;
    QPushButton *pushButton;

    void setupUi(QWidget *factory_event_2)
    {
        if (factory_event_2->objectName().isEmpty())
            factory_event_2->setObjectName("factory_event_2");
        factory_event_2->resize(522, 443);
        label = new QLabel(factory_event_2);
        label->setObjectName("label");
        label->setGeometry(QRect(128, 170, 131, 20));
        passtax = new QLineEdit(factory_event_2);
        passtax->setObjectName("passtax");
        passtax->setGeometry(QRect(280, 170, 113, 24));
        label_2 = new QLabel(factory_event_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 120, 69, 19));
        position = new QLineEdit(factory_event_2);
        position->setObjectName("position");
        position->setGeometry(QRect(280, 120, 113, 24));
        pushButton = new QPushButton(factory_event_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(220, 230, 93, 28));

        retranslateUi(factory_event_2);

        QMetaObject::connectSlotsByName(factory_event_2);
    } // setupUi

    void retranslateUi(QWidget *factory_event_2)
    {
        factory_event_2->setWindowTitle(QCoreApplication::translate("factory_event_2", "Form", nullptr));
        label->setText(QCoreApplication::translate("factory_event_2", "\344\275\240\351\234\200\350\246\201\344\270\212\347\274\264\347\232\204\350\264\271\347\224\250\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("factory_event_2", "\345\267\245\345\216\202\344\275\215\347\275\256\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("factory_event_2", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class factory_event_2: public Ui_factory_event_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACTORY_EVENT_2_H
