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
    if (on_click_scienstist_male_clicked())
        Gender = "Male";
    else if (on_click_scientist_female_clicked())
        Gender = "Female";
    QString Lastname = ui->Input_Scientist_lastname->text();
    QString yearBorn = ui->Input_scientist_year_born->text();
    QString yearDied = ui->input_scientist_yeardied->text();
    bool Error = false;



    if(Firstname.isEmpty())
    {
        ui->Error_FirstName->setText("<span style ='color:#FF0000'>Enter name</span>");
        Error = true;
    }
    if(Lastname.isEmpty())
    {
        ui->Error_LastName->setText("<span style ='color:#FF0000'>Enter lastname</span>");
        Error = true;
    }
    if(Gender == "")
    {
        ui->Error_Gender->setText("<span style ='color:#FF0000'>Choose one</span>");
        Error = true;
    }
    if(yearBorn.isEmpty())
    {
        ui->Error_yearBorn->setText("<span style ='color:#FF0000'>Enter year born</span>");
        Error = true;
    }
    else if (!yearBorn.toUInt())
    {
        ui->Error_yearBorn->setText("<span style ='color:#FF0000'>Enter integers</span>");
        Error = true;
    }
    if(yearDied.isEmpty())
    {
        yearDied = "0";
    }
    else if (!yearDied.toUInt())
    {
        ui->Error_yearDied->setText("<span style ='color:#FF0000'>Enter integers</span>");
        Error = true;
    }

    if (Error)
    {
        return;
    }

    int answer = QMessageBox::question(this, "Confirm", "Are you sure?");
    if(answer == QMessageBox::No)
    {
        this->done(-1);
        return;
    }

    bool success = addScientist.add(Scientist(Firstname.toStdString(),Lastname.toStdString(),Gender.toStdString(),yearBorn.toInt(),yearDied.toInt()));

    if(success)
    {
        this->done(0);
    }
    else
        this->done(-1);

}
