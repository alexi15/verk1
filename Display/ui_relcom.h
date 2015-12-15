/********************************************************************************
** Form generated from reading UI file 'relcom.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RELCOM_H
#define UI_RELCOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_relCom
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *text_com;
    QTableWidget *table_scientists;

    void setupUi(QDialog *relCom)
    {
        if (relCom->objectName().isEmpty())
            relCom->setObjectName(QStringLiteral("relCom"));
        relCom->resize(729, 151);
        verticalLayout = new QVBoxLayout(relCom);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        text_com = new QTextBrowser(relCom);
        text_com->setObjectName(QStringLiteral("text_com"));
        text_com->setMaximumSize(QSize(16777215, 31));
        QFont font;
        font.setPointSize(10);
        text_com->setFont(font);

        verticalLayout->addWidget(text_com);

        table_scientists = new QTableWidget(relCom);
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

        verticalLayout->addWidget(table_scientists);


        retranslateUi(relCom);

        QMetaObject::connectSlotsByName(relCom);
    } // setupUi

    void retranslateUi(QDialog *relCom)
    {
        relCom->setWindowTitle(QApplication::translate("relCom", "Dialog", 0));
        QTableWidgetItem *___qtablewidgetitem = table_scientists->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("relCom", "First Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = table_scientists->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("relCom", "New Column", 0));
        QTableWidgetItem *___qtablewidgetitem2 = table_scientists->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("relCom", "Last Name", 0));
        QTableWidgetItem *___qtablewidgetitem3 = table_scientists->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("relCom", "Gender", 0));
        QTableWidgetItem *___qtablewidgetitem4 = table_scientists->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("relCom", "Year Died", 0));
    } // retranslateUi

};

namespace Ui {
    class relCom: public Ui_relCom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELCOM_H
