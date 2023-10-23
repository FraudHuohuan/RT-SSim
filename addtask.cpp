#include "addtask.h"
#include "ui_addtask.h"
#include <QDialog>
#include <QDebug>

#include "include/task.h"
#include "include/simul.h"

addTask::addTask(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addTask)
{
    ui->setupUi(this);
    ui->Submit->hide();
}

addTask::~addTask()
{
    delete ui;
}



int addTask::get_sections()
{
    int temp = ui->sections->value();
    return temp;
};

int addTask::get_task_id()
{
    int temp = ui->task_id->value();
    return temp;
};

int addTask::get_start_time()
{
    int temp = ui->start_time->value();
    return temp;
}

int addTask:: get_wcet(){
    int temp = ui->wcet->value();
    return temp;
}
int addTask::get_section_number(){
    int temp = ui->section_number->value();
    return temp;
}
int addTask::get_section_core(){
    int temp = ui->section_core->value();
    return temp;
}
int addTask::get_period(){
    int temp = ui->period->value();
    return temp;
}

void addTask::on_Add_clicked()
{
    int start_time = get_start_time();
    int wcet = get_wcet();
    int section_number = get_section_number();
    int section_core = get_section_core();
    tasknow.start[section_number]=start_time;
    tasknow.part_on_core[section_number]=section_core;
    tasknow.part_length[section_number]=wcet;
}

void addTask::on_Delete_clicked()
{
    memset(tasknow.part_length,0,sizeof(tasknow.part_length));
    memset(tasknow.part_on_core,0xFF,sizeof(tasknow.part_length));
    memset(tasknow.start,0,sizeof(tasknow.part_length));
    ui->Submit->hide();
    ui->Create->show();
    return;
}

void addTask::on_Create_clicked()
{
    ui->Create->hide();
    ui->Submit->show();
    memset(tasknow.part_length,0,sizeof(tasknow.part_length));
    memset(tasknow.part_on_core,0xFF,sizeof(tasknow.part_length));
    memset(tasknow.start,0,sizeof(tasknow.part_length));
}


void addTask::on_Submit_clicked()
{
    int sections = get_sections();
    int task_id = get_task_id();
    int period = get_period();
    if(taskid[task_id] == 0){
        ++taskNum;
        taskid[task_id] = 1;
    }
    initTask(task_id+1,tasknow,period,sections);
    ui->Submit->hide();
    ui->Create->show();
}


