/********************************************************************************
** Form generated from reading UI file 're100.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RE100_H
#define UI_RE100_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_re100
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *re100)
    {
        if (re100->objectName().isEmpty())
            re100->setObjectName("re100");
        re100->resize(466, 362);
        lineEdit = new QLineEdit(re100);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(170, 180, 113, 24));
        pushButton = new QPushButton(re100);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 220, 93, 28));
        label = new QLabel(re100);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 150, 191, 20));

        retranslateUi(re100);

        QMetaObject::connectSlotsByName(re100);
    } // setupUi

    void retranslateUi(QWidget *re100)
    {
        re100->setWindowTitle(QCoreApplication::translate("re100", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("re100", "\347\241\256\345\256\232", nullptr));
        label->setText(QCoreApplication::translate("re100", "\350\257\267\350\276\223\345\205\245\344\275\240\346\214\207\345\256\232\347\232\204\345\257\271\350\261\241\347\232\204\347\274\226\345\217\267\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class re100: public Ui_re100 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RE100_H
