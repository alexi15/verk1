/********************************************************************************
** Form generated from reading UI file 'addscirel.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSCIREL_H
#define UI_ADDSCIREL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addSciRel
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;

    void setupUi(QDialog *addSciRel)
    {
        if (addSciRel->objectName().isEmpty())
            addSciRel->setObjectName(QStringLiteral("addSciRel"));
        addSciRel->resize(400, 300);
        verticalLayout = new QVBoxLayout(addSciRel);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableWidget = new QTableWidget(addSciRel);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);


        retranslateUi(addSciRel);

        QMetaObject::connectSlotsByName(addSciRel);
    } // setupUi

    void retranslateUi(QDialog *addSciRel)
    {
        addSciRel->setWindowTitle(QApplication::translate("addSciRel", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class addSciRel: public Ui_addSciRel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSCIREL_H
