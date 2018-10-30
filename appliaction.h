#ifndef APPLIACTION_H
#define APPLIACTION_H

#include <QMainWindow>

namespace Ui {
class Appliaction;
}

class Appliaction : public QMainWindow
{
    Q_OBJECT

public:
    explicit Appliaction(QWidget *parent = 0);
    ~Appliaction();

private:
    Ui::Appliaction *ui;
};

#endif // APPLIACTION_H
