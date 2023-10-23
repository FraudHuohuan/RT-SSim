#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsTextItem>
#include <QStandardItemModel>

typedef struct task_struct Task;
typedef struct global_domain Cluster;
typedef struct core_domain Core;

#include "include/task.h"
#include "include/core.h"
#include "include/simul.h"
#include "include/control.h"
#include "addcore.h"
#include "addtask.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void init_GUI();

    void testInit();


    void drawStart(Task task, int part,QPen *pen, QBrush *brush);

    void drawExit(Task task,int part, QPen *pen);
void drawTransfer(Task task,int part,QPen *pen);
private slots:
    void on_btn_next_clicked();

    void on_btn_reset_clicked();

    void on_btn_start_clicked();

    void on_btn_stop_clicked();

    void on_Slider_speed_valueChanged(int value);

    void drawPeriod();

    void on_heter_taskset_triggered();

    void on_action1cpu_1dsp_triggered();

    void on_heter_multicore_triggered();

    void on_action_2_triggered();

    void on_action1cpu_8dsp_triggered();

    void on_addTask_triggered();

    void on_addCore_triggered();

    void on_actiontest_triggered();

    void on_action_triggered();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QGraphicsRectItem *rectangle;
    QGraphicsItem *coordinate;
    QGraphicsTextItem *text;
    QStandardItemModel *joined_model;
    QStandardItemModel *wait_model;
    QStandardItemModel *utilization_model;
    QStandardItem *item;
    //int taskNum=0;

    QString tau = QString(0x03C4);  //用于显示task的符号
    QString rho = QString(0x03C1);
    QString header_style;

    bool stop_flag = false;

    QColor color[100];
    QBrush brush[100];
    QPen pen[100];
    QString state[2];
};
#endif // MAINWINDOW_H
