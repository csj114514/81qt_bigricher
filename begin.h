#ifndef BEGIN_H
#define BEGIN_H

#include <QWidget>
#include "bigricher.h"
#include "ui_bigricher.h"
#include <QImage>
#include <QPixmap>

namespace Ui {
class begin;
}

class begin : public QWidget
{
    Q_OBJECT

public:
    explicit begin(QWidget *parent = nullptr);
    ~begin();
    Dialog w;
    Ui::begin *ui;

private slots:
    void on_pushButton_clicked();

private:

};

#endif // BEGIN_H
