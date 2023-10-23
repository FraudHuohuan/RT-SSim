#include "addcore.h"
#include "ui_addcore.h"
#include <QDialog>
#include <QDebug>

#include "include/core.h"
#include "include/simul.h"
#include "mainwindow.h"

addCore::addCore(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addCore)
{
    ui->setupUi(this);
}

addCore::~addCore()
{
    delete ui;
}
\

int addCore::get_type_id(){
    int temp = ui->type_id->value();
    return temp;
};

int addCore::get_core_number(){
    int temp = ui->core_number->value();
    return temp;
};

void addCore::on_Add_clicked()
{
    int core_number = get_core_number();
    int type_id = get_type_id();
    for(int i=0; i<core_number; i++){
        initLocalCore(++M, 1, type_id);
    }
    if(type_id == 0){
        cpu_num = cpu_num+core_number;
    }
    else if(type_id == 3 ){
        dsp_num = cpu_num+core_number;
    }
}
void addCore::on_Delete_clicked()
{

}

