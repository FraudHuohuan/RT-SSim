#ifndef ADDCORE_H
#define ADDCORE_H

#include <QDialog>
#include "include/core.h"

namespace Ui {
class addCore;
}

class addCore : public QDialog
{
    Q_OBJECT

public:
    explicit addCore(QWidget *parent = nullptr);
    ~addCore();
    int get_type_id();
    int get_core_number();

private slots:
    void on_Add_clicked();
    void on_Delete_clicked();

private:
    Ui::addCore *ui;
};

#endif // ADDCORE_H
