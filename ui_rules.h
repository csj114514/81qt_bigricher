/********************************************************************************
** Form generated from reading UI file 'rules.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RULES_H
#define UI_RULES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rules
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButton;

    void setupUi(QWidget *rules)
    {
        if (rules->objectName().isEmpty())
            rules->setObjectName("rules");
        rules->resize(750, 525);
        textBrowser = new QTextBrowser(rules);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(210, 130, 281, 192));
        pushButton = new QPushButton(rules);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(310, 360, 93, 28));

        retranslateUi(rules);

        QMetaObject::connectSlotsByName(rules);
    } // setupUi

    void retranslateUi(QWidget *rules)
    {
        rules->setWindowTitle(QCoreApplication::translate("rules", "Form", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("rules", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\234\254\346\270\270\346\210\217\344\270\272\345\244\247\345\257\214\347\277\201\346\270\270\346\210\217\357\274\214\346\257\217\344\270\252\346\240\274\345\255\220\346\234\211\344\270\215\345\220\214\347\232\204\347\247\215\347\261\273\357\274\214\344\270\213\351\235\242\345\260\206\344\276\235\346\254\241\344\273\213\347\273\215\357\274\232</p>\n"
"<p style=\" margin-top:0px; margin-bo"
                        "ttom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1\343\200\201\345\237\216\345\270\202\357\274\232\345\275\223\344\275\240\350\265\260\345\210\260\345\237\216\345\270\202\344\270\212\346\227\266\357\274\214\350\213\245\350\257\245\345\237\216\345\270\202\346\262\241\346\234\211\344\270\273\344\272\272\357\274\214\344\275\240\345\217\257\344\273\245\344\271\260\344\270\213\345\256\203\357\274\233\350\213\245\350\257\245\345\237\216\345\270\202\346\234\211\344\270\273\344\272\272\344\270\224\346\230\257\344\275\240\357\274\214\345\210\231\344\275\240\345\217\257\344\273\245\345\234\250\344\270\212\351\235\242\345\273\272\346\210\277\345\255\220\357\274\214\344\270\200\346\254\241\345\217\252\350\203\275\345\273\272\344\270\200\344\270\252\357\274\214\346\234\200\345\244\232\345\273\272\344\270\211\344\270\252\357\274\233\350\213\245\344\270\273\344\272\272\344\270\215\346\230\257\344\275\240\357\274\214\345\210\231\344\275\240\351\234\200\350\246\201\344\270\212\347\274\264\350"
                        "\277\207\350\267\257\350\264\271\343\200\202</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2\343\200\201\351\223\266\350\241\214\357\274\232\345\275\223\344\275\240\350\265\260\345\210\260\351\223\266\350\241\214\344\270\212\346\227\266\357\274\214\344\275\240\345\217\257\344\273\245\351\200\211\346\213\251\345\220\221\351\223\266\350\241\214\351\207\214\345\255\230\351\222\261\345\222\214\345\217\226\351\222\261\357\274\214\346\257\217\345\233\236\345\220\210\351\223\266\350\241\214\351\207\214\347\232\204\351\222\261\351\203\275\344\274\232\346\214\211\347\205\247\344\270\200\345\256\232\347\232\204\345\210\251\347\216\207\344\270\212\346\266\250\343\200\202</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3\343\200\201\345\267\245\345\216\202\357\274\232\346\257\217\344\270\252\345\267\245\345\216\202\351\203\275\346\234\211\344\270\211\344\270\252"
                        "\350\202\241\344\273\275\357\274\214\344\275\240\345\217\257\344\273\245\351\200\211\346\213\251\344\271\260\344\270\213\345\267\245\345\216\202\347\232\204\344\270\200\344\273\275\350\202\241\344\273\275\357\274\214\345\275\223\344\270\200\344\270\252\344\272\272\350\265\260\345\210\260\345\267\245\345\216\202\344\270\212\346\227\266\357\274\214\350\213\245\346\262\241\346\234\211\345\267\245\345\216\202\347\232\204\350\202\241\344\273\275\357\274\214\345\210\231\351\234\200\350\246\201\347\273\231\346\257\217\344\270\252\346\234\211\350\202\241\344\273\275\347\232\204\344\272\272\344\270\200\344\273\275\350\277\207\350\267\257\350\264\271\343\200\202</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4\343\200\201\346\234\272\345\234\272\357\274\232\345\217\257\344\273\245\351\243\236\345\276\200\344\273\273\344\275\225\344\270\200\344\270\252\345\234\260\346\226\271\357\274\210\351\231\244\344\272\206\346\234\272\345\234\272\357\274"
                        "\211\345\271\266\346\211\247\350\241\214\345\257\271\345\272\224\346\223\215\344\275\234(<span style=\" color:#ff0000;\">\346\257\217\346\254\241\350\276\223\345\205\245\345\256\214\350\246\201\345\216\273\347\232\204\345\234\260\346\226\271\346\227\266\350\246\201\347\202\271\345\207\273\347\216\251\345\256\266\345\257\271\345\272\224\347\232\204\344\274\240\351\200\201\346\214\211\351\222\256\346\211\215\350\203\275\351\243\236\345\210\260\351\202\243\344\270\252\345\234\260\346\226\271\357\274\214\345\220\246\345\210\231\350\247\206\344\270\272\346\224\276\345\274\203</span>)\343\200\202</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">5\343\200\201\347\233\221\347\213\261\357\274\232\344\270\213\344\270\200\345\233\236\345\220\210\344\270\215\350\203\275\350\277\233\350\241\214\346\223\215\344\275\234\357\274\210\351\223\266\350\241\214\351\207\214\347\232\204\351\222\261\344\270\213\344\270\200\345\233\236\345\220\210\344\271\237"
                        "\344\270\215\344\274\232\345\242\236\345\212\240\357\274\211\343\200\202</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\203\234\345\210\251\346\235\241\344\273\266\357\274\232</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\213\245\345\234\25080\344\270\252\345\233\236\345\220\210\345\211\215\345\234\272\344\270\212\345\217\252\346\234\211\344\270\200\344\270\252\347\216\251\345\256\266\345\255\230\346\264\273\357\274\214\345\210\231\350\257\245\347\216\251\345\256\266\350\216\267\350\203\234\357\274\233\350\213\24580\344\270\252\345\233\236\345\220\210\345\220\216\345\234\272\344\270\212\346\234\211\344\270\244\344\270\252\345\217\212\344\273\245\344\270\212\347\216\251\345\256\266\345\255\230\346\264\273\357\274\214\345\210\231<span style=\" color:#ff0000;\">\347\216\260\346\234\211\351\207\221\345\270\201</span>\346\234\200\345\244\232\350"
                        "\200\205\350\216\267\350\203\234\343\200\202\357\274\210\350\213\245\346\234\211\345\271\266\345\210\227\345\210\231\347\233\264\345\210\260\345\217\252\346\234\211\344\270\200\344\270\252\344\272\272\346\234\200\345\244\232\347\232\204\346\227\266\345\200\231\345\210\206\345\207\272\350\203\234\350\264\237\357\274\211</p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("rules", "\350\277\224\345\233\236\344\270\273\351\241\265\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rules: public Ui_rules {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RULES_H