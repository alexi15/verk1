/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionRemoveScientist;
    QAction *actionRemoveComputer;
    QAction *actionRelationScientist;
    QAction *actionRelationComputer;
    QAction *actionAdd_reltation_scientist;
    QAction *actionAdd_relation_computer;
    QAction *actionAdd_Scientist;
    QAction *actionAdd_Computer;
    QAction *actionExit;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabList;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *line_filter_sci;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *table_scientists;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *addScientist;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *line_filter_com;
    QTableWidget *table_computers;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *add_computers;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(811, 604);
        actionRemoveScientist = new QAction(MainWindow);
        actionRemoveScientist->setObjectName(QStringLiteral("actionRemoveScientist"));
        actionRemoveComputer = new QAction(MainWindow);
        actionRemoveComputer->setObjectName(QStringLiteral("actionRemoveComputer"));
        actionRelationScientist = new QAction(MainWindow);
        actionRelationScientist->setObjectName(QStringLiteral("actionRelationScientist"));
        actionRelationComputer = new QAction(MainWindow);
        actionRelationComputer->setObjectName(QStringLiteral("actionRelationComputer"));
        actionAdd_reltation_scientist = new QAction(MainWindow);
        actionAdd_reltation_scientist->setObjectName(QStringLiteral("actionAdd_reltation_scientist"));
        actionAdd_relation_computer = new QAction(MainWindow);
        actionAdd_relation_computer->setObjectName(QStringLiteral("actionAdd_relation_computer"));
        actionAdd_Scientist = new QAction(MainWindow);
        actionAdd_Scientist->setObjectName(QStringLiteral("actionAdd_Scientist"));
        actionAdd_Computer = new QAction(MainWindow);
        actionAdd_Computer->setObjectName(QStringLiteral("actionAdd_Computer"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabList = new QTabWidget(centralWidget);
        tabList->setObjectName(QStringLiteral("tabList"));
        tabList->setStyleSheet(QLatin1String("color: rgb(0, 0, 255);\n"
"font: 75 8pt \"MS Shell Dlg 2\";\n"
"font: 75 8pt \"MS Shell Dlg 2\";\n"
"gridline-color: rgb(157, 76, 255);\n"
"border-top-color: rgb(85, 0, 255);\n"
"border-color: rgb(170, 170, 255);\n"
"color: rgb(80, 88, 200);\n"
"alternate-background-color: rgb(102, 128, 200);"));
        tabList->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        line_filter_sci = new QLineEdit(tab);
        line_filter_sci->setObjectName(QStringLiteral("line_filter_sci"));

        verticalLayout_2->addWidget(line_filter_sci);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        table_scientists = new QTableWidget(tab);
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
        table_scientists->setEnabled(true);
        table_scientists->setMouseTracking(true);
        table_scientists->setContextMenuPolicy(Qt::CustomContextMenu);
        table_scientists->setAcceptDrops(false);
        table_scientists->setStyleSheet(QLatin1String("background-color: rgb(214, 214, 214);\n"
"color: rgb(0, 0, 127);\n"
"font: italic 8pt \"MS Shell Dlg 2\";\n"
"font: 75 8pt \"MS Shell Dlg 2\";\n"
"\n"
"selection-background-color: rgb(255, 0, 127);"));
        table_scientists->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        table_scientists->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        table_scientists->setSelectionMode(QAbstractItemView::SingleSelection);
        table_scientists->setSelectionBehavior(QAbstractItemView::SelectRows);
        table_scientists->setSortingEnabled(true);
        table_scientists->setColumnCount(6);

        horizontalLayout_2->addWidget(table_scientists);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        addScientist = new QPushButton(tab);
        addScientist->setObjectName(QStringLiteral("addScientist"));
        addScientist->setEnabled(true);

        horizontalLayout_5->addWidget(addScientist);


        verticalLayout_2->addLayout(horizontalLayout_5);

        tabList->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        line_filter_com = new QLineEdit(tab_2);
        line_filter_com->setObjectName(QStringLiteral("line_filter_com"));

        verticalLayout_3->addWidget(line_filter_com);

        table_computers = new QTableWidget(tab_2);
        if (table_computers->columnCount() < 5)
            table_computers->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table_computers->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        table_computers->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        table_computers->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        table_computers->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        table_computers->setHorizontalHeaderItem(4, __qtablewidgetitem10);
        table_computers->setObjectName(QStringLiteral("table_computers"));
        table_computers->setMouseTracking(true);
        table_computers->setFocusPolicy(Qt::WheelFocus);
        table_computers->setContextMenuPolicy(Qt::CustomContextMenu);
        table_computers->setStyleSheet(QLatin1String("selection-background-color: rgb(255, 0, 127);\n"
"background-color: rgb(214, 214, 214);\n"
"color: rgb(0, 0, 127);"));
        table_computers->setSelectionMode(QAbstractItemView::SingleSelection);
        table_computers->setSelectionBehavior(QAbstractItemView::SelectRows);
        table_computers->setSortingEnabled(true);
        table_computers->setColumnCount(5);

        verticalLayout_3->addWidget(table_computers);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        add_computers = new QPushButton(tab_2);
        add_computers->setObjectName(QStringLiteral("add_computers"));

        horizontalLayout_3->addWidget(add_computers);


        verticalLayout_3->addLayout(horizontalLayout_3);

        tabList->addTab(tab_2, QString());

        verticalLayout->addWidget(tabList);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 811, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionAdd_Scientist);
        menuFile->addAction(actionAdd_Computer);
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        tabList->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionRemoveScientist->setText(QApplication::translate("MainWindow", "Remove", 0));
        actionRemoveComputer->setText(QApplication::translate("MainWindow", "Remove", 0));
        actionRelationScientist->setText(QApplication::translate("MainWindow", "View relations", 0));
        actionRelationComputer->setText(QApplication::translate("MainWindow", "View relations", 0));
        actionAdd_reltation_scientist->setText(QApplication::translate("MainWindow", "Add relation", 0));
        actionAdd_relation_computer->setText(QApplication::translate("MainWindow", "Add relation", 0));
        actionAdd_Scientist->setText(QApplication::translate("MainWindow", "Add Scientist", 0));
        actionAdd_Computer->setText(QApplication::translate("MainWindow", "Add Computer", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        line_filter_sci->setPlaceholderText(QApplication::translate("MainWindow", "Search", 0));
        QTableWidgetItem *___qtablewidgetitem = table_scientists->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "First Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = table_scientists->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Last Name", 0));
        QTableWidgetItem *___qtablewidgetitem2 = table_scientists->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Gender", 0));
        QTableWidgetItem *___qtablewidgetitem3 = table_scientists->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Year Born", 0));
        QTableWidgetItem *___qtablewidgetitem4 = table_scientists->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Year Died", 0));
        addScientist->setText(QApplication::translate("MainWindow", "Add Scientist", 0));
        tabList->setTabText(tabList->indexOf(tab), QApplication::translate("MainWindow", "Scientists", 0));
        line_filter_com->setPlaceholderText(QApplication::translate("MainWindow", "Search", 0));
        QTableWidgetItem *___qtablewidgetitem5 = table_computers->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem6 = table_computers->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Build Year", 0));
        QTableWidgetItem *___qtablewidgetitem7 = table_computers->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem8 = table_computers->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Made", 0));
        QTableWidgetItem *___qtablewidgetitem9 = table_computers->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Id", 0));
        add_computers->setText(QApplication::translate("MainWindow", "Add Computer", 0));
        tabList->setTabText(tabList->indexOf(tab_2), QApplication::translate("MainWindow", "Computers", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
