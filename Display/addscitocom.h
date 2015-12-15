#ifndef ADDSCITOCOM_H
#define ADDSCITOCOM_H

#include <QDialog>
#include <ScientistService.h>

namespace Ui {
class addSciToCom;
}

class addSciToCom : public QDialog
{
    Q_OBJECT

public:
    explicit addSciToCom(QWidget *parent = 0);
    ~addSciToCom();

private:
    Ui::addSciToCom *ui;
    ScientistService sciService;
    int clicked_idScientist;
    vector<Scientist> scientists;
    void displayScientists();
};

#endif // ADDSCITOCOM_H
