#include "appliaction.h"
#include "ui_appliaction.h"

Appliaction::Appliaction(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Appliaction)
{
    ui->setupUi(this);
}

Appliaction::~Appliaction()
{
    delete ui;
}
