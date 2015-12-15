#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <vector>
#include <string>
#include "Scientist.h"
#include "ScientistService.h"
#include "computerservice.h"
#include "computers.h"
#include "add.h"
#include "addcomp.h"
#include "relsci.h"
#include "relcom.h"

#include <QDebug>
#include <QMenu>
#include <QMessageBox>

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
    void on_table_scientists_customContextMenuRequested(const QPoint &pos);

    void on_actionComputers_triggered();

    void on_table_computers_activated(const QModelIndex &index);

    void on_line_filter_sci_textChanged(const QString &arg1);

    void on_line_filter_com_textChanged(const QString &arg1);

    void on_add_computers_clicked();

    void on_addScientist_clicked();

    void on_table_computers_clicked(const QModelIndex &index);

    void on_table_computers_customContextMenuRequested(const QPoint &pos);

    void on_table_scientists_pressed(const QModelIndex &index);

    void on_actionRemoveScientist_triggered();

    void on_actionRemoveComputer_triggered();

    void on_table_computers_pressed(const QModelIndex &index);

    void on_actionRelationScientist_triggered();

    void on_actionRelationComputer_triggered();


private:
    ScientistService sci;
    ComputerService com;
    int clicked_idComputer;
    int clicked_idScientist;
    void displayAllScientists();
    void displayScientists(vector<Scientist> scientists);
    void displayAllComputers();
    void displayComputers(vector<Computer> computers);

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
