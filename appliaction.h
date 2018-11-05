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

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Appliaction *ui;
};

#endif // APPLIACTION_H
