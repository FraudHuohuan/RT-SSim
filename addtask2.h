#ifndef ADDTASK2_H
#define ADDTASK2_H

#include <QDialog>

namespace Ui {
class addTask2;
}

class addTask2 : public QDialog
{
    Q_OBJECT

public:
    explicit addTask2(QWidget *parent = nullptr);
    ~addTask2();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::addTask2 *ui;
};

#endif // ADDTASK2_H
