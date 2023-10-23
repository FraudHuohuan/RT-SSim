#ifndef addDAG_H
#define addDAG_H

#include <QDialog>

namespace Ui {
class addDAG;
}

class addDAG : public QDialog
{
    Q_OBJECT

public:
    explicit addDAG(QWidget *parent = nullptr);
    ~addDAG();

private:
    Ui::addDAG *ui;
};

#endif // addDAG_H
