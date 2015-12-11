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


        ui->table_scientists->setItem(i, 0, new QTableWidgetItem(firstName));
        ui->table_scientists->setItem(i, 1, new QTableWidgetItem(lastName));
        ui->table_scientists->setItem(i, 2, new QTableWidgetItem(gender));
        ui->table_scientists->setItem(i, 3, new QTableWidgetItem(yearBorn));
        ui->table_scientists->setItem(i, 4, new QTableWidgetItem(yearDied));
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


        ui->table_computers->setItem(i, 0, new QTableWidgetItem(name));
        ui->table_computers->setItem(i, 1, new QTableWidgetItem(buildYear));
        ui->table_computers->setItem(i, 2, new QTableWidgetItem(type));
        ui->table_computers->setItem(i, 3, new QTableWidgetItem(made));
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

void MainWindow::on_tabScientists_tabBarClicked(int index)
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

