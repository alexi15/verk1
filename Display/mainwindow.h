#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <vector>
#include <string>
#include "Scientist.h"
#include "ScientistService.h"
#include "computerservice.h"
#include "computers.h"

#include <QMainWindow>

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_table_scientists_clicked(const QModelIndex &index);
    void on_actionComputers_triggered();

    void on_actionScientists_triggered();

    void on_tableWidget_activated(const QModelIndex &index);

    void on_table_computers_activated(const QModelIndex &index);

    void on_tabScientists_tabBarClicked(int index);

private:
    ScientistService sci;
    ComputerService com;

    void displayAllScientists();
    void displayScientists(vector<Scientist> scientists);
    void displayAllComputers();
    void displayComputers(vector<Computer> computers);

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
