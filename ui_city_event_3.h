/********************************************************************************
** Form generated from reading UI file 'city_event_3.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CITY_EVENT_3_H
#define UI_CITY_EVENT_3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_city_event_3
{
public:
    QLabel *label;
    QLineEdit *citynum;
    QLabel *label_2;
    QLineEdit *owner;
    QLabel *label_3;
    QLineEdit *passtax;
    QPushButton *pushButton;

    void setupUi(QWidget *city_event_3)
    {
        if (city_event_3->objectName().isEmpty())
            city_event_3->setObjectName("city_event_3");
        city_event_3->resize(528, 386);
        label = new QLabel(city_event_3);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 120, 69, 19));
        citynum = new QLineEdit(city_event_3);
        citynum->setObjectName("citynum");
        citynum->setGeometry(QRect(260, 120, 113, 24));
        label_2 = new QLabel(city_event_3);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(160, 160, 81, 20));
        owner = new QLineEdit(city_event_3);
        owner->setObjectName("owner");
        owner->setGeometry(QRect(260, 160, 113, 24));
        label_3 = new QLabel(city_event_3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 200, 141, 20));
        passtax = new QLineEdit(city_event_3);
        passtax->setObjectName("passtax");
        passtax->setGeometry(QRect(260, 200, 113, 24));
        pushButton = new QPushButton(city_event_3);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(190, 260, 93, 28));

        retranslateUi(city_event_3);

        QMetaObject::connectSlotsByName(city_event_3);
    } // setupUi

    void retranslateUi(QWidget *city_event_3)
    {
        city_event_3->setWindowTitle(QCoreApplication::translate("city_event_3", "Form", nullptr));
        label->setText(QCoreApplication::translate("city_event_3", "\345\237\216\345\270\202\347\274\226\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("city_event_3", "\346\213\245\346\234\211\350\200\205\347\274\226\345\217\267\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("city_event_3", "\344\275\240\351\234\200\350\246\201\344\270\212\347\274\264\347\232\204\350\277\207\350\267\257\350\264\271\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("city_event_3", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class city_event_3: public Ui_city_event_3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CITY_EVENT_3_H
