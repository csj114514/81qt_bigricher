/********************************************************************************
** Form generated from reading UI file 'city_show.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CITY_SHOW_H
#define UI_CITY_SHOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_city_show
{
public:
    QLineEdit *price1;
    QLineEdit *pass_tax;
    QLabel *label_7;
    QLineEdit *price0;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *price3;
    QLineEdit *num_building;
    QLineEdit *price2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *if_owned;
    QLineEdit *place;
    QPushButton *close;
    QLineEdit *owner_num;
    QLabel *label_8;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_9;

    void setupUi(QWidget *city_show)
    {
        if (city_show->objectName().isEmpty())
            city_show->setObjectName("city_show");
        city_show->resize(632, 471);
        price1 = new QLineEdit(city_show);
        price1->setObjectName("price1");
        price1->setGeometry(QRect(450, 140, 81, 21));
        price1->setReadOnly(true);
        pass_tax = new QLineEdit(city_show);
        pass_tax->setObjectName("pass_tax");
        pass_tax->setGeometry(QRect(200, 260, 81, 21));
        pass_tax->setReadOnly(true);
        label_7 = new QLabel(city_show);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(300, 140, 141, 16));
        price0 = new QLineEdit(city_show);
        price0->setObjectName("price0");
        price0->setGeometry(QRect(450, 100, 81, 21));
        price0->setReadOnly(true);
        label_4 = new QLabel(city_show);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 220, 111, 20));
        label_5 = new QLabel(city_show);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(130, 260, 51, 20));
        price3 = new QLineEdit(city_show);
        price3->setObjectName("price3");
        price3->setGeometry(QRect(450, 220, 81, 21));
        price3->setReadOnly(true);
        num_building = new QLineEdit(city_show);
        num_building->setObjectName("num_building");
        num_building->setGeometry(QRect(200, 220, 81, 21));
        num_building->setReadOnly(true);
        price2 = new QLineEdit(city_show);
        price2->setObjectName("price2");
        price2->setGeometry(QRect(450, 180, 81, 21));
        price2->setReadOnly(true);
        label = new QLabel(city_show);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 100, 71, 16));
        label_2 = new QLabel(city_show);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 140, 131, 20));
        if_owned = new QLineEdit(city_show);
        if_owned->setObjectName("if_owned");
        if_owned->setGeometry(QRect(200, 140, 81, 21));
        if_owned->setReadOnly(true);
        place = new QLineEdit(city_show);
        place->setObjectName("place");
        place->setGeometry(QRect(200, 100, 81, 21));
        place->setReadOnly(true);
        close = new QPushButton(city_show);
        close->setObjectName("close");
        close->setGeometry(QRect(270, 320, 81, 31));
        owner_num = new QLineEdit(city_show);
        owner_num->setObjectName("owner_num");
        owner_num->setGeometry(QRect(200, 180, 81, 21));
        owner_num->setReadOnly(true);
        label_8 = new QLabel(city_show);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(300, 180, 151, 16));
        label_3 = new QLabel(city_show);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 180, 81, 16));
        label_6 = new QLabel(city_show);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(340, 100, 101, 20));
        label_9 = new QLabel(city_show);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(300, 220, 151, 16));

        retranslateUi(city_show);

        QMetaObject::connectSlotsByName(city_show);
    } // setupUi

    void retranslateUi(QWidget *city_show)
    {
        city_show->setWindowTitle(QCoreApplication::translate("city_show", "Form", nullptr));
        label_7->setText(QCoreApplication::translate("city_show", "\345\273\272\351\200\240\347\254\254\344\270\200\345\272\247\346\210\277\345\255\220\350\264\271\347\224\250\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("city_show", "\345\237\216\345\270\202\344\270\212\346\210\277\345\261\213\346\225\260\347\233\256\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("city_show", "\350\277\207\350\267\257\350\264\271\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("city_show", "\345\237\216\345\270\202\347\274\226\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("city_show", "\346\230\257\345\220\246\350\242\253\347\216\251\345\256\266\346\211\200\346\213\245\346\234\211\357\274\232", nullptr));
        close->setText(QCoreApplication::translate("city_show", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", nullptr));
        label_8->setText(QCoreApplication::translate("city_show", "\345\273\272\351\200\240\347\254\254\344\272\214\345\272\247\346\210\277\345\255\220\350\264\271\347\224\250\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("city_show", "\346\213\245\346\234\211\350\200\205\347\274\226\345\217\267\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("city_show", "\344\271\260\344\270\213\345\237\216\345\270\202\350\264\271\347\224\250\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("city_show", "\345\273\272\351\200\240\347\254\254\344\270\211\345\272\247\346\210\277\345\255\220\350\264\271\347\224\250\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class city_show: public Ui_city_show {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CITY_SHOW_H
