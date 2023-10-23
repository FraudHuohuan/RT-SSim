#include <QDebug>
#include <QTimer>
#include <QTime>
#include <QColor>
#include <QtMath>
#include <QtGlobal>

#include <algorithm>
#include <vector>

#include "addcore.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addtask.h"
#include "addcore.h"
#include "addtask2.h"

#include "include/task.h"
#include "include/core.h"
#include "include/simul.h"
#include "include/control.h"
using namespace std;
#define max 10
#define max_size 256
int lcm = 1;
//int dsp_num=0;
//int cpu_num=0;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    init_GUI();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init_GUI()
{
  /*  Coreset coreset;
    core1  core_1=core1(1, 1.0, 0 ,1);
    core1  core_2=core1(2, 2.0, 0 ,2);
    coreset.push_back(core_1);
    coreset.push_back(core_2);
    Task_segment temp_segment= Task_segment(3,0,0,1);
    table_schedule schedule_temp=table_schedule(temp_segment,1,4);
    coreset[0].table_append(schedule_temp);
    table_schedule schedule_temp2=table_schedule(temp_segment,2,5);
    coreset[1].table_append(schedule_temp2);
   */


    taskID = 1;
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setAlignment(Qt::AlignLeft | Qt::AlignTop);
    ui->btn_stop->hide();

    header_style = "QHeaderView::section{"
                        "background:rgb(120,120,120);"
                        "color:rgb(255,255,255);"
                        "padding: 1px;}";

    ui->Slider_speed->setInvertedAppearance(true);
    ui->Slider_speed->setMinimum(10);
    ui->Slider_speed->setMaximum(200);
    ui->Slider_speed->setValue(100);

    joined_model = new QStandardItemModel();
    wait_model = new QStandardItemModel();
    utilization_model = new QStandardItemModel();

    joined_model->setColumnCount(7);
    joined_model->setHeaderData(0, Qt::Horizontal, QString::fromLocal8Bit("ID"));
    joined_model->setHeaderData(1, Qt::Horizontal, QString::fromLocal8Bit("Color"));
   // joined_model->setHeaderData(1, Qt::Horizontal, QString::fromLocal8Bit("Prio"));
    joined_model->setHeaderData(2, Qt::Horizontal, QString::fromLocal8Bit("Core"));
    joined_model->setHeaderData(3, Qt::Horizontal, QString::fromLocal8Bit("Ui"));
    joined_model->setHeaderData(4, Qt::Horizontal, QString::fromLocal8Bit("Ci"));
   // joined_model->setHeaderData(6, Qt::Horizontal, QString::fromLocal8Bit("Ri"));
    joined_model->setHeaderData(5, Qt::Horizontal, QString::fromLocal8Bit("Di"));
    joined_model->setHeaderData(6, Qt::Horizontal, QString::fromLocal8Bit("Ti"));

    wait_model->setColumnCount(6);
    wait_model->setHeaderData(0, Qt::Horizontal, QString::fromLocal8Bit("ID"));
    wait_model->setHeaderData(1, Qt::Horizontal, QString::fromLocal8Bit("State"));
    wait_model->setHeaderData(2, Qt::Horizontal, QString::fromLocal8Bit("Ci"));
    wait_model->setHeaderData(3, Qt::Horizontal, QString::fromLocal8Bit("Di"));
    wait_model->setHeaderData(4, Qt::Horizontal, QString::fromLocal8Bit("Ti"));
    wait_model->setHeaderData(5, Qt::Horizontal, QString::fromLocal8Bit("Ui"));

    utilization_model->setColumnCount(2);
    utilization_model->setHeaderData(0, Qt::Horizontal, QString::fromLocal8Bit("Core"));
   //utilization_model->setHeaderData(1, Qt::Horizontal, QString::fromLocal8Bit("Speed"));
   //  utilization_model->setHeaderData(2, Qt::Horizontal, QString::fromLocal8Bit("Utilization"));
    utilization_model->setHeaderData(1, Qt::Horizontal, QString::fromLocal8Bit("Excuting"));
   // utilization_model->setHeaderData(4, Qt::Horizontal, QString::fromLocal8Bit("Ready"));
   // utilization_model->setHeaderData(5, Qt::Horizontal, QString::fromLocal8Bit("Failure"));
   // utilization_model->setHeaderData(6, Qt::Horizontal, QString::fromLocal8Bit("Recovery"));
   // utilization_model->setHeaderData(7, Qt::Horizontal, QString::fromLocal8Bit("Cluster"));

    //在QTableView中加入模型
    ui->table_joined->setModel(joined_model);
//    ui->table_wait->setModel(wait_model);
    ui->table_utilizaiton->setModel(utilization_model);

    ui->table_joined->setColumnWidth(0,80);
    ui->table_joined->setColumnWidth(1,80);
    ui->table_joined->setShowGrid(true);
    ui->table_joined->setGridStyle(Qt::DotLine);
    ui->table_joined->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->table_joined->horizontalHeader()->setStyleSheet(header_style);
    QHeaderView *header1 = ui->table_joined->verticalHeader();
    header1->setHidden(true);

//    ui->table_wait->setColumnWidth(0,80);
//    ui->table_wait->setColumnWidth(1,110);
//    ui->table_wait->setShowGrid(true);
//    ui->table_wait->setGridStyle(Qt::DotLine);
//    ui->table_wait->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
//    ui->table_wait->horizontalHeader()->setStyleSheet(header_style);
//    header1 = ui->table_wait->verticalHeader();
    header1->setHidden(true);

    ui->table_utilizaiton->setColumnWidth(0,80);
    ui->table_utilizaiton->setColumnWidth(1,200);
    ui->table_utilizaiton->setShowGrid(true);
    ui->table_utilizaiton->setGridStyle(Qt::DotLine);
    ui->table_utilizaiton->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    QFont font = ui->table_utilizaiton->horizontalHeader()->font();
    font.setBold(true);
    ui->table_utilizaiton->horizontalHeader()->setFont(font);
    ui->table_utilizaiton->horizontalHeader()->setStyleSheet(header_style);  //设置首行样式
    header1 = ui->table_utilizaiton->verticalHeader();
    header1->setHidden(true);

    for(int i = 0; i < 6; ++i){
        for(int j = 0; j < 6; ++j){
            item = new QStandardItem(QString("-"));
            item->setTextAlignment(Qt::AlignHCenter);
            wait_model->setItem(i, j, item);
        }

        for(int k = 0; k < 7; ++k){
            item = new QStandardItem(QString("-"));
            item->setTextAlignment(Qt::AlignHCenter);
            joined_model->setItem(i, k, item);
        }

        for(int m = 0; m < 2; ++m){
            item = new QStandardItem(QString("-"));
            item->setTextAlignment(Qt::AlignHCenter);
            utilization_model->setItem(i, m, item);
        }
    }

    color[0] = QColor(100,185,140);
    color[1] = QColor(40,125,80);
    color[2] = QColor(128,220,221);
    color[3] = QColor(58,150,150);
    color[4] = QColor(225,128,225);
    color[5] = QColor(165,68,165);
    color[6] = QColor(225,190,100);
    color[7] = QColor(165,130,40);
    color[8] = QColor(100,225,100);
    color[9] = QColor(40,165,40);
    color[10] = QColor(128,120,221);
    color[11] = QColor(58,50,150);
    color[12] = QColor(225,198,225);
    color[13] = QColor(165,128,165);
    color[14] = QColor(170,170,0);
    color[15] = QColor(110,110,0);
    color[16] = QColor(151,255,65);
    color[17] = QColor(91,195,5);
    color[18] = QColor(105,105,0);
    color[19] = QColor(85,85,0);
    color[20] = QColor(0,85,127);
    color[21] = QColor(0,25,67);
    color[22] = QColor(85,0,127);
    color[23] = QColor(25,0,67);
    color[24] = QColor(170,170,255);
    color[25] = QColor(110,110,195);
    color[26] = QColor(225,100,100);
    color[27] = QColor(165,40,40);

    //在此处扩充颜色
    for(int i = 0; i < 14; ++i){
        brush[i*4].setColor(color[i*2]);
        brush[i*4].setStyle(Qt::SolidPattern);//核上任务  
        brush[i*4+1].setColor(color[i*2]);
        brush[i*4+1].setStyle(Qt::Dense6Pattern);//核上局部资源
        brush[i*4+2].setColor(color[i*2]);
        brush[i*4+2].setStyle(Qt::DiagCrossPattern);//核上全局资源
        brush[i*4+3].setColor(color[i*2]);
        brush[i*4+3].setStyle(Qt::SolidPattern);//核上资源标志
    }

    for(int i = 0; i < 14; ++i){
        pen[i*2].setColor(color[i*2]);//核上任务
        pen[i*2].setWidth(2);
        pen[i*2+1].setColor(color[i*2+1]);//核上资源标志
        pen[i*2+1].setWidth(2);
                                      //默认黑色边缘的资源边缘
    }
     pen[99].setWidth(3);
}


void waitSec(int s)
{
//#ifdef WIN32
//        Sleep(1000);
//#else
//        sleep(1);
//#endif

    QTime t;
    t.start();
    while(t.elapsed()<1000*s)
        QCoreApplication::processEvents();
}

//按下init按钮后所做的一部分工作
void MainWindow::testInit()
{
    ui->btn_reset->setEnabled(false); //init按钮不可以点击了，防止重复初始化
    for(int i=0; i<taskNum; i++) {
            qDebug()<<"task_period"<<seg_taskSets[i].task_period<<endl;
            if(seg_taskSets[i].task_period!=0)
            lcm=lcm*seg_taskSets[i].task_period/(__gcd(lcm,seg_taskSets[i].task_period)); //求最小公倍数
        }
        qDebug()<<"lcm"<<lcm<<endl;
        qDebug()<<"tasknum"<<taskNum<<endl;
        int row=0;
        for(int i = 0 ; i < taskNum ; i++)
            for(int k=0;k<max;k++)
                if(k<seg_taskSets[i].num_subsection)
           { Task *task_now = &seg_taskSets[i];
            joined_task.push_back(task_now);
            qDebug()<<"task_id "<<task_now->task_id<<"!"
                        <<"task_wcet "<<task_now->task_wcet<<"!!!"
                          <<"task_period "<<task_now->task_period<<"!"
                            <<"task_jitter "<<task_now->task_jitter<<"!"
                              <<"task_deadline "<<task_now->task_deadline<<"!"
                                <<"task_oncore "<<task_now->on_core<<"!"
                               <<"task_num:"<<task_now->joined_row
                   <<endl;
           qDebug()<<"task_now jion_row"<<task_now->joined_row<<endl;
            Core * core_p = &cores[task_now->on_core];
            //ID
            item = new QStandardItem(tau+QString::number(task_now->task_id)+"("+QString::number(k+1)+")");
            item->setTextAlignment(Qt::AlignHCenter);
            joined_model->setItem(row, 0, item);

            //Color
            item = new QStandardItem();
            item->setBackground(brush[(task_now->task_id)*4%56]);
            joined_model->setItem(row, 1, item);
            //Base Prio
            /*item = new QStandardItem(QString::number(task_now->task_priority));
            item->setTextAlignment(Qt::AlignHCenter);
            joined_model->setItem(row, 2, item);*/
            //Core
            item = new QStandardItem(QString::number(task_now->partition.part_on_core[k]));
            item->setTextAlignment(Qt::AlignHCenter);
            joined_model->setItem(row, 2, item);
            //Ui
            item = new QStandardItem(QString::number(task_now->partition.part_length[k] / (core_p->rate * task_now->task_period), 'f', 3));
            item->setTextAlignment(Qt::AlignHCenter);
            joined_model->setItem(row, 3, item);
            //Ci
            item = new QStandardItem(QString::number(qCeil(task_now->partition.part_length[k] / core_p->rate)));
            item->setTextAlignment(Qt::AlignHCenter);
            joined_model->setItem(row, 4, item);
            //Di
            item = new QStandardItem(QString::number(task_now->task_period));
            item->setTextAlignment(Qt::AlignHCenter);
            joined_model->setItem(row, 5, item);
            //Ti
            item = new QStandardItem(QString::number(task_now->task_period));
            item->setTextAlignment(Qt::AlignHCenter);
            joined_model->setItem(row, 6, item);
            row++;
            }

                    //qDebug()<<"CoreID"<<cores[0].core_id<<endl;
        //修改前端utilization区域显示信息
        for(int i = 0; i < M; ++i){
            local_core = &cores[i];
            //Core
            if(local_core->core_type==0)
            item = new QStandardItem(QString("cpu%1").arg(local_core->core_id-1));
           else if(local_core->core_type==1)
            item = new QStandardItem(QString("fpga%1").arg(local_core->core_id-1));
            else if(local_core->core_type==2)
            item = new QStandardItem(QString("gpu%1").arg(local_core->core_id-1));
            else if(local_core->core_type==3)
            item = new QStandardItem(QString("dsp%1").arg(local_core->core_id-1-cpu_num));
            item->setTextAlignment(Qt::AlignHCenter);
            utilization_model->setItem(i, 0, item);

            //Speed
         /* item = new QStandardItem(QString::number(local_core->rate, 'f', 3));
            item->setTextAlignment(Qt::AlignHCenter);
            utilization_model->setItem(i, 1, item);
          //Utilization
            item = new QStandardItem(QString::number(local_core->utilization, 'f', 3));
            item->setTextAlignment(Qt::AlignHCenter);
            utilization_model->setItem(i, 2, item);
            //fail_prob
            item = new QStandardItem(QString::number(0, 'f', 2));
            item->setTextAlignment(Qt::AlignHCenter);
            utilization_model->setItem(i, 5, item);
            //recovery_time
            item = new QStandardItem(QString::number(local_core->recovery_time));
            item->setTextAlignment(Qt::AlignHCenter);
            utilization_model->setItem(i, 6, item);
            //owner_cluster
            item = new QStandardItem(QString::number(0));
            item->setTextAlignment(Qt::AlignHCenter);
            utilization_model->setItem(i, 7, item);  */
        }


}



void MainWindow::drawPeriod()
{
    QPen pen_dotline(QColor(0,0,0));
    pen_dotline.setStyle(Qt::DotLine);
    pen_dotline.setWidth(2);
    scene->addLine(72+Time*30, 0, 72+Time*30, M*80, pen_dotline);
}


void MainWindow::drawStart(Task task,int part,QPen *pen, QBrush *brush)
{
    QGraphicsLineItem *arrival;
    int arrival_x = (Time ) * 30 + 56 + 16;
    int arrival_y = (task.partition.part_on_core[part]) * 70 + 20;
    qDebug()<<"draw start task"<<task.task_id<<"on _core"<<task.on_core<<endl;
    arrival = scene->addLine(arrival_x, arrival_y, arrival_x, arrival_y + 40, pen[(task.task_id) * 2%28]); //起点坐标，终点坐标，画笔

    QGraphicsPolygonItem *arrivalArrow;

    int arrowLength = 4;
    QVector<QPointF> arrival_point;
    arrival_point.append(QPointF(arrival_x - arrowLength, arrival_y));
    arrival_point.append(QPointF(arrival_x + arrowLength, arrival_y));
    arrival_point.append(QPointF(arrival_x , arrival_y - arrowLength *1.73));
    arrivalArrow = scene->addPolygon(arrival_point);

    arrivalArrow->setBrush(brush[(task.task_id ) * 4%56]);
    arrivalArrow->setPen(pen[(task.task_id ) * 2%28]);
}

void MainWindow::drawTransfer(Task task,int part,QPen *pen)
{
    QGraphicsLineItem *arrival;
    int arrival_x = (Time ) * 30 + 56 + 16;
    int arrival_y = (task.partition.part_on_core[part]) * 70 + 20;
    qDebug()<<"draw start task"<<task.task_id<<"on _core"<<task.on_core<<endl;
    arrival = scene->addLine(arrival_x, arrival_y, arrival_x, arrival_y + 40, pen[(task.task_id) * 2%28]); //起点坐标，终点坐标，画笔

    QGraphicsPolygonItem *arrivalArrow;

    int arrowLength = 4;
    QVector<QPointF> arrival_point;
    arrival_point.append(QPointF(arrival_x - arrowLength, arrival_y));
    arrival_point.append(QPointF(arrival_x + arrowLength, arrival_y));
    arrival_point.append(QPointF(arrival_x + arrowLength, arrival_y - arrowLength));
    arrival_point.append(QPointF(arrival_x - arrowLength, arrival_y - arrowLength ));
    arrivalArrow = scene->addPolygon(arrival_point);
    arrivalArrow->setPen(pen[(task.task_id ) * 2]);
}




void MainWindow::drawExit(Task task,int part ,QPen *pen)
{
    QGraphicsLineItem *exit;
    int exit_x = (Time ) * 30 + 56 + 16;
    qDebug()<<"draw ends: task"<<task.task_id<<"on _core"<<task.on_core<<endl;
    int exit_y = (task.partition.part_on_core[part] ) * 70 + 18;

    exit = scene->addLine(exit_x, exit_y, exit_x, exit_y + 40, pen[(task.task_id) * 2%28]);

    QGraphicsLineItem *exitIndex;

    int indexLength = 4;
    exitIndex = scene->addLine(exit_x - indexLength, exit_y, exit_x + indexLength, exit_y);
    exitIndex->setPen(pen[(task.task_id ) * 2%28]);
}

void MainWindow::on_btn_next_clicked()
{
    qDebug()<<"Time: "<<Time<<endl;

    Time++;
   /* for(int core_index=0;core_index<CoreMax;core_index++)                               developing
      {  table_schedules=coreset[core_index].table_schedules_get();
         for(int task_segment_index=0; task_segment_index++;task_segment_index<coreset[core_index].segmentnum_get())
         if()
      }
      */

    for(int j=0;j<max_size;j++)
    {
        for(int k=0;k<max;k++)
       {
        if((seg_taskSets[j].partition.start[k]!=0)&&(Time%lcm)==seg_taskSets[j].partition.start[k]+seg_taskSets[j].partition.part_length[k])
          {
            cores[seg_taskSets[j].partition.part_on_core[k]].task_scheduled =-1;
            cores[seg_taskSets[j].partition.part_on_core[k]].num_segment =-1;
            qDebug()<<"time:"<<Time<<"task:"<<j<<"part:"<<k<<"on core:"<<seg_taskSets[j].partition.part_on_core[k]<<"finish"<<endl;
             if(k%seg_taskSets[j].num_subsection==(seg_taskSets[j].num_subsection-1))
            drawExit(seg_taskSets[j],k, pen);

           }

       }
    }
    for(int j=0;j<max_size;j++)
    {
        for(int k=0;k<max;k++)
       {
        if((seg_taskSets[j].partition.start[k]!=0)&&(Time%lcm)==seg_taskSets[j].partition.start[k])
        {
            seg_taskSets[j].execute_time=0;
            cores[seg_taskSets[j].partition.part_on_core[k]].task_scheduled =j+1;
            cores[seg_taskSets[j].partition.part_on_core[k]].num_segment =k%seg_taskSets[j].num_subsection+1;
            if(k%seg_taskSets[j].num_subsection==0)
            drawStart(seg_taskSets[j], k, pen,brush);
            else
                drawTransfer(seg_taskSets[j],k, pen);
            qDebug()<<"time:"<<Time<<"task:"<<j<<"part:"<<k<<"on core:"<<seg_taskSets[j].partition.part_on_core[k]<<"start"<<endl;
        }

       }
    }

        for(int i = 0; i < M; ++i){
            int row = cores[i].core_id-1;
            if((cores[i].task_scheduled-1)>=0)
            {
                    Task *current = &seg_taskSets[cores[i].task_scheduled-1];
                    current->execute_time++;
                    rectangle = scene->addRect(Time * 30 + 56 + 16, (cores[i].core_id-1) * 70 + 30, 30, 30);
                    if(current->execute_time == 1&&current->task_id >=1){
                        QString text = "T";
                        text += (QString::number(current->task_id)+"("+QString::number(cores[i].num_segment)+")");
                        QGraphicsTextItem *table_driven_text = scene->addText(text, QFont("Consolas", 6.5, -1, true));
                        table_driven_text->setPos(Time * 30 + 56 + 14, (cores[i].core_id-1) * 70 + 35);

                        current->first_release = false;
                    }

                    rectangle->setBrush(brush[(current->task_id)*4%56]); //brush[i*4].setStyle(Qt::SolidPattern)
                    rectangle->setPen(pen[(current->task_id)*2%28]);
            }
            //在Runtime Information区域展示的信息
            QString text="-";
            if((cores[i].task_scheduled-1)>=0)
            {
               text = "T"+QString::number(seg_taskSets[cores[i].task_scheduled-1].task_id);
            }
                item = new QStandardItem(text);
                item->setTextAlignment(Qt::AlignHCenter);
                utilization_model->setItem(i, 1, item);

        }
        if(Time%lcm==1&&Time!=1)
           drawPeriod();


    }


/*Init按钮:
 *根据设定的处理器信息与表调度任务信息初始化
 *图形界面，并对系统中的数据结果进行初始化。
 *(testInit()中实现）
 **/
void MainWindow::on_btn_reset_clicked()
{
    //初始化计时器
    Time = 0;

    int text_y = 30;
    for(int i = 0; i < M; ++i){
        QString name;
        if(cores[i].core_type==0)
        name = "CPU"+QString::number(i);
        if(cores[i].core_type==1)
        name = "FPGA"+ QString::number(i);
        if(cores[i].core_type==2)
        name = "GPU"+ QString::number(i);
        if(cores[i].core_type==3)
        name = "DSP"+ QString::number(i-cpu_num);

        text = scene->addText(name);
        text->setPos(45, text_y);
        text->setFont(QFont("Consolas", 10, -1, true));
        text_y += 70;
    }
    QPen pen_coordinate(Qt::black);
    QPen pen_dashLien(QColor(210, 210, 210));
    pen_dashLien.setStyle(Qt::DashLine);
    coordinate = scene->addLine(70 + 31, 0, 70 + 31, M*70 + 10, pen_coordinate);
    coordinate = scene->addLine(70 + 31, 10, 1032 + 31 + 5100, 10, pen_dashLien);
    coordinate = scene->addLine(70 + 31, M*70 + 10, 1060 + 31 + 5100, M*70 + 10, pen_coordinate);

    text = scene->addText((QString::number(0)));
    text->setFont(QFont("Consolas", 10, -1, true));
    text->setPos(62 + 31, M*70 + 28);

    int index = 1;
    for(int i = 101 + 31; i < 1060 + 5120; i += 30){
        coordinate = scene->addLine(i, 10, i, M*70 + 10, pen_dashLien);
        QGraphicsItem *index_line;
        index_line = scene->addLine(i, M*70 + 10, i, M*70 + 25, pen_coordinate);
        text = scene->addText((QString::number(index)));
        text->setFont(QFont("Consolas", 10, -1, true));
       text->setPos(i - 10, M*70 + 28);
        index += 1;
    }
    QVector<QPointF> point_sets;

    point_sets.append(QPointF(1057.5 + 31 + 5100, M*70 + 4));
    point_sets.append(QPointF(1060 + 31 + 5100, M*70 + 10));
    point_sets.append(QPointF(1057.5 + 31 + 5100, M*70 + 16));
    point_sets.append(QPointF(1073 + 31 + 5100, M*70 + 10));

    QGraphicsPolygonItem *tritangle = scene->addPolygon(QPolygonF(point_sets));
    tritangle->setBrush(Qt::black);

    //图例
    int index_h = 40;

    //任务到达图例
    int arrival_x = 155;
    int arrival_y = (M + 1) * 70;
    QGraphicsLineItem *arrival = scene->addLine(arrival_x, arrival_y, arrival_x, arrival_y + index_h, QPen(QBrush(Qt::black), 2));

    QGraphicsPolygonItem *arrivalArrow;
    int arrowLength = 4;
    QVector<QPointF> arrival_point;
    arrival_point.append(QPointF(arrival_x - arrowLength, arrival_y));
    arrival_point.append(QPointF(arrival_x + arrowLength, arrival_y));
    arrival_point.append((QPointF(arrival_x, arrival_y - arrowLength * 1.73)));
    arrivalArrow = scene->addPolygon(arrival_point);
    arrivalArrow->setPen(QPen(QBrush(Qt::black), 2));
    arrivalArrow->setBrush(Qt::black);

    QGraphicsTextItem *arrivalText = scene->addText("任务", QFont("Consolas"));
    arrivalText->setPos(arrival_x + 15, arrival_y - 5);
    arrivalText = scene->addText("释放", QFont("Consolas"));
    arrivalText->setPos(arrival_x + 15, arrival_y + index_h/3);

    //任务终止图例
    QGraphicsLineItem *exit;
    int exit_x = arrival_x + 150;
    int exit_y = (M+1) * 70;
    exit = scene->addLine(exit_x, exit_y, exit_x, exit_y + 40, QPen(Qt::black, 2));

    QGraphicsLineItem *exitIndex;
    int indexLength = 4;
    exitIndex = scene->addLine(exit_x-indexLength, exit_y, exit_x + indexLength, exit_y);
    exitIndex->setPen(QPen(Qt::black, 2));

    QGraphicsTextItem *exitText = scene->addText("任务", QFont("Consolas"));
    exitText->setPos(exit_x + 15, exit_y - 5);
    exitText = scene->addText("结束", QFont("Consolas"));
    exitText->setPos(exit_x + 15, exit_y + index_h/3);


    //周期图例
    int period_x = arrival_x + 300;
    int period_y = (M+1) * 70;
    QPen pen_dotline(QColor(0,0,0));
    pen_dotline.setStyle(Qt::DotLine);
    pen_dotline.setWidth(2);
    scene->addLine(period_x, period_y, period_x, period_y+40, pen_dotline);

    QGraphicsTextItem *periodText = scene->addText("超周期", QFont("Consolas"));
    periodText->setPos(period_x + 15, period_y - 5);

    //任务迁移图例
/*
    int trans_x = arrival_x +450;
    int trans_y = (M+1) * 70;
    QGraphicsLineItem *trans = scene->addLine(trans_x, trans_y, trans_x,trans_y + index_h, QPen(QBrush(Qt::black), 2));
    QGraphicsPolygonItem *trans_sqr;
    int transLength = 4;
    QVector<QPointF> trans_point;
   trans_point.append(QPointF(trans_x - transLength, trans_y));
    trans_point.append(QPointF(trans_x + transLength, trans_y));
   trans_point.append(QPointF(trans_x + transLength, trans_y - transLength ));
   trans_point.append(QPointF(trans_x - transLength, trans_y - transLength ));
    trans_sqr= scene->addPolygon(trans_point);
    trans_sqr->setPen(QPen(QBrush(Qt::black), 2));

    QGraphicsTextItem *transText = scene->addText("任务", QFont("Consolas"));
   transText->setPos(trans_x + 15, trans_y - 5);
    transText = scene->addText("迁移", QFont("Consolas"));
    transText->setPos(trans_x + 15, trans_y + index_h/3);
   */
    qDebug()<<"before init"<<endl;

    testInit();
}




void MainWindow::on_btn_start_clicked()
{
    ui->btn_start->hide();
    ui->btn_stop->show();
    stop_flag = true;

    while(stop_flag){
        QEventLoop loop;
        QTimer::singleShot(10*simulation_speed, this, SLOT(on_btn_next_clicked()));
        QTimer::singleShot(10*simulation_speed, &loop, SLOT(quit()));
        loop.exec();
    }
}

void MainWindow::on_btn_stop_clicked()
{
    stop_flag = false;
    qDebug()<<"stop"<<endl;
    ui->btn_stop->hide();
    ui->btn_start->show();
}

void MainWindow::on_Slider_speed_valueChanged(int value)
{
    simulation_speed = value;
    qDebug()<<"speed:"<<simulation_speed<<endl;
}











void MainWindow::on_action1cpu_1dsp_triggered()
{
    ui->action1cpu_1dsp->setCheckable(true);
    ui->action1cpu_1dsp->setChecked(true);
    M = 6;
    cluster_num = 1;
    cluster_core_num = 6;
    cpu_num=2;
    dsp_num=4;
    core_utilization = init_core_list_head();

    initLocalCore(1, 1, 0);
    initLocalCore(2, 1 ,0);
    initLocalCore(3, 1, 3);
    initLocalCore(4, 1 ,3);
    initLocalCore(5, 1, 3);
    initLocalCore(6, 1 ,3);
}






void MainWindow::on_heter_taskset_triggered()
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


void MainWindow::on_heter_multicore_triggered()
{
    mode=3;
}


void MainWindow::on_action_2_triggered()
{
    lcm=1;
       wait_for_join = init_task_list_head();
       struct subsection temp;

       memset(temp.part_length,0,sizeof(temp.part_length));           //t1
       memset(temp.part_on_core,0xFF,sizeof(temp.part_length));
       memset(temp.start,0,sizeof(temp.part_length));
       temp.start[0]=1;temp.part_on_core[0]=0;temp.part_length[0]=1;
       temp.start[1]=3;temp.part_on_core[1]=0;temp.part_length[1]=1;
       temp.start[2]=22;temp.part_on_core[2]=0;temp.part_length[2]=1;
       temp.start[3]=24;temp.part_on_core[3]=0;temp.part_length[3]=4;
       ++taskNum;
       initTask(taskID++,temp,30,4);

       memset(temp.part_length,0,sizeof(temp.part_length));              //t2
       memset(temp.part_on_core,0xFF,sizeof(temp.part_length));
       memset(temp.start,0,sizeof(temp.part_length));
       temp.start[0]=2;temp.part_on_core[0]=1;temp.part_length[0]=1;
       temp.start[1]=23;temp.part_on_core[1]=1;temp.part_length[1]=1;
       ++taskNum;
       initTask(taskID++,temp,30,2);

       memset(temp.part_length,0,sizeof(temp.part_length));                  //t3
       memset(temp.part_on_core,0xFF,sizeof(temp.part_length));
       memset(temp.start,0,sizeof(temp.part_length));
       temp.start[0]=4;temp.part_on_core[0]=1;temp.part_length[0]=1;
       temp.start[1]=21;temp.part_on_core[1]=1;temp.part_length[1]=1;
       ++taskNum;
       initTask(taskID++,temp,30,2);

       memset(temp.part_length,0,sizeof(temp.part_length));               //t4
       memset(temp.part_on_core,0xFF,sizeof(temp.part_length));
       memset(temp.start,0,sizeof(temp.part_length));
       temp.start[0]=5;temp.part_on_core[0]=1;temp.part_length[0]=16;
       ++taskNum;
       initTask(taskID++,temp,30,1);

       memset(temp.part_length,0,sizeof(temp.part_length));   //t5
       memset(temp.part_on_core,0xFF,sizeof(temp.part_length));
       memset(temp.start,0,sizeof(temp.part_length));
       temp.start[0]=5;temp.part_on_core[0]=2;temp.part_length[0]=16;
       ++taskNum;
       initTask(taskID++,temp,30,1);

       memset(temp.part_length,0,sizeof(temp.part_length));   //t6
       memset(temp.part_on_core,0xFF,sizeof(temp.part_length));
       memset(temp.start,0,sizeof(temp.part_length));
       temp.start[0]=5;temp.part_on_core[0]=3;temp.part_length[0]=16;
       ++taskNum;
       initTask(taskID++,temp,30,1);

       memset(temp.part_length,0,sizeof(temp.part_length));
       memset(temp.part_on_core,0xFF,sizeof(temp.part_length));  //t7
       memset(temp.start,0,sizeof(temp.part_length));
       temp.start[0]=5;temp.part_on_core[0]=4;temp.part_length[0]=16;
       ++taskNum;
       initTask(taskID++,temp,30,1);

       memset(temp.part_length,0,sizeof(temp.part_length));
       memset(temp.part_on_core,0xFF,sizeof(temp.part_length));
       memset(temp.start,0,sizeof(temp.part_length));                        //t8
       temp.start[0]=5;temp.part_on_core[0]=5;temp.part_length[0]=16;
       ++taskNum;
       initTask(taskID++,temp,30,1);

       memset(temp.part_length,0,sizeof(temp.part_length));
       memset(temp.part_on_core,0xFF,sizeof(temp.part_length));        //t9
       memset(temp.start,0,sizeof(temp.part_length));
       temp.start[0]=5;temp.part_on_core[0]=6;temp.part_length[0]=16;
       ++taskNum;
       initTask(taskID++,temp,30,1);

       memset(temp.part_length,0,sizeof(temp.part_length));
       memset(temp.part_on_core,0xFF,sizeof(temp.part_length));          //t10
       memset(temp.start,0,sizeof(temp.part_length));
       temp.start[0]=5;temp.part_on_core[0]=7;temp.part_length[0]=16;
       ++taskNum;
       initTask(taskID++,temp,30,1);

       memset(temp.part_length,0,sizeof(temp.part_length));           //t11
       memset(temp.part_on_core,0xFF,sizeof(temp.part_length));
       memset(temp.start,0,sizeof(temp.part_length));
       temp.start[0]=5;temp.part_on_core[0]=8;temp.part_length[0]=16;
       ++taskNum;
       initTask(taskID++,temp,30,1);

       for(int i=0; i<max_size; i++) {
               if(seg_taskSets[i].task_period!=0)
               lcm=lcm*seg_taskSets[i].task_period/(__gcd(lcm,seg_taskSets[i].task_period)); //求最小公倍数
           }
       qDebug()<<"lcm is"<<lcm<<endl;
}


void MainWindow::on_action1cpu_8dsp_triggered()
{
    ui->action1cpu_1dsp->setCheckable(true);
    ui->action1cpu_1dsp->setChecked(true);
    M = 9;
    cluster_num = 1;
    cluster_core_num = 9;

    core_utilization = init_core_list_head();
    cpu_num=1;
    dsp_num=8;

    initLocalCore(1, 1, 0);
    initLocalCore(2, 1 ,3);
    initLocalCore(3, 1, 3);
    initLocalCore(4, 1 ,3);
    initLocalCore(5, 1, 3);
    initLocalCore(6, 1 ,3);
    initLocalCore(7, 1, 3);
    initLocalCore(8, 1 ,3);
    initLocalCore(9, 1, 3);
}


void MainWindow::on_addTask_triggered()
{
    addTask a;
    a.exec();
}


void MainWindow::on_addCore_triggered()
{
    addCore a;
    a.exec();
}




void MainWindow::on_action_triggered()
{
    addTask2 a;
    a.exec();
}

