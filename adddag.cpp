#include "adddag.h"
#include "ui_adddag.h"

addDAG::addDAG(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addDAG)
{
    ui->setupUi(this);
}

addDAG::~addDAG()
{
    delete ui;
}
