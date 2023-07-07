#include "bigricher.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QImage>
#include <QPixmap>
#include "ui_begin.h"
#include "begin.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "final_bigricher_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    begin bg;
    QPixmap imgbegin(":/pic/background.png");
    bg.ui->label->setPixmap(imgbegin);
    bg.ui->label->setScaledContents(true);
    bg.show();
    return a.exec();
}
