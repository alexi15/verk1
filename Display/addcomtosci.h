#ifndef ADDCOMTOSCI_H
#define ADDCOMTOSCI_H

#include <QDialog>
#include <computerservice.h>
#include <ScientistService.h>

namespace Ui {
class addComToSci;
}

class addComToSci : public QDialog
{
    Q_OBJECT

public:
    explicit addComToSci(QWidget *parent = 0);
    ~addComToSci();
    void setID(int sci);

private slots:
    void on_pushButton_clicked();

    void on_table_computers_pressed(const QModelIndex &index);

private:
    Ui::addComToSci *ui;
    ScientistService sciService;
    ComputerService comService;
    void displayComputers();
    vector<Computer> computers;
    int computerID;
    int scientistID;
};

#endif // ADDCOMTOSCI_H
