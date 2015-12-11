#ifndef ADDSCI_H
#define ADDSCI_H

#include <QDialog>

namespace Ui {
class addSci;
}

class addSci : public QDialog
{
    Q_OBJECT

public:
    explicit addSci(QWidget *parent = 0);
    ~addSci();

private:
    Ui::addSci *ui;
};

#endif // ADDSCI_H
