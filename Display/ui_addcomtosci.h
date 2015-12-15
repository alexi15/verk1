/********************************************************************************
** Form generated from reading UI file 'addcomtosci.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCOMTOSCI_H
#define UI_ADDCOMTOSCI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addComToSci
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *table_computers;
    QPushButton *pushButton;

    void setupUi(QDialog *addComToSci)
    {
        if (addComToSci->objectName().isEmpty())
            addComToSci->setObjectName(QStringLiteral("addComToSci"));
        addComToSci->resize(531, 290);
        verticalLayout = new QVBoxLayout(addComToSci);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        table_computers = new QTableWidget(addComToSci);
        if (table_computers->columnCount() < 5)
            table_computers->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_computers->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_computers->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_computers->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_computers->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table_computers->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        table_computers->setObjectName(QStringLiteral("table_computers"));
        table_computers->setSelectionMode(QAbstractItemView::SingleSelection);
        table_computers->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(table_computers);

        pushButton = new QPushButton(addComToSci);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(addComToSci);

        QMetaObject::connectSlotsByName(addComToSci);
    } // setupUi

    void retranslateUi(QDialog *addComToSci)
    {
        addComToSci->setWindowTitle(QApplication::translate("addComToSci", "Dialog", 0));
        QTableWidgetItem *___qtablewidgetitem = table_computers->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("addComToSci", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = table_computers->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("addComToSci", "Build Year", 0));
        QTableWidgetItem *___qtablewidgetitem2 = table_computers->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("addComToSci", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem3 = table_computers->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("addComToSci", "Made", 0));
        pushButton->setText(QApplication::translate("addComToSci", "Confirm", 0));
    } // retranslateUi

};

namespace Ui {
    class addComToSci: public Ui_addComToSci {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCOMTOSCI_H
