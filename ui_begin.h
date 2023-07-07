/********************************************************************************
** Form generated from reading UI file 'begin.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEGIN_H
#define UI_BEGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_begin
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *begin)
    {
        if (begin->objectName().isEmpty())
            begin->setObjectName("begin");
        begin->resize(726, 531);
        begin->setStyleSheet(QString::fromUtf8(""));
        pushButton = new QPushButton(begin);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(550, 450, 171, 81));
        label = new QLabel(begin);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 731, 531));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/background.png);"));
        label->raise();
        pushButton->raise();

        retranslateUi(begin);

        QMetaObject::connectSlotsByName(begin);
    } // setupUi

    void retranslateUi(QWidget *begin)
    {
        begin->setWindowTitle(QCoreApplication::translate("begin", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("begin", "\345\274\200\345\247\213\346\270\270\346\210\217", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class begin: public Ui_begin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEGIN_H
