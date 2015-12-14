#ifndef RELCOM_H
#define RELCOM_H

#include <QDialog>
#include <Scientist.h>

namespace Ui {
class relCom;
}

class relCom : public QDialog
{
    Q_OBJECT

public:
    explicit relCom(QWidget *parent = 0);
    ~relCom();
    void addVec(vector<Scientist> scientists);

private:
    Ui::relCom *ui;
    vector<Scientist> scientists;
    void displayScientists();
};

#endif // RELCOM_H
