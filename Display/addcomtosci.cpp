#include "addcomtosci.h"
#include "ui_addcomtosci.h"

addComToSci::addComToSci(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addComToSci)
{
    ui->setupUi(this);
}

addComToSci::~addComToSci()
{
    delete ui;
}

