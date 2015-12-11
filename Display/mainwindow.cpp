#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    displayScientists();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::displayAllScientists()
{
    vector<Scientist> scientists = sci.getVec();
    displayScientists();
}

void MainWindow::displayScientists()
{
    ui->table_scientists->clearContents();

    ui->table_scientists->setRowCount(10);

    for(unsigned int i = 0; i < 9; i++){
        //Scientist current = scientists[i];

        QString name = QString::fromStdString(sci.getFirstName());
        QString disp = QString::fromStdString("current.getFirstName()");

        ui->table_scientists->setItem(i, 0, new QTableWidgetItem(disp));
    }
}

void MainWindow::on_table_scientists_clicked(const QModelIndex &index)
{

}
