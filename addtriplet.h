#ifndef ADDTRIPLET_H
#define ADDTRIPLET_H

#include <QDialog>

namespace Ui {
class addTriplet;
}

class addTriplet : public QDialog
{
    Q_OBJECT

public:
    explicit addTriplet(QWidget *parent = nullptr);
    ~addTriplet();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addTriplet *ui;
};

#endif // ADDTRIPLET_H
