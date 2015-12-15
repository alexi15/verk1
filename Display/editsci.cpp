#include "editsci.h"
#include "ui_editsci.h"

editSci::editSci(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editSci)
{
    ui->setupUi(this);
}

editSci::~editSci()
{
    delete ui;
}

void editSci::set(string str, int id, int row)
{
    toEdit = str;
    inID = id;
    inRow = row;
}

vector<Scientist> editSci::getVec()
{
    return sciServ.getVec();
}



void editSci::on_lineEdit_returnPressed()
{
    QString newText = ui->lineEdit->text();
    string strText = newText.toStdString();
    cout << strText << endl;
    bool success = false;

    if(inRow == 0 && newText.toUInt())
    {
        ui->label->setText("<span style = 'color:#FF0000'> Please enter letters </span>");
        success = true;
    }

    if(inRow == 1 && newText.toUInt())
    {
        ui->label->setText("<span style = 'color:#FF0000'> Please enter letters </span>");
        success = true;
    }

    if(inRow == 2 && strText != "Male" && strText != "male" && strText != "Female" && strText != "female")
    {
        ui->label->setText("<span style = 'color:#FF0000'> Please enter Male or Female </span>");
        success = true;
    }

    if(inRow == 3 && !newText.toUInt())
    {
        ui->label->setText("<span style = 'color:#FF0000'> Please enter numbers </span>");
        success = true;
    }

    if(inRow == 4 && !newText.toUInt())
    {
        ui->label->setText("<span style = 'color:#FF0000'> Please enter numbers </span>");
        success = true;
    }

    if(success)
        return;

    if(sciServ.Edit(strText, inID, inRow))
       this->done(0);
}
