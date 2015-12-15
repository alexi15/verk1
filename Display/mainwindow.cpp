#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->table_scientists->setSortingEnabled(false);
    ui->table_computers->setSortingEnabled(false);
    displayAllScientists();
    displayAllComputers();
    ui->table_scientists->setSortingEnabled(true);
    ui->table_computers->setSortingEnabled(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::displayAllScientists()
{
    ui->table_scientists->setSortingEnabled(false);
    vector<Scientist> scientists = sci.getVec();
    displayScientists(scientists);
    ui->table_scientists->setSortingEnabled(true);
}

void MainWindow::displayScientists(vector<Scientist> scientists)
{
    ui->table_scientists->setSortingEnabled(false);

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
     ui->table_scientists->setSortingEnabled(true);
}

void MainWindow::displayAllComputers()
{
    ui->table_computers->setSortingEnabled(false);
    vector<Computer> computers = com.getVec();
    displayComputers(computers);
    ui->table_computers->setSortingEnabled(true);
}

void MainWindow::displayComputers(vector<Computer> computers)
{

    ui->table_computers->setSortingEnabled(false);

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
    ui->table_computers->setSortingEnabled(true);
}


void MainWindow::on_actionComputers_triggered()
{
    displayAllComputers();
}


void MainWindow::on_table_computers_activated(const QModelIndex &index)
{

}

void MainWindow::on_line_filter_sci_textChanged(const QString &arg1)
{
    string input = ui->line_filter_sci->text().toStdString();
    vector<Scientist> found = sci.Search(input);
    displayScientists(found);
}

void MainWindow::on_line_filter_com_textChanged(const QString &arg1)
{
    string input = ui->line_filter_com->text().toStdString();
    vector<Computer> found = com.Search(input);
    displayComputers(found);
}

void MainWindow::on_add_computers_clicked()
{
    addComp computer;
    computer.exec();

    displayComputers(computer.getvec());

}

void MainWindow::on_addScientist_clicked()
{
    Add scientist;
    scientist.exec();

    displayScientists(scientist.getvec());

}

void MainWindow::on_table_scientists_customContextMenuRequested(const QPoint &pos)
{
    QMenu menu;
    menu.addAction(ui->actionRemoveScientist);
    menu.addAction(ui->actionRelationScientist);
    menu.addAction(ui->actionAdd_reltation_scientist);
    menu.exec(ui->table_scientists->viewport()->mapToGlobal(pos));
}

void MainWindow::on_table_computers_clicked(const QModelIndex &index)
{

}

void MainWindow::on_table_computers_customContextMenuRequested(const QPoint &pos)
{
    QMenu menu;

    menu.addAction(ui->actionRemoveComputer);
    menu.addAction(ui->actionRelationComputer);
    menu.addAction(ui->actionAdd_relation_computer);
    menu.exec(ui->table_computers->viewport()->mapToGlobal(pos));


}

void MainWindow::on_table_scientists_pressed(const QModelIndex &index)
{
    int rowidx = ui->table_scientists->selectionModel()->currentIndex().row();
    int id = index.sibling(rowidx, 5).data().toInt();
    clicked_idScientist = id;
}

void MainWindow::on_actionRemoveScientist_triggered()
{
    if (clicked_idScientist > 0)
    {
        int answer = QMessageBox::question(this, "Confirm", "Are you sure?");

        if (answer == QMessageBox::No)
        {
            return;
        }
        else
        {
            sci.Remove(clicked_idScientist);
            ui->statusBar->showMessage("Scientist succesfully removed", 3000);
        }
    }
    displayAllScientists();
}

void MainWindow::on_actionRemoveComputer_triggered()
{
    if (clicked_idScientist > 0)
    {
        int answer = QMessageBox::question(this, "Confirm", "Are you sure?");
        if (answer == QMessageBox::No)
        {
            return;
        }
        else
        {
            com.Remove(clicked_idComputer);
            ui->statusBar->showMessage("Computer succesfully removed!", 3000);
        }
    }
    displayAllComputers();
}

void MainWindow::on_table_computers_pressed(const QModelIndex &index)
{
    int rowidx = ui->table_computers->selectionModel()->currentIndex().row();
    int id = index.sibling(rowidx, 4).data().toInt();
    clicked_idComputer = id;
}



void MainWindow::on_actionRelationScientist_triggered()
{
    vector<Computer> computers = com.getComputerVec(sci.getSciRel(clicked_idScientist));
    Scientist temp = sci.getSci(clicked_idScientist);
    string sciName = temp.getFirstName() + " " + temp.getLastName();
    if(computers.size() > 0)
    {
        relSci rel;
        rel.addVec(computers, sciName, clicked_idScientist);
        rel.exec();
    }
    else
        ui->statusBar->showMessage("There are no relations to this scientist!", 3000);

}

void MainWindow::on_actionRelationComputer_triggered()
{
    vector<Scientist> scientists = sci.getScientistVec(com.getComRel(clicked_idComputer));
    string comName = com.getCom(clicked_idComputer).getName();

    if(scientists.size() > 0)
    {
        relCom rel;
        rel.addVec(scientists, comName, clicked_idComputer);
        rel.exec();
    }
    else
        ui->statusBar->showMessage("There are no relations to this computer", 3000);
}

void MainWindow::on_actionAdd_reltation_scientist_triggered()
{
    addComToSci add;
    add.setID(clicked_idScientist);
    add.exec();
}

void MainWindow::on_actionAdd_relation_computer_triggered()
{
    addSciToCom add;
    add.setID(clicked_idComputer);
    add.exec();
}

void MainWindow::on_actionAdd_Scientist_triggered()
{
    Add scientist;
    scientist.exec();

    displayScientists(scientist.getvec());
}

void MainWindow::on_actionAdd_Computer_triggered()
{
    addComp computer;
    computer.exec();

    displayComputers(computer.getvec());
}
