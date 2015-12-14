#ifndef RELSCI_H
#define RELSCI_H

#include <QDialog>
#include <computers.h>

namespace Ui {
class relSci;
}

class relSci : public QDialog
{
    Q_OBJECT

public:
    explicit relSci(QWidget *parent = 0);
    ~relSci();
    void addVec(vector<Computer> comIn);

private:
    Ui::relSci *ui;
    vector<Computer> computers;
    void displayComputers();
};

#endif // RELSCI_H
