/********************************************************************************
** Form generated from reading UI file 'relsci.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RELSCI_H
#define UI_RELSCI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_relSci
{
public:
    QTableWidget *table_computers;
    QPushButton *pushButton;
    QTextBrowser *text_sci;

    void setupUi(QDialog *relSci)
    {
        if (relSci->objectName().isEmpty())
            relSci->setObjectName(QStringLiteral("relSci"));
        relSci->resize(659, 171);
        table_computers = new QTableWidget(relSci);
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
        table_computers->setGeometry(QRect(11, 44, 637, 81));
        pushButton = new QPushButton(relSci);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(11, 132, 93, 28));
        text_sci = new QTextBrowser(relSci);
        text_sci->setObjectName(QStringLiteral("text_sci"));
        text_sci->setGeometry(QRect(11, 11, 637, 31));
        QFont font;
        font.setPointSize(10);
        text_sci->setFont(font);

        retranslateUi(relSci);

        QMetaObject::connectSlotsByName(relSci);
    } // setupUi

    void retranslateUi(QDialog *relSci)
    {
        relSci->setWindowTitle(QApplication::translate("relSci", "Dialog", 0));
        QTableWidgetItem *___qtablewidgetitem = table_computers->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("relSci", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = table_computers->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("relSci", "Build Year", 0));
        QTableWidgetItem *___qtablewidgetitem2 = table_computers->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("relSci", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem3 = table_computers->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("relSci", "Made", 0));
#ifndef QT_NO_TOOLTIP
        table_computers->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("relSci", "Add relation", 0));
    } // retranslateUi

};

namespace Ui {
    class relSci: public Ui_relSci {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELSCI_H
