#include "modedejeu.h"
#include "ui_modedejeu.h"

modedejeu::modedejeu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modedejeu)
{
    ui->setupUi(this);
    ui->pushButton->setText("J1 VS IA");
    ui->pushButton_2->setText("J1 VS J2");
}

modedejeu::~modedejeu()
{
    delete ui;
}

void modedejeu::on_pushButton_clicked()
{
    QString file_name=QFileDialog::getOpenFileName(this,"open a file","C://");
}

void modedejeu::on_pushButton_2_clicked()
{
    QString file_name=QFileDialog::getOpenFileName(this,"open a file","C://");

}
