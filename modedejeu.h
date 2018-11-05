#ifndef MODEDEJEU_H
#define MODEDEJEU_H

#include <QDialog>
#include <QFileDialog>

namespace Ui {
class modedejeu;
}

class modedejeu : public QDialog
{
    Q_OBJECT

public:
    explicit modedejeu(QWidget *parent = 0);
    ~modedejeu();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::modedejeu *ui;
};

#endif // MODEDEJEU_H
