#include "addcomp.h"
#include "ui_addcomp.h"

addComp::addComp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addComp)
{
    ui->setupUi(this);
}

addComp::~addComp()
{
    delete ui;
}



bool addComp::on_click_computer_yes_clicked()
{
    if (ui->click_computer_yes->isChecked())
        return true;
    return false;
}
bool addComp::on_click_computer_no_clicked()
{
    if (ui->click_computer_no->isChecked())
        return true;
    return false;
}

void addComp::on_Add_Computer_clicked()
{

    QString Name = ui->Input_Computer_Name->text();
    QString Made = "";
    if (on_click_computer_yes_clicked())
        Made = "Yes";
    else if (on_click_computer_no_clicked())
        Made = "No";
    QString Type = ui->Input_Computer_Type->text();
    QString BuildYear = ui->Input_Computer_Build_Year->text();
    bool Error = false;

    if(Name.isEmpty())
    {
        ui->Error_Name_empty->setText("<span style ='color:#FF0000'>Enter name</span>");
        Error = true;
    }
    if(Type.isEmpty())
    {
        ui->Error_Type_empty->setText("<span style ='color:#FF0000'>Enter type </span>");
        Error = true;
    }
    if (Made == "")
    {
        ui->Error_Made_Not_set->setText("<span style ='color:#FF0000'>Choose yes or no </span>");
        Error = true;
    }
    if (BuildYear.isEmpty())
    {
        ui->Error_Build_Year_empty->setText("<span style ='color:#FF0000'>Enter build year </span>");
        Error = true;
    }
    else if (!BuildYear.toUInt())
    {
        ui->Error_Build_Year_empty->setText("<span style ='color:#FF0000'>Enter integers</span>");
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

    bool success = addComputer.add(Computer(Name.toStdString(),BuildYear.toUInt(),Type.toStdString(),Made.toStdString()));

    if(success && QMessageBox::Yes)
    {

        this->done(0);
    }
    else
        this->done(-1);
}

vector<Computer>addComp::getvec()
{
    return addComputer.getVec();
}


