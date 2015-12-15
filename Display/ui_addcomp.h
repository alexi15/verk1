/********************************************************************************
** Form generated from reading UI file 'addcomp.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCOMP_H
#define UI_ADDCOMP_H

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

class Ui_addComp
{
public:
    QLabel *Computer_made;
    QRadioButton *click_computer_yes;
    QLineEdit *Input_Computer_Type;
    QLabel *Computer_Buildyear;
    QPushButton *Add_Computer;
    QLineEdit *Input_Computer_Build_Year;
    QLineEdit *Input_Computer_Name;
    QLabel *Computer_name;
    QRadioButton *click_computer_no;
    QLabel *Computer_Type;
    QLabel *Error_Name_empty;
    QLabel *Error_Type_empty;
    QLabel *Error_Made_Not_set;
    QLabel *Error_Build_Year_empty;
    QLabel *Error_Build_Year_int;

    void setupUi(QDialog *addComp)
    {
        if (addComp->objectName().isEmpty())
            addComp->setObjectName(QStringLiteral("addComp"));
        addComp->resize(395, 252);
        Computer_made = new QLabel(addComp);
        Computer_made->setObjectName(QStringLiteral("Computer_made"));
        Computer_made->setGeometry(QRect(210, 110, 41, 31));
        click_computer_yes = new QRadioButton(addComp);
        click_computer_yes->setObjectName(QStringLiteral("click_computer_yes"));
        click_computer_yes->setGeometry(QRect(260, 100, 95, 20));
        Input_Computer_Type = new QLineEdit(addComp);
        Input_Computer_Type->setObjectName(QStringLiteral("Input_Computer_Type"));
        Input_Computer_Type->setGeometry(QRect(140, 70, 191, 22));
        Computer_Buildyear = new QLabel(addComp);
        Computer_Buildyear->setObjectName(QStringLiteral("Computer_Buildyear"));
        Computer_Buildyear->setGeometry(QRect(150, 160, 61, 20));
        Add_Computer = new QPushButton(addComp);
        Add_Computer->setObjectName(QStringLiteral("Add_Computer"));
        Add_Computer->setGeometry(QRect(90, 200, 221, 28));
        Input_Computer_Build_Year = new QLineEdit(addComp);
        Input_Computer_Build_Year->setObjectName(QStringLiteral("Input_Computer_Build_Year"));
        Input_Computer_Build_Year->setGeometry(QRect(220, 160, 113, 22));
        Input_Computer_Name = new QLineEdit(addComp);
        Input_Computer_Name->setObjectName(QStringLiteral("Input_Computer_Name"));
        Input_Computer_Name->setGeometry(QRect(140, 30, 191, 22));
        Input_Computer_Name->setLayoutDirection(Qt::RightToLeft);
        Computer_name = new QLabel(addComp);
        Computer_name->setObjectName(QStringLiteral("Computer_name"));
        Computer_name->setGeometry(QRect(100, 30, 41, 20));
        click_computer_no = new QRadioButton(addComp);
        click_computer_no->setObjectName(QStringLiteral("click_computer_no"));
        click_computer_no->setGeometry(QRect(260, 130, 95, 20));
        Computer_Type = new QLabel(addComp);
        Computer_Type->setObjectName(QStringLiteral("Computer_Type"));
        Computer_Type->setGeometry(QRect(100, 70, 41, 20));
        Error_Name_empty = new QLabel(addComp);
        Error_Name_empty->setObjectName(QStringLiteral("Error_Name_empty"));
        Error_Name_empty->setGeometry(QRect(10, 30, 81, 21));
        Error_Type_empty = new QLabel(addComp);
        Error_Type_empty->setObjectName(QStringLiteral("Error_Type_empty"));
        Error_Type_empty->setGeometry(QRect(10, 70, 81, 21));
        Error_Made_Not_set = new QLabel(addComp);
        Error_Made_Not_set->setObjectName(QStringLiteral("Error_Made_Not_set"));
        Error_Made_Not_set->setGeometry(QRect(74, 120, 121, 20));
        Error_Build_Year_empty = new QLabel(addComp);
        Error_Build_Year_empty->setObjectName(QStringLiteral("Error_Build_Year_empty"));
        Error_Build_Year_empty->setGeometry(QRect(24, 160, 121, 21));
        Error_Build_Year_int = new QLabel(addComp);
        Error_Build_Year_int->setObjectName(QStringLiteral("Error_Build_Year_int"));
        Error_Build_Year_int->setGeometry(QRect(20, 160, 131, 21));
        QWidget::setTabOrder(Input_Computer_Name, Input_Computer_Type);
        QWidget::setTabOrder(Input_Computer_Type, click_computer_yes);
        QWidget::setTabOrder(click_computer_yes, click_computer_no);
        QWidget::setTabOrder(click_computer_no, Input_Computer_Build_Year);
        QWidget::setTabOrder(Input_Computer_Build_Year, Add_Computer);

        retranslateUi(addComp);

        QMetaObject::connectSlotsByName(addComp);
    } // setupUi

    void retranslateUi(QDialog *addComp)
    {
        addComp->setWindowTitle(QApplication::translate("addComp", "Dialog", 0));
        Computer_made->setText(QApplication::translate("addComp", "Made", 0));
        click_computer_yes->setText(QApplication::translate("addComp", "Yes", 0));
        Input_Computer_Type->setPlaceholderText(QApplication::translate("addComp", "Please enter computer type...", 0));
        Computer_Buildyear->setText(QApplication::translate("addComp", "Build Year", 0));
        Add_Computer->setText(QApplication::translate("addComp", "Add ", 0));
        Input_Computer_Build_Year->setPlaceholderText(QApplication::translate("addComp", "Build Year..", 0));
        Input_Computer_Name->setText(QString());
        Input_Computer_Name->setPlaceholderText(QApplication::translate("addComp", "Please Enter Name ....", 0));
        Computer_name->setText(QApplication::translate("addComp", "Name", 0));
        click_computer_no->setText(QApplication::translate("addComp", "No", 0));
        Computer_Type->setText(QApplication::translate("addComp", "Type", 0));
        Error_Name_empty->setText(QString());
        Error_Type_empty->setText(QString());
        Error_Made_Not_set->setText(QString());
        Error_Build_Year_empty->setText(QString());
        Error_Build_Year_int->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class addComp: public Ui_addComp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCOMP_H
