#include "addtriplet.h"
#include "ui_addtriplet.h"

addTriplet::addTriplet(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addTriplet)
{
    ui->setupUi(this);
}

addTriplet::~addTriplet()
{
    delete ui;
}

void addTriplet::on_pushButton_clicked()
{

}

