#include "addcomtosci.h"
#include "ui_addcomtosci.h"

addComToSci::addComToSci(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addComToSci)
{
    ui->setupUi(this);

    computers = comService.getVec();

    displayComputers();
}

addComToSci::~addComToSci()
{
    delete ui;
}

void addComToSci::setID(int sci)
{
    scientistID = sci;
}

void addComToSci::displayComputers()
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

void addComToSci::on_pushButton_clicked()
{
    bool success = comService.addRelations(computerID, scientistID);
    if(success)
        this->done(0);
    else cout << scientistID << endl << computerID << endl;
}

void addComToSci::on_table_computers_pressed(const QModelIndex &index)
{
    int rowidx = ui->table_computers->selectionModel()->currentIndex().row();
    int id = index.sibling(rowidx, 4).data().toInt();
    computerID = id;
}
