#include "edit.h"
#include "ui_edit.h"

edit::edit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit)
{
    ui->setupUi(this);
}

edit::~edit()
{
    delete ui;
}

void edit::set(string str, int id, int row)
{
    toEdit = str;
    inID = id;
    inRow = row;
}

vector<Computer> edit::getVec()
{
    return comServ.getVec();
}


void edit::on_lineEdit_returnPressed()
{
    QString newText = ui->lineEdit->text();
    string strText = newText.toStdString();
    cout << strText << endl;
    bool success = false;
    if(inRow == 0 && newText.toUInt())
    {
        ui->error_edit->setText("<span style = 'color:#FF0000'> Please enter letters </span>");
        success = true;
    }

    if(inRow == 1 && !newText.toUInt())
    {
        ui->error_edit->setText("<span style = 'color:#FF0000'> Please enter numbers </span>");
        success = true;
    }

    if(inRow == 2 && newText.toUInt())
    {
        ui->error_edit->setText("<span style = 'color:#FF0000'> Please enter letters </span>");
        success = true;
    }

    if(inRow == 3 && strText != "Yes" && strText != "yes" && strText != "no" && strText != "No")
    {
        ui->error_edit->setText("<span style = 'color:#FF0000'> Please enter Yes or No </span>");
        success = true;
    }

    if(success)
        return;

    if(comServ.Edit(strText, inID, inRow))
       this->done(0);
}
