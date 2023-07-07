#include "end.h"
#include "ui_end.h"

end::end(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::end)
{
    ui->setupUi(this);
}

end::~end()
{
    delete ui;
}
