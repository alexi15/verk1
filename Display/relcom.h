#ifndef RELCOM_H
#define RELCOM_H

#include <QDialog>
#include <ScientistService.h>
#include <addscitocom.h>

namespace Ui {
class relCom;
}

class relCom : public QDialog
{
    Q_OBJECT

public:
    explicit relCom(QWidget *parent = 0);
    ~relCom();
    void addVec(vector<Scientist> scientists, string name, int comID);

private slots:
    void on_pushButton_clicked();


    void on_table_scientists_pressed(const QModelIndex &index);

    void on_pushButton_2_clicked();

private:
    Ui::relCom *ui;
    vector<Scientist> scientists;
    ScientistService sciService;
    ComputerService comService;
    void displayScientists();
    int clicked_idComputer;
    int clicked_idScientist;
};

#endif // RELCOM_H
