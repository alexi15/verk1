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

void relSci::addVec(vector<Computer> comIn, string name, int sciID)
{
    QString label = QString::fromStdString(name);
    ui->text_sci->setText(label);
    computers = comIn;
    clicked_idScientist = sciID;
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
    add.setID(clicked_idScientist);
    add.exec();
    computers = comService.getComputerVec(sciService.getSciRel(clicked_idScientist));
    displayComputers();
}

void relSci::on_push_remove_clicked()
{
    comService.removeRelation(clicked_idComputer, clicked_idScientist);
    computers = comService.getComputerVec(sciService.getSciRel(clicked_idScientist));
    displayComputers();
}

void relSci::on_table_computers_pressed(const QModelIndex &index)
{
    int rowidx = ui->table_computers->selectionModel()->currentIndex().row();
    int id = index.sibling(rowidx, 4).data().toInt();
    clicked_idComputer = id;
}
