/********************************************************************************
** Form generated from reading UI file 'airport_show.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AIRPORT_SHOW_H
#define UI_AIRPORT_SHOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_airport_show
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *airport_show)
    {
        if (airport_show->objectName().isEmpty())
            airport_show->setObjectName("airport_show");
        airport_show->resize(400, 300);
        label = new QLabel(airport_show);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 120, 361, 20));
        pushButton = new QPushButton(airport_show);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 160, 93, 28));

        retranslateUi(airport_show);

        QMetaObject::connectSlotsByName(airport_show);
    } // setupUi

    void retranslateUi(QWidget *airport_show)
    {
        airport_show->setWindowTitle(QCoreApplication::translate("airport_show", "Form", nullptr));
        label->setText(QCoreApplication::translate("airport_show", "\345\217\257\344\273\245\345\216\273\345\276\200\344\273\273\344\275\225\344\270\200\344\270\252\351\231\244\344\272\206\346\234\272\345\234\272\344\271\213\345\244\226\347\232\204\345\234\260\347\202\271\345\271\266\346\211\247\350\241\214\345\257\271\345\272\224\346\223\215\344\275\234", nullptr));
        pushButton->setText(QCoreApplication::translate("airport_show", "\350\277\224\345\233\236\344\270\273\351\241\265\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class airport_show: public Ui_airport_show {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AIRPORT_SHOW_H
