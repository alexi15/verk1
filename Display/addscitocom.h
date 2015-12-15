#ifndef ADDSCITOCOM_H
#define ADDSCITOCOM_H

#include <QDialog>
#include <QMessageBox>
#include <ScientistService.h>
#include <computerservice.h>

namespace Ui {
class addSciToCom;
}

class addSciToCom : public QDialog
{
    Q_OBJECT

public:
    explicit addSciToCom(QWidget *parent = 0);
    void setID(int com);
    ~addSciToCom();

private slots:
    void on_pushButton_clicked();

    void on_table_scientists_pressed(const QModelIndex &index);

private:
    Ui::addSciToCom *ui;
    ScientistService sciService;
    ComputerService comService;
    vector<Scientist> scientists;
    void displayScientists();
    int computerID;
    int scientistID;
};

#endif // ADDSCITOCOM_H
