#ifndef ADDTASK_H
#define ADDTASK_H

#include <QDialog>
#include "include/task.h"

namespace Ui {
class addTask;
}

class addTask : public QDialog
{
    Q_OBJECT

public:
    explicit addTask(QWidget *parent = nullptr);
    ~addTask();
    int get_sections();
    int get_task_id();
    int get_start_time();
    int get_wcet();
    int get_section_number();
    int get_section_core();
    int get_period();


private slots:
    void on_Add_clicked();

    void on_Delete_clicked();

    void on_Create_clicked();

    void on_Submit_clicked();

    void on_groupBox_clicked();

private:
    Ui::addTask *ui;
    bool taskid[500];
    struct subsection tasknow;
};

#endif // ADDTASK_H
