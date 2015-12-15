/********************************************************************************
** Form generated from reading UI file 'addscitocom.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSCITOCOM_H
#define UI_ADDSCITOCOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_addSciToCom
{
public:
    QHBoxLayout *horizontalLayout;
    QTableWidget *table_scientists;

    void setupUi(QDialog *addSciToCom)
    {
        if (addSciToCom->objectName().isEmpty())
            addSciToCom->setObjectName(QStringLiteral("addSciToCom"));
        addSciToCom->resize(685, 341);
        horizontalLayout = new QHBoxLayout(addSciToCom);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        table_scientists = new QTableWidget(addSciToCom);
        if (table_scientists->columnCount() < 6)
            table_scientists->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_scientists->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_scientists->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_scientists->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_scientists->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table_scientists->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table_scientists->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        table_scientists->setObjectName(QStringLiteral("table_scientists"));

        horizontalLayout->addWidget(table_scientists);


        retranslateUi(addSciToCom);

        QMetaObject::connectSlotsByName(addSciToCom);
    } // setupUi

    void retranslateUi(QDialog *addSciToCom)
    {
        addSciToCom->setWindowTitle(QApplication::translate("addSciToCom", "Dialog", 0));
        QTableWidgetItem *___qtablewidgetitem = table_scientists->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("addSciToCom", "First Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = table_scientists->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("addSciToCom", "Last Name", 0));
        QTableWidgetItem *___qtablewidgetitem2 = table_scientists->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("addSciToCom", "Gender", 0));
        QTableWidgetItem *___qtablewidgetitem3 = table_scientists->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("addSciToCom", "Year Born", 0));
        QTableWidgetItem *___qtablewidgetitem4 = table_scientists->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("addSciToCom", "Year Dead", 0));
    } // retranslateUi

};

namespace Ui {
    class addSciToCom: public Ui_addSciToCom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSCITOCOM_H
