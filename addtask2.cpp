#include "addtask2.h"
#include "ui_addtask2.h"
#include <QDebug>
#include "addDAG.h"
#include "addtriplet.h"

#include "include/task.h"
#include "include/simul.h"

#define max_size 256

addTask2::addTask2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addTask2)
{
    ui->setupUi(this);
}

addTask2::~addTask2()
{
    delete ui;
}

void addTask2::on_pushButton_clicked()
{
    lcm=1;
    wait_for_join = init_task_list_head();
    struct subsection temp;

    memset(temp.part_length,0,sizeof(temp.part_length));           //t1
    memset(temp.part_on_core,0xFF,sizeof(temp.part_length));
    memset(temp.start,0,sizeof(temp.part_length));
    temp.start[0]=33;temp.part_on_core[0]=0;temp.part_length[0]=7;
    ++taskNum;
    initTask(taskID++,temp,50,1);

    memset(temp.part_length,0,sizeof(temp.part_length));              //t2
    memset(temp.part_on_core,0xFF,sizeof(temp.part_length));
    memset(temp.start,0,sizeof(temp.part_length));
    temp.start[0]=27;temp.part_on_core[0]=1;temp.part_length[0]=11;
    ++taskNum;
    initTask(taskID++,temp,50,1);

    memset(temp.part_length,0,sizeof(temp.part_length));                  //t3
    memset(temp.part_on_core,0xFF,sizeof(temp.part_length));
    memset(temp.start,0,sizeof(temp.part_length));
    temp.start[0]=19;temp.part_on_core[0]=0;temp.part_length[0]=14;
    ++taskNum;
    initTask(taskID++,temp,50,1);

    memset(temp.part_length,0,sizeof(temp.part_length));               //t4
    memset(temp.part_on_core,0xFF,sizeof(temp.part_length));
    memset(temp.start,0,sizeof(temp.part_length));
    temp.start[0]=1;temp.part_on_core[0]=0;temp.part_length[0]=18;
    ++taskNum;
   initTask(taskID++,temp,50,1);

    memset(temp.part_length,0,sizeof(temp.part_length));   //t5
    memset(temp.part_on_core,0xFF,sizeof(temp.part_length));
    memset(temp.start,0,sizeof(temp.part_length));
    temp.start[0]=1;temp.part_on_core[0]=1;temp.part_length[0]=26;
    ++taskNum;
    initTask(taskID++,temp,50,1);

    memset(temp.part_length,0,sizeof(temp.part_length));   //t6
    memset(temp.part_on_core,0xFF,sizeof(temp.part_length));
    memset(temp.start,0,sizeof(temp.part_length));
    temp.start[0]=5;temp.part_on_core[0]=3;temp.part_length[0]=12;
    ++taskNum;
    initTask(taskID++,temp,50,1);

    memset(temp.part_length,0,sizeof(temp.part_length));
    memset(temp.part_on_core,0xFF,sizeof(temp.part_length));  //t7
    memset(temp.start,0,sizeof(temp.part_length));
    temp.start[0]=36;temp.part_on_core[0]=4;temp.part_length[0]=8;
    ++taskNum;
    initTask(taskID++,temp,50,1);

    memset(temp.part_length,0,sizeof(temp.part_length));
    memset(temp.part_on_core,0xFF,sizeof(temp.part_length));
    memset(temp.start,0,sizeof(temp.part_length));                        //t8
    temp.start[0]=17;temp.part_on_core[0]=3;temp.part_length[0]=16;
    ++taskNum;
    initTask(taskID++,temp,50,1);

    memset(temp.part_length,0,sizeof(temp.part_length));
    memset(temp.part_on_core,0xFF,sizeof(temp.part_length));        //t9
    memset(temp.start,0,sizeof(temp.part_length));
    temp.start[0]=22;temp.part_on_core[0]=4;temp.part_length[0]=14;
    ++taskNum;
    initTask(taskID++,temp,50,1);

    memset(temp.part_length,0,sizeof(temp.part_length));
    memset(temp.part_on_core,0xFF,sizeof(temp.part_length));          //t10
    memset(temp.start,0,sizeof(temp.part_length));
    temp.start[0]=7;temp.part_on_core[0]=2;temp.part_length[0]=23;
    ++taskNum;
    initTask(taskID++,temp,50,1);

    memset(temp.part_length,0,sizeof(temp.part_length));           //t11
    memset(temp.part_on_core,0xFF,sizeof(temp.part_length));
    memset(temp.start,0,sizeof(temp.part_length));
    temp.start[0]=1;temp.part_on_core[0]=4;temp.part_length[0]=21;
    ++taskNum;
    initTask(taskID++,temp,50,1);

    memset(temp.part_length,0,sizeof(temp.part_length));           //t12
    memset(temp.part_on_core,0xFF,sizeof(temp.part_length));
    memset(temp.start,0,sizeof(temp.part_length));
    temp.start[0]=1;temp.part_on_core[0]=5;temp.part_length[0]=36;
    ++taskNum;
    initTask(taskID++,temp,50,1);

    memset(temp.part_length,0,sizeof(temp.part_length));           //t13
    memset(temp.part_on_core,0xFF,sizeof(temp.part_length));
    memset(temp.start,0,sizeof(temp.part_length));
    temp.start[0]=1;temp.part_on_core[0]=2;temp.part_length[0]=6;
    temp.start[1]=30;temp.part_on_core[1]=2;temp.part_length[1]=6;
    ++taskNum;
    initTask(taskID++,temp,25,1);

    memset(temp.part_length,0,sizeof(temp.part_length));           //t14
    memset(temp.part_on_core,0xFF,sizeof(temp.part_length));
    memset(temp.start,0,sizeof(temp.part_length));
    temp.start[0]=1;temp.part_on_core[0]=3;temp.part_length[0]=4;
    temp.start[1]=33;temp.part_on_core[1]=3;temp.part_length[1]=4;
    ++taskNum;
    initTask(taskID++,temp,25,1);


    for(int i=0; i<max_size; i++) {
            if(seg_taskSets[i].task_period!=0)
            lcm=lcm*seg_taskSets[i].task_period/(__gcd(lcm,seg_taskSets[i].task_period)); //求最小公倍数
        }
    qDebug()<<"lcm is"<<lcm<<endl;
}


void addTask2::on_pushButton_2_clicked()
{
    addDAG a;
    a.exec();
}


void addTask2::on_pushButton_6_clicked()
{
    addTriplet a;
    a.exec();
}

