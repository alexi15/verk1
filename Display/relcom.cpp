#include "relcom.h"
#include "ui_relcom.h"

relCom::relCom(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::relCom)
{
    ui->setupUi(this);
}

relCom::~relCom()
{
    delete ui;
}


void relCom::addVec(vector<Scientist> sciIn, string name, int comID)
{
    QString label = QString::fromStdString(name);
    ui->text_com->setText(label);
    scientists = sciIn;
    clicked_idComputer = comID;
    displayScientists();
}


void relCom::displayScientists()
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


void relCom::on_pushButton_clicked()
{
    addSciToCom add;
    add.setID(clicked_idComputer);
    add.exec();
    scientists = sciService.getScientistVec(comService.getComRel(clicked_idComputer));
    displayScientists();
}


void relCom::on_table_scientists_pressed(const QModelIndex &index)
{
    int rowidx = ui->table_scientists->selectionModel()->currentIndex().row();
    int id = index.sibling(rowidx, 5).data().toInt();
    clicked_idScientist = id;
}

void relCom::on_pushButton_2_clicked()
{
    comService.removeRelation(clicked_idComputer, clicked_idScientist);
    scientists = sciService.getScientistVec(comService.getComRel(clicked_idComputer));
    displayScientists();
}
