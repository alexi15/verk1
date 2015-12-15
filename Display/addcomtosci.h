#ifndef ADDCOMTOSCI_H
#define ADDCOMTOSCI_H

#include <QDialog>
#include <mainwindow.h>

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
};

#endif // ADDCOMTOSCI_H
