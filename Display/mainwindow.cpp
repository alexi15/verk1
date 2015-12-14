#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    displayAllScientists();
    displayAllComputers();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::displayAllScientists()
{
    vector<Scientist> scientists = sci.getVec();
    displayScientists(scientists);
}

void MainWindow::displayScientists(vector<Scientist> scientists)
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

void MainWindow::displayAllComputers()
{
    vector<Computer> computers = com.getVec();
    displayComputers(computers);
}

void MainWindow::displayComputers(vector<Computer> computers)
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

void MainWindow::on_table_scientists_clicked(const QModelIndex &index)
{



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
     sci.Remove(clicked_idScientist);
    displayAllScientists();
}

void MainWindow::on_actionRemoveComputer_triggered()
{
    if (clicked_idComputer > 0)
     com.Remove(clicked_idComputer);
    displayAllComputers();
}

void MainWindow::on_table_computers_pressed(const QModelIndex &index)
{
    int rowidx = ui->table_computers->selectionModel()->currentIndex().row();
    int id = index.sibling(rowidx, 4).data().toInt();
    clicked_idComputer = id;
}




void MainWindow::on_table_scientists_cellDoubleClicked(int row, int column)
{

}


void MainWindow::on_actionRelationScientist_triggered()
{
    vector<Computer> computers = com.getComputerVec(sci.getSciRel(clicked_idScientist));
    if(computers.size() > 0)
    {
        relSci rel;
        rel.addVec(computers);
        rel.exec();
    }
    else
        ui->statusBar->showMessage("There are no relations to this scientist", 3000);

}

void MainWindow::on_actionRelationComputer_triggered()
{
    vector<Scientist> scientists = sci.getScientistVec(com.getComRel(clicked_idComputer));
    if(scientists.size() > 0)
    {
        relCom rel;
        rel.addVec(scientists);
        rel.exec();
    }
    else
        ui->statusBar->showMessage("There are no relations to this computer", 3000);
}
