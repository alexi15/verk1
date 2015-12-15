#ifndef ADD_H
#define ADD_H

#include <QDialog>
#include <QMessageBox>
#include "ScientistService.h"
#include "Scientist.h"

namespace Ui {
class Add;
}

class Add : public QDialog
{
    Q_OBJECT

public:
    explicit Add(QWidget *parent = 0);
    ~Add();
    vector<Scientist>getvec();

private slots:
    bool on_click_scienstist_male_clicked();
    bool on_click_scientist_female_clicked();
    void on_Add_Scientist_clicked();
private:
    ScientistService addScientist;
    Ui::Add *ui;
};

#endif // ADD_H
