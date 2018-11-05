#include "appliaction.h"
#include "ui_appliaction.h"
#include "modedejeu.h"

Appliaction::Appliaction(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Appliaction)
{
    ui->setupUi(this);
    ui->pushButton->setText("Jouer");
    ui->pushButton_2->setText("Création de partie");
    ui->pushButton_3->setText("Quittez");
}

Appliaction::~Appliaction()
{
    delete ui;
}

void Appliaction::on_pushButton_clicked()
{
    modedejeu J;
    J.show();
    J.exec();
}

void Appliaction::on_pushButton_2_clicked()
{

}

void Appliaction::on_pushButton_3_clicked()
{
    close();
}
