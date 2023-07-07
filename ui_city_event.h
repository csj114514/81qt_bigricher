/********************************************************************************
** Form generated from reading UI file 'city_event.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CITY_EVENT_H
#define UI_CITY_EVENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_city_event
{
public:
    QLineEdit *citynum;
    QLabel *label;
    QLineEdit *level;
    QLineEdit *next;
    QLabel *label_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *city_event)
    {
        if (city_event->objectName().isEmpty())
            city_event->setObjectName("city_event");
        city_event->resize(673, 462);
        citynum = new QLineEdit(city_event);
        citynum->setObjectName("citynum");
        citynum->setGeometry(QRect(240, 100, 41, 24));
        label = new QLabel(city_event);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 100, 81, 19));
        level = new QLineEdit(city_event);
        level->setObjectName("level");
        level->setGeometry(QRect(440, 100, 113, 24));
        next = new QLineEdit(city_event);
        next->setObjectName("next");
        next->setGeometry(QRect(340, 140, 113, 24));
        label_2 = new QLabel(city_event);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(180, 200, 301, 20));
        checkBox = new QCheckBox(city_event);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(210, 250, 95, 23));
        checkBox_2 = new QCheckBox(city_event);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(400, 250, 95, 23));
        label_3 = new QLabel(city_event);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(298, 100, 131, 20));
        label_4 = new QLabel(city_event);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(160, 140, 161, 20));
        pushButton = new QPushButton(city_event);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(280, 300, 93, 28));
        pushButton_2 = new QPushButton(city_event);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(280, 350, 93, 28));

        retranslateUi(city_event);

        QMetaObject::connectSlotsByName(city_event);
    } // setupUi

    void retranslateUi(QWidget *city_event)
    {
        city_event->setWindowTitle(QCoreApplication::translate("city_event", "Form", nullptr));
        label->setText(QCoreApplication::translate("city_event", "\345\237\216\345\270\202\347\274\226\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("city_event", "\344\275\240\345\267\262\346\213\245\346\234\211\350\257\245\345\237\216\345\270\202\357\274\214\346\230\257\345\220\246\345\234\250\350\257\245\345\237\216\345\270\202\344\270\212\345\273\272\351\200\240\346\210\277\345\261\213\357\274\237", nullptr));
        checkBox->setText(QCoreApplication::translate("city_event", "\346\230\257", nullptr));
        checkBox_2->setText(QCoreApplication::translate("city_event", "\345\220\246", nullptr));
        label_3->setText(QCoreApplication::translate("city_event", "\350\257\245\345\237\216\345\270\202\344\270\212\347\232\204\346\210\277\345\261\213\346\225\260\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("city_event", "\345\273\272\351\200\240\344\270\213\344\270\200\344\270\252\346\210\277\345\261\213\347\232\204\350\264\271\347\224\250\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("city_event", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("city_event", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class city_event: public Ui_city_event {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CITY_EVENT_H
