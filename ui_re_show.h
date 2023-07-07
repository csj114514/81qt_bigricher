/********************************************************************************
** Form generated from reading UI file 're_show.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RE_SHOW_H
#define UI_RE_SHOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_re_show
{
public:
    QPushButton *pushButton;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *re_show)
    {
        if (re_show->objectName().isEmpty())
            re_show->setObjectName("re_show");
        re_show->resize(591, 427);
        pushButton = new QPushButton(re_show);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(250, 310, 101, 31));
        textBrowser = new QTextBrowser(re_show);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(160, 70, 256, 211));

        retranslateUi(re_show);

        QMetaObject::connectSlotsByName(re_show);
    } // setupUi

    void retranslateUi(QWidget *re_show)
    {
        re_show->setWindowTitle(QCoreApplication::translate("re_show", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("re_show", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("re_show", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\344\272\213\344\273\266\357\274\232</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">   1.\350\216\267\345\276\22750\351\207\221\345\270\201 2.\345\207\217\345\260\22150\351\207\221\345\270\201</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-inde"
                        "nt:0px;\">   3.\345\217\257\344\273\245\345\220\221\351\223\266\350\241\214\344\270\255\345\255\230\345\217\226\346\254\276</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">   4.\345\217\226\346\266\210\344\270\213\346\254\241\346\216\267\351\252\260\345\255\220\347\247\273\345\212\250</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">   5.\345\217\257\344\273\245\347\247\273\345\212\250\345\210\260\345\234\272\344\270\212\344\273\273\344\270\200\344\270\252\346\240\274\345\255\220(\351\231\244\344\272\206\346\234\272\345\234\272)\345\271\266\346\211\247\350\241\214\345\257\271\345\272\224\346\223\215\344\275\234</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">   6.\345\217\257\344\273\245\345\220\221\351\223\266\350\241\214\344\270\255\345\255\230\345\217\226\346\254\276</p"
                        ">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">   7.\346\214\207\345\256\232\344\270\200\344\270\252\351\235\236\350\207\252\345\267\261\347\232\204\347\216\251\345\256\266\357\274\214\344\275\240\344\270\216\345\205\266\345\220\204\350\216\267\345\276\22750\351\207\221\345\270\201</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">   8.\346\214\207\345\256\232\344\270\200\344\270\252\351\235\236\350\207\252\345\267\261\347\232\204\347\216\251\345\256\266\357\274\214\344\275\240\344\270\216\345\205\266\345\220\204\350\216\267\345\276\22750\351\207\221\345\270\201</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">   9.\346\211\200\346\234\211\344\272\272\350\216\267\345\276\22725\351\207\221\345\270\201</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; marg"
                        "in-right:0px; -qt-block-indent:0; text-indent:0px;\">   10.\346\214\207\345\256\232\344\270\200\344\270\252\351\235\236\350\207\252\345\267\261\347\232\204\347\216\251\345\256\266\357\274\214\344\275\240\344\272\244\347\273\231\345\205\266100\351\207\221\345\270\201</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class re_show: public Ui_re_show {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RE_SHOW_H
