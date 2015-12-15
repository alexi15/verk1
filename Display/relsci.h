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
    void addVec(vector<Computer> comIn,string name);

private slots:

    void on_pushButton_clicked();

private:
    Ui::relSci *ui;
    vector<Computer> computers;
    void displayComputers();
    ComputerService addRelation;
};

#endif // RELSCI_H
