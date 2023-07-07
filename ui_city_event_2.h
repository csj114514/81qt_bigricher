/********************************************************************************
** Form generated from reading UI file 'city_event_2.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CITY_EVENT_2_H
#define UI_CITY_EVENT_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_city_event_2
{
public:
    QLabel *label;
    QLineEdit *citynum;
    QLabel *label_2;
    QLineEdit *cost;
    QLabel *label_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *city_event_2)
    {
        if (city_event_2->objectName().isEmpty())
            city_event_2->setObjectName("city_event_2");
        city_event_2->resize(568, 376);
        label = new QLabel(city_event_2);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 100, 81, 20));
        citynum = new QLineEdit(city_event_2);
        citynum->setObjectName("citynum");
        citynum->setGeometry(QRect(290, 100, 81, 24));
        label_2 = new QLabel(city_event_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 140, 151, 20));
        cost = new QLineEdit(city_event_2);
        cost->setObjectName("cost");
        cost->setGeometry(QRect(290, 140, 113, 24));
        label_3 = new QLabel(city_event_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(170, 190, 191, 20));
        checkBox = new QCheckBox(city_event_2);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(180, 220, 51, 23));
        checkBox_2 = new QCheckBox(city_event_2);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(300, 220, 51, 23));
        pushButton = new QPushButton(city_event_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(210, 260, 93, 28));
        pushButton_2 = new QPushButton(city_event_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(210, 310, 93, 28));

        retranslateUi(city_event_2);

        QMetaObject::connectSlotsByName(city_event_2);
    } // setupUi

    void retranslateUi(QWidget *city_event_2)
    {
        city_event_2->setWindowTitle(QCoreApplication::translate("city_event_2", "Form", nullptr));
        label->setText(QCoreApplication::translate("city_event_2", "\345\237\216\345\270\202\347\274\226\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("city_event_2", "\350\264\255\344\271\260\350\257\245\345\237\216\345\270\202\346\211\200\351\234\200\350\264\271\347\224\250\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("city_event_2", "\344\275\240\346\234\252\346\213\245\346\234\211\350\257\245\345\237\216\345\270\202\357\274\214\346\230\257\345\220\246\350\264\255\344\271\260\357\274\237", nullptr));
        checkBox->setText(QCoreApplication::translate("city_event_2", "\346\230\257", nullptr));
        checkBox_2->setText(QCoreApplication::translate("city_event_2", "\345\220\246", nullptr));
        pushButton->setText(QCoreApplication::translate("city_event_2", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("city_event_2", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class city_event_2: public Ui_city_event_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CITY_EVENT_2_H
