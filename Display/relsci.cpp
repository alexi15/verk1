#include "relsci.h"
#include "ui_relsci.h"

relSci::relSci(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::relSci)
{
    ui->setupUi(this);
}

relSci::~relSci()
{
    delete ui;
}

void relSci::addVec(vector<Computer> comIn, string name)
{
    QString label = QString::fromStdString(name);
    ui->text_sci->setText(label);
    computers = comIn;
    displayComputers();
}

void relSci::displayComputers()
{
    ui->table_computers->clearContents();

    ui->table_computers->setRowCount(computers.size());

    for(unsigned int i = 0; i < computers.size(); i++){
        Computer current = computers[i];

        QString name = QString::fromStdString(current.getName());
        QString buildYear = QString::number(current.getBuildYear());
        QString type = QString::fromStdString(current.getType());
        QString made = QString::fromStdString(current.getMade());
        QString Id = QString::number(current.getID());

        ui->table_computers->setItem(i, 0, new QTableWidgetItem(name));
        ui->table_computers->setItem(i, 1, new QTableWidgetItem(buildYear));
        ui->table_computers->setItem(i, 2, new QTableWidgetItem(type));
        ui->table_computers->setItem(i, 3, new QTableWidgetItem(made));
        ui->table_computers->setItem(i, 4, new QTableWidgetItem(Id));
        ui->table_computers->setColumnHidden(4, true);
    }
}



void relSci::on_pushButton_clicked()
{
    addComToSci add;
    add.exec();

}
