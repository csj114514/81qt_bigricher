/********************************************************************************
** Form generated from reading UI file 'factory_show.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACTORY_SHOW_H
#define UI_FACTORY_SHOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_factory_show
{
public:
    QLineEdit *price;
    QLineEdit *owner1;
    QLabel *label;
    QLineEdit *owner2;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *pass_tax;
    QLabel *label_3;
    QLineEdit *owner0;
    QPushButton *close;
    QLabel *label_2;
    QLabel *label_4;
    QLineEdit *place;

    void setupUi(QWidget *factory_show)
    {
        if (factory_show->objectName().isEmpty())
            factory_show->setObjectName("factory_show");
        factory_show->resize(672, 504);
        price = new QLineEdit(factory_show);
        price->setObjectName("price");
        price->setGeometry(QRect(360, 170, 91, 21));
        price->setReadOnly(true);
        owner1 = new QLineEdit(factory_show);
        owner1->setObjectName("owner1");
        owner1->setGeometry(QRect(360, 260, 91, 21));
        owner1->setReadOnly(true);
        label = new QLabel(factory_show);
        label->setObjectName("label");
        label->setGeometry(QRect(290, 140, 41, 16));
        owner2 = new QLineEdit(factory_show);
        owner2->setObjectName("owner2");
        owner2->setGeometry(QRect(360, 290, 91, 21));
        owner2->setReadOnly(true);
        label_5 = new QLabel(factory_show);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(190, 260, 141, 20));
        label_6 = new QLabel(factory_show);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(190, 290, 141, 21));
        pass_tax = new QLineEdit(factory_show);
        pass_tax->setObjectName("pass_tax");
        pass_tax->setGeometry(QRect(360, 200, 91, 21));
        pass_tax->setReadOnly(true);
        label_3 = new QLabel(factory_show);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(160, 200, 201, 21));
        owner0 = new QLineEdit(factory_show);
        owner0->setObjectName("owner0");
        owner0->setGeometry(QRect(360, 230, 91, 21));
        owner0->setReadOnly(true);
        close = new QPushButton(factory_show);
        close->setObjectName("close");
        close->setGeometry(QRect(290, 340, 91, 31));
        label_2 = new QLabel(factory_show);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(220, 170, 111, 21));
        label_4 = new QLabel(factory_show);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(190, 230, 141, 21));
        place = new QLineEdit(factory_show);
        place->setObjectName("place");
        place->setGeometry(QRect(360, 140, 91, 21));
        place->setReadOnly(true);

        retranslateUi(factory_show);

        QMetaObject::connectSlotsByName(factory_show);
    } // setupUi

    void retranslateUi(QWidget *factory_show)
    {
        factory_show->setWindowTitle(QCoreApplication::translate("factory_show", "Form", nullptr));
        label->setText(QCoreApplication::translate("factory_show", "\344\275\215\347\275\256\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("factory_show", "\347\254\254\344\272\214\344\273\275\350\202\241\344\273\275\347\232\204\346\211\200\346\234\211\350\200\205\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("factory_show", "\347\254\254\344\270\211\344\273\275\350\202\241\344\273\275\347\232\204\346\211\200\346\234\211\350\200\205\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("factory_show", "\346\257\217\344\273\275\350\202\241\344\273\275\350\246\201\347\274\264\347\272\263\347\232\204\350\277\207\350\267\257\350\264\271\357\274\232", nullptr));
        close->setText(QCoreApplication::translate("factory_show", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", nullptr));
        label_2->setText(QCoreApplication::translate("factory_show", "\344\271\260\344\270\213\350\202\241\344\273\275\347\232\204\350\264\271\347\224\250\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("factory_show", "\347\254\254\344\270\200\344\273\275\350\202\241\344\273\275\347\232\204\346\211\200\346\234\211\350\200\205\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class factory_show: public Ui_factory_show {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACTORY_SHOW_H
