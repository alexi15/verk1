#ifndef RELCOM_H
#define RELCOM_H

#include <QDialog>
#include <ScientistService.h>
#include <addscitocom.h>

namespace Ui {
class relCom;
}

class relCom : public QDialog
{
    Q_OBJECT

public:
    explicit relCom(QWidget *parent = 0);
    ~relCom();
    void addVec(vector<Scientist> scientists, string name);

private slots:
    void on_pushButton_clicked();

private:
    Ui::relCom *ui;
    vector<Scientist> scientists;
    void displayScientists();
    string comName;
};

#endif // RELCOM_H
