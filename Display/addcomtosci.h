#ifndef ADDCOMTOSCI_H
#define ADDCOMTOSCI_H

#include <QDialog>
#include <computerservice.h>

namespace Ui {
class addComToSci;
}

class addComToSci : public QDialog
{
    Q_OBJECT

public:
    explicit addComToSci(QWidget *parent = 0);
    ~addComToSci();

private:
    Ui::addComToSci *ui;
    ComputerService com;
    int clicked_idComputer;
};

#endif // ADDCOMTOSCI_H
