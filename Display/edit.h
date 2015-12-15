#ifndef EDIT_H
#define EDIT_H

#include <QDialog>
#include <computerservice.h>

namespace Ui {
class edit;
}

class edit : public QDialog
{
    Q_OBJECT

public:
    explicit edit(QWidget *parent = 0);
    ~edit();
    void set(string str, int id, int row);
    vector<Computer> getVec();

private slots:
    void on_lineEdit_returnPressed();

private:
    Ui::edit *ui;
    ComputerService comServ;
    string toEdit;
    int inID;
    int inRow;
};

#endif // EDIT_H
