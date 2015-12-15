#ifndef RELSCI_H
#define RELSCI_H

#include <QDialog>
#include <computerservice.h>
#include <addcomtosci.h>


namespace Ui {
class relSci;
}

class relSci : public QDialog
{
    Q_OBJECT

public:
    explicit relSci(QWidget *parent = 0);
    ~relSci();
    void addVec(vector<Computer> comIn, string name, int sciID);

private slots:

    void on_pushButton_clicked();

    void on_push_remove_clicked();

    void on_table_computers_pressed(const QModelIndex &index);

private:
    Ui::relSci *ui;
    vector<Computer> computers;
    void displayComputers();
    ScientistService sciService;
    ComputerService comService;
    int clicked_idComputer;
    int clicked_idScientist;
};

#endif // RELSCI_H
