#include "add.h"
#include "ui_add.h"

Add::Add(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add)
{
    ui->setupUi(this);
}

Add::~Add()
{
    delete ui;
}

bool Add::on_click_scienstist_male_clicked()
{
    if (ui->click_scienstist_male->isChecked())
        return true;
    return false;
}


bool Add::on_click_scientist_female_clicked()
{
    if (ui->click_scientist_female->isChecked())
        return true;
    return false;
}

vector<Scientist>Add:: getvec()
{
    return addScientist.getVec();
}


void Add::on_Add_Scientist_clicked()
{
    QString Firstname = ui->Input_Scientist_Firstname->text();
    QString Gender = "";
    QString Lastname = ui->Input_Scientist_lastname->text();
    QString yearBorn = ui->Input_scientist_year_born->text();
    QString yearDied = ui->input_scientist_yeardied->text();

    if (on_click_scienstist_male_clicked())
        Gender = "Male";
    else if (on_click_scientist_female_clicked())
        Gender = "Female";




    bool success = addScientist.add(Scientist(Firstname.toStdString(),Lastname.toStdString(),Gender.toStdString(),yearBorn.toInt(),yearDied.toInt()));

    if(success)
    {
        ui->Input_Scientist_Firstname->setText("");
        ui->Input_Scientist_lastname->setText("");
        ui->input_scientist_yeardied->setText("");
        ui->Input_scientist_year_born->setText("");
        this->done(0);
    }
        this->done(-1);
}
