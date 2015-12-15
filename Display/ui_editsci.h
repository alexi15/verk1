/********************************************************************************
** Form generated from reading UI file 'editsci.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSCI_H
#define UI_EDITSCI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_editSci
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QDialog *editSci)
    {
        if (editSci->objectName().isEmpty())
            editSci->setObjectName(QStringLiteral("editSci"));
        editSci->resize(400, 66);
        verticalLayout = new QVBoxLayout(editSci);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit = new QLineEdit(editSci);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        label = new QLabel(editSci);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);


        retranslateUi(editSci);

        QMetaObject::connectSlotsByName(editSci);
    } // setupUi

    void retranslateUi(QDialog *editSci)
    {
        editSci->setWindowTitle(QApplication::translate("editSci", "Dialog", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class editSci: public Ui_editSci {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSCI_H
