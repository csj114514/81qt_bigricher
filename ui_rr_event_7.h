/********************************************************************************
** Form generated from reading UI file 'rr_event_7.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RR_EVENT_7_H
#define UI_RR_EVENT_7_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rr_event_7
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QLineEdit *lineEdit;

    void setupUi(QWidget *rr_event_7)
    {
        if (rr_event_7->objectName().isEmpty())
            rr_event_7->setObjectName("rr_event_7");
        rr_event_7->resize(518, 347);
        label = new QLabel(rr_event_7);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 120, 391, 31));
        pushButton = new QPushButton(rr_event_7);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(200, 227, 80, 31));
        label_2 = new QLabel(rr_event_7);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 170, 141, 21));
        lineEdit = new QLineEdit(rr_event_7);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(250, 170, 101, 21));

        retranslateUi(rr_event_7);

        QMetaObject::connectSlotsByName(rr_event_7);
    } // setupUi

    void retranslateUi(QWidget *rr_event_7)
    {
        rr_event_7->setWindowTitle(QCoreApplication::translate("rr_event_7", "Form", nullptr));
        label->setText(QCoreApplication::translate("rr_event_7", "\345\245\226\345\212\2617\357\274\232\351\200\211\346\213\251\344\270\200\344\270\252\345\261\236\344\272\216\344\275\240\347\232\204\345\237\216\345\270\202\357\274\214\345\205\215\350\264\271\345\234\250\345\205\266\344\270\212\350\216\267\345\276\227\344\270\200\346\240\213\346\210\277\345\261\213\357\274\210\350\257\245\345\237\216\345\270\202\346\210\277\345\261\213\346\225\260\344\270\215\350\203\275\350\266\205\350\277\2073\357\274\211", nullptr));
        pushButton->setText(QCoreApplication::translate("rr_event_7", "\347\241\256\345\256\232", nullptr));
        label_2->setText(QCoreApplication::translate("rr_event_7", "\344\275\240\351\200\211\346\213\251\347\232\204\345\237\216\345\270\202\347\274\226\345\217\267\344\270\272\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rr_event_7: public Ui_rr_event_7 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RR_EVENT_7_H
