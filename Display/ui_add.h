/********************************************************************************
** Form generated from reading UI file 'add.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_H
#define UI_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Add
{
public:
    QRadioButton *click_scienstist_male;
    QRadioButton *click_scientist_female;
    QLineEdit *Input_Scientist_Firstname;
    QLineEdit *Input_scientist_year_born;
    QLineEdit *input_scientist_yeardied;
    QLineEdit *Input_Scientist_lastname;
    QLabel *Scientist_firstname;
    QLabel *Scientist_lastname;
    QLabel *Scientist_gender;
    QLabel *Scientist_yearborn;
    QLabel *Scienstist_yeardied;
    QPushButton *Add_Scientist;
    QLabel *Error_yearBorn;
    QLabel *Error_yearDied;
    QLabel *Error_Gender;
    QLabel *Error_LastName;
    QLabel *Error_FirstName;

    void setupUi(QDialog *Add)
    {
        if (Add->objectName().isEmpty())
            Add->setObjectName(QStringLiteral("Add"));
        Add->resize(425, 297);
        click_scienstist_male = new QRadioButton(Add);
        click_scienstist_male->setObjectName(QStringLiteral("click_scienstist_male"));
        click_scienstist_male->setGeometry(QRect(260, 90, 95, 20));
        click_scientist_female = new QRadioButton(Add);
        click_scientist_female->setObjectName(QStringLiteral("click_scientist_female"));
        click_scientist_female->setGeometry(QRect(260, 120, 95, 20));
        Input_Scientist_Firstname = new QLineEdit(Add);
        Input_Scientist_Firstname->setObjectName(QStringLiteral("Input_Scientist_Firstname"));
        Input_Scientist_Firstname->setGeometry(QRect(130, 20, 191, 22));
        Input_Scientist_Firstname->setLayoutDirection(Qt::RightToLeft);
        Input_scientist_year_born = new QLineEdit(Add);
        Input_scientist_year_born->setObjectName(QStringLiteral("Input_scientist_year_born"));
        Input_scientist_year_born->setGeometry(QRect(260, 150, 113, 22));
        input_scientist_yeardied = new QLineEdit(Add);
        input_scientist_yeardied->setObjectName(QStringLiteral("input_scientist_yeardied"));
        input_scientist_yeardied->setGeometry(QRect(260, 190, 113, 22));
        Input_Scientist_lastname = new QLineEdit(Add);
        Input_Scientist_lastname->setObjectName(QStringLiteral("Input_Scientist_lastname"));
        Input_Scientist_lastname->setGeometry(QRect(130, 60, 191, 22));
        Scientist_firstname = new QLabel(Add);
        Scientist_firstname->setObjectName(QStringLiteral("Scientist_firstname"));
        Scientist_firstname->setGeometry(QRect(40, 20, 71, 20));
        Scientist_lastname = new QLabel(Add);
        Scientist_lastname->setObjectName(QStringLiteral("Scientist_lastname"));
        Scientist_lastname->setGeometry(QRect(40, 60, 71, 20));
        Scientist_gender = new QLabel(Add);
        Scientist_gender->setObjectName(QStringLiteral("Scientist_gender"));
        Scientist_gender->setGeometry(QRect(190, 100, 71, 20));
        Scientist_yearborn = new QLabel(Add);
        Scientist_yearborn->setObjectName(QStringLiteral("Scientist_yearborn"));
        Scientist_yearborn->setGeometry(QRect(190, 150, 61, 20));
        Scienstist_yeardied = new QLabel(Add);
        Scienstist_yeardied->setObjectName(QStringLiteral("Scienstist_yeardied"));
        Scienstist_yeardied->setGeometry(QRect(190, 190, 61, 20));
        Add_Scientist = new QPushButton(Add);
        Add_Scientist->setObjectName(QStringLiteral("Add_Scientist"));
        Add_Scientist->setGeometry(QRect(80, 240, 221, 28));
        Error_yearBorn = new QLabel(Add);
        Error_yearBorn->setObjectName(QStringLiteral("Error_yearBorn"));
        Error_yearBorn->setGeometry(QRect(90, 150, 91, 21));
        Error_yearDied = new QLabel(Add);
        Error_yearDied->setObjectName(QStringLiteral("Error_yearDied"));
        Error_yearDied->setGeometry(QRect(90, 190, 101, 21));
        Error_Gender = new QLabel(Add);
        Error_Gender->setObjectName(QStringLiteral("Error_Gender"));
        Error_Gender->setGeometry(QRect(90, 100, 91, 21));
        Error_LastName = new QLabel(Add);
        Error_LastName->setObjectName(QStringLiteral("Error_LastName"));
        Error_LastName->setGeometry(QRect(330, 60, 91, 21));
        Error_FirstName = new QLabel(Add);
        Error_FirstName->setObjectName(QStringLiteral("Error_FirstName"));
        Error_FirstName->setGeometry(QRect(330, 20, 91, 21));
        QWidget::setTabOrder(Input_Scientist_Firstname, Input_Scientist_lastname);
        QWidget::setTabOrder(Input_Scientist_lastname, click_scienstist_male);
        QWidget::setTabOrder(click_scienstist_male, click_scientist_female);
        QWidget::setTabOrder(click_scientist_female, Input_scientist_year_born);
        QWidget::setTabOrder(Input_scientist_year_born, input_scientist_yeardied);
        QWidget::setTabOrder(input_scientist_yeardied, Add_Scientist);

        retranslateUi(Add);

        QMetaObject::connectSlotsByName(Add);
    } // setupUi

    void retranslateUi(QDialog *Add)
    {
        Add->setWindowTitle(QApplication::translate("Add", "Add scientist", 0));
        click_scienstist_male->setText(QApplication::translate("Add", "Male", 0));
        click_scientist_female->setText(QApplication::translate("Add", "Female", 0));
        Input_Scientist_Firstname->setText(QString());
        Input_Scientist_Firstname->setPlaceholderText(QApplication::translate("Add", "Please Enter First Name ....", 0));
        Input_scientist_year_born->setPlaceholderText(QApplication::translate("Add", "year born..", 0));
        input_scientist_yeardied->setPlaceholderText(QApplication::translate("Add", "year died..", 0));
        Input_Scientist_lastname->setPlaceholderText(QApplication::translate("Add", "Please enter last name...", 0));
        Scientist_firstname->setText(QApplication::translate("Add", "First Name", 0));
        Scientist_lastname->setText(QApplication::translate("Add", "Last Name", 0));
        Scientist_gender->setText(QApplication::translate("Add", "Gender", 0));
        Scientist_yearborn->setText(QApplication::translate("Add", "Year Born", 0));
        Scienstist_yeardied->setText(QApplication::translate("Add", "Year Died", 0));
        Add_Scientist->setText(QApplication::translate("Add", "Add ", 0));
        Error_yearBorn->setText(QString());
        Error_yearDied->setText(QString());
        Error_Gender->setText(QString());
        Error_LastName->setText(QString());
        Error_FirstName->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Add: public Ui_Add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_H
