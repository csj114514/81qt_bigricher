#ifndef END_H
#define END_H

#include <QWidget>

namespace Ui {
class end;
}

class end : public QWidget
{
    Q_OBJECT

public:
    explicit end(QWidget *parent = nullptr);
    ~end();
    Ui::end *ui;

private:

};

#endif // END_H
