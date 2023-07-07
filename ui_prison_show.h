/********************************************************************************
** Form generated from reading UI file 'prison_show.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRISON_SHOW_H
#define UI_PRISON_SHOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_prison_show
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *prison_show)
    {
        if (prison_show->objectName().isEmpty())
            prison_show->setObjectName("prison_show");
        prison_show->resize(400, 300);
        label = new QLabel(prison_show);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 120, 161, 20));
        pushButton = new QPushButton(prison_show);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 160, 93, 28));

        retranslateUi(prison_show);

        QMetaObject::connectSlotsByName(prison_show);
    } // setupUi

    void retranslateUi(QWidget *prison_show)
    {
        prison_show->setWindowTitle(QCoreApplication::translate("prison_show", "Form", nullptr));
        label->setText(QCoreApplication::translate("prison_show", "\344\270\213\344\270\200\345\233\236\345\220\210\344\270\215\350\203\275\350\277\233\350\241\214\346\223\215\344\275\234", nullptr));
        pushButton->setText(QCoreApplication::translate("prison_show", "\350\277\224\345\233\236\344\270\273\351\241\265\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class prison_show: public Ui_prison_show {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRISON_SHOW_H
