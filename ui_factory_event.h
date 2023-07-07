/********************************************************************************
** Form generated from reading UI file 'factory_event.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACTORY_EVENT_H
#define UI_FACTORY_EVENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_factory_event
{
public:
    QLabel *label;
    QLineEdit *position;
    QLabel *label_2;
    QLineEdit *stock;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;

    void setupUi(QWidget *factory_event)
    {
        if (factory_event->objectName().isEmpty())
            factory_event->setObjectName("factory_event");
        factory_event->resize(655, 475);
        label = new QLabel(factory_event);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 140, 69, 19));
        position = new QLineEdit(factory_event);
        position->setObjectName("position");
        position->setGeometry(QRect(330, 140, 113, 24));
        label_2 = new QLabel(factory_event);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(178, 180, 141, 20));
        stock = new QLineEdit(factory_event);
        stock->setObjectName("stock");
        stock->setGeometry(QRect(330, 180, 113, 24));
        pushButton = new QPushButton(factory_event);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(280, 310, 93, 28));
        pushButton_2 = new QPushButton(factory_event);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(280, 360, 93, 28));
        label_3 = new QLabel(factory_event);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(208, 230, 221, 20));
        checkBox = new QCheckBox(factory_event);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(220, 260, 51, 23));
        checkBox_2 = new QCheckBox(factory_event);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(350, 260, 41, 23));

        retranslateUi(factory_event);

        QMetaObject::connectSlotsByName(factory_event);
    } // setupUi

    void retranslateUi(QWidget *factory_event)
    {
        factory_event->setWindowTitle(QCoreApplication::translate("factory_event", "Form", nullptr));
        label->setText(QCoreApplication::translate("factory_event", "\345\267\245\345\216\202\344\275\215\347\275\256\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("factory_event", "\345\267\245\345\216\202\344\270\200\344\273\275\350\202\241\344\273\275\347\232\204\350\264\271\347\224\250\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("factory_event", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("factory_event", "\345\205\263\351\227\255", nullptr));
        label_3->setText(QCoreApplication::translate("factory_event", "\350\202\241\344\273\275\350\277\230\346\234\252\344\271\260\345\256\214\357\274\214\346\230\257\345\220\246\350\264\255\344\271\260\350\202\241\344\273\275\357\274\237", nullptr));
        checkBox->setText(QCoreApplication::translate("factory_event", "\346\230\257", nullptr));
        checkBox_2->setText(QCoreApplication::translate("factory_event", "\345\220\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class factory_event: public Ui_factory_event {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACTORY_EVENT_H
