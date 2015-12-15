#ifndef EDITSCI_H
#define EDITSCI_H

#include <QDialog>
#include <ScientistService.h>

namespace Ui {
class editSci;
}

class editSci : public QDialog
{
    Q_OBJECT

public:
    explicit editSci(QWidget *parent = 0);
    ~editSci();
    void set(string str, int id, int row);
    vector<Scientist> getVec();

private slots:
    void on_lineEdit_returnPressed();

private:
    Ui::editSci *ui;
    ScientistService sciServ;
    string toEdit;
    int inID;
    int inRow;
};

#endif // EDITSCI_H
