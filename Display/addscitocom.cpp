#include "addscitocom.h"
#include "ui_addscitocom.h"

addSciToCom::addSciToCom(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addSciToCom)
{
    ui->setupUi(this);

    scientists = sciService.getVec();

    displayScientists();
}

void addSciToCom::setID(int com)
{
    computerID = com;
}

addSciToCom::~addSciToCom()
{
    delete ui;
}

void addSciToCom::displayScientists()
{
    ui->table_scientists->clearContents();

    ui->table_scientists->setRowCount(scientists.size());

    for(unsigned int i = 0; i < scientists.size(); i++){
        Scientist current = scientists[i];

        QString firstName = QString::fromStdString(current.getFirstName());
        QString lastName = QString::fromStdString(current.getLastName());
        QString gender = QString::fromStdString(current.getSex());
        QString yearBorn = QString::number(current.getYearBorn());
        QString yearDied = QString::number(current.getYearDead());
        QString id = QString::number(current.getID());

        ui->table_scientists->setItem(i, 0, new QTableWidgetItem(firstName));
        ui->table_scientists->setItem(i, 1, new QTableWidgetItem(lastName));
        ui->table_scientists->setItem(i, 2, new QTableWidgetItem(gender));
        ui->table_scientists->setItem(i, 3, new QTableWidgetItem(yearBorn));
        ui->table_scientists->setItem(i, 4, new QTableWidgetItem(yearDied));
        ui->table_scientists->setItem(i, 5, new QTableWidgetItem(id));
        ui->table_scientists->setColumnHidden(5, true);
    }
}

void addSciToCom::on_pushButton_clicked()
{
    bool success = comService.addRelations(computerID, scientistID);
    if(success)
        this->done(0);
}

void addSciToCom::on_table_scientists_pressed(const QModelIndex &index)
{
    int rowidx = ui->table_scientists->selectionModel()->currentIndex().row();
    int id = index.sibling(rowidx, 5).data().toInt();
    scientistID = id;
}
