#ifndef ADDCOMP_H
#define ADDCOMP_H
#include "computers.h"
#include "computerservice.h"

#include <QDialog>

namespace Ui {
class addComp;
}

class addComp : public QDialog
{
    Q_OBJECT

public:
    explicit addComp(QWidget *parent = 0);
    ~addComp();
    vector<Computer>getvec();

private slots:

    bool on_click_computer_yes_clicked();

    void on_Add_Computer_clicked();

    bool on_click_computer_no_clicked();

private:
    ComputerService addComputer;
    Ui::addComp *ui;
};

#endif // ADDCOMP_H
