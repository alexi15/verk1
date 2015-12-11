#include "addsci.h"
#include "ui_addsci.h"

addSci::addSci(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addSci)
{
    ui->setupUi(this);
}

addSci::~addSci()
{
    delete ui;
}
