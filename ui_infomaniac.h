/********************************************************************************
** Form generated from reading UI file 'infomaniac.ui'
**
** Created: Thu Sep 20 20:40:37 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOMANIAC_H
#define UI_INFOMANIAC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoManiac
{
public:
    QAction *actionNewMember;
    QAction *actionQuit;
    QAction *actionRemoveMember;
    QAction *actionNewColumn;
    QAction *actionRemoveColumn;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionOpen;
    QAction *actionNewDatabase;
    QAction *actionSettings;
    QAction *actionSaveToolBarState;
    QAction *actionExport_Database;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *currentDBLabel;
    QTableWidget *mainTable;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuMembers;
    QMenu *menuTools;
    QToolBar *toolBar;

    void setupUi(QMainWindow *InfoManiac)
    {
        if (InfoManiac->objectName().isEmpty())
            InfoManiac->setObjectName(QString::fromUtf8("InfoManiac"));
        InfoManiac->resize(761, 509);
        actionNewMember = new QAction(InfoManiac);
        actionNewMember->setObjectName(QString::fromUtf8("actionNewMember"));
        actionQuit = new QAction(InfoManiac);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionRemoveMember = new QAction(InfoManiac);
        actionRemoveMember->setObjectName(QString::fromUtf8("actionRemoveMember"));
        actionNewColumn = new QAction(InfoManiac);
        actionNewColumn->setObjectName(QString::fromUtf8("actionNewColumn"));
        actionRemoveColumn = new QAction(InfoManiac);
        actionRemoveColumn->setObjectName(QString::fromUtf8("actionRemoveColumn"));
        actionSave = new QAction(InfoManiac);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_As = new QAction(InfoManiac);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionOpen = new QAction(InfoManiac);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionNewDatabase = new QAction(InfoManiac);
        actionNewDatabase->setObjectName(QString::fromUtf8("actionNewDatabase"));
        actionSettings = new QAction(InfoManiac);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        actionSaveToolBarState = new QAction(InfoManiac);
        actionSaveToolBarState->setObjectName(QString::fromUtf8("actionSaveToolBarState"));
        actionExport_Database = new QAction(InfoManiac);
        actionExport_Database->setObjectName(QString::fromUtf8("actionExport_Database"));
        centralWidget = new QWidget(InfoManiac);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        currentDBLabel = new QLabel(centralWidget);
        currentDBLabel->setObjectName(QString::fromUtf8("currentDBLabel"));
        currentDBLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(currentDBLabel);

        mainTable = new QTableWidget(centralWidget);
        if (mainTable->columnCount() < 2)
            mainTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mainTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mainTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        mainTable->setObjectName(QString::fromUtf8("mainTable"));
        mainTable->setContextMenuPolicy(Qt::DefaultContextMenu);
        mainTable->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        mainTable->setAlternatingRowColors(false);
        mainTable->setSortingEnabled(true);
        mainTable->setWordWrap(true);
        mainTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));

        verticalLayout->addWidget(mainTable);

        InfoManiac->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(InfoManiac);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 761, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuMembers = new QMenu(menuBar);
        menuMembers->setObjectName(QString::fromUtf8("menuMembers"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        InfoManiac->setMenuBar(menuBar);
        toolBar = new QToolBar(InfoManiac);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        InfoManiac->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuMembers->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuFile->addAction(actionNewDatabase);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addAction(actionExport_Database);
        menuFile->addAction(actionQuit);
        menuMembers->addAction(actionNewMember);
        menuMembers->addAction(actionRemoveMember);
        menuMembers->addAction(actionNewColumn);
        menuMembers->addAction(actionRemoveColumn);
        menuTools->addAction(actionSettings);
        toolBar->addAction(actionNewMember);
        toolBar->addAction(actionRemoveMember);
        toolBar->addAction(actionNewColumn);
        toolBar->addAction(actionRemoveColumn);

        retranslateUi(InfoManiac);
        QObject::connect(actionQuit, SIGNAL(triggered()), InfoManiac, SLOT(close()));
        QObject::connect(toolBar, SIGNAL(visibilityChanged(bool)), actionSaveToolBarState, SLOT(trigger()));

        QMetaObject::connectSlotsByName(InfoManiac);
    } // setupUi

    void retranslateUi(QMainWindow *InfoManiac)
    {
        InfoManiac->setWindowTitle(QApplication::translate("InfoManiac", "InfoManiac", 0, QApplication::UnicodeUTF8));
        actionNewMember->setText(QApplication::translate("InfoManiac", "New Member", 0, QApplication::UnicodeUTF8));
        actionNewMember->setShortcut(QApplication::translate("InfoManiac", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("InfoManiac", "Quit", 0, QApplication::UnicodeUTF8));
        actionQuit->setShortcut(QApplication::translate("InfoManiac", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionRemoveMember->setText(QApplication::translate("InfoManiac", "RemoveMember", 0, QApplication::UnicodeUTF8));
        actionRemoveMember->setShortcut(QApplication::translate("InfoManiac", "Del", 0, QApplication::UnicodeUTF8));
        actionNewColumn->setText(QApplication::translate("InfoManiac", "NewColumn", 0, QApplication::UnicodeUTF8));
        actionRemoveColumn->setText(QApplication::translate("InfoManiac", "RemoveColumn", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("InfoManiac", "Save Database", 0, QApplication::UnicodeUTF8));
        actionSave->setShortcut(QApplication::translate("InfoManiac", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionSave_As->setText(QApplication::translate("InfoManiac", "Save Database As", 0, QApplication::UnicodeUTF8));
        actionSave_As->setShortcut(QApplication::translate("InfoManiac", "Ctrl+Shift+S", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("InfoManiac", "Open Database", 0, QApplication::UnicodeUTF8));
        actionOpen->setShortcut(QApplication::translate("InfoManiac", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionNewDatabase->setText(QApplication::translate("InfoManiac", "New Database", 0, QApplication::UnicodeUTF8));
        actionNewDatabase->setShortcut(QApplication::translate("InfoManiac", "Ctrl+Shift+N", 0, QApplication::UnicodeUTF8));
        actionSettings->setText(QApplication::translate("InfoManiac", "Settings", 0, QApplication::UnicodeUTF8));
        actionSettings->setShortcut(QApplication::translate("InfoManiac", "Ctrl+,", 0, QApplication::UnicodeUTF8));
        actionSaveToolBarState->setText(QApplication::translate("InfoManiac", "SaveToolBarState", 0, QApplication::UnicodeUTF8));
        actionExport_Database->setText(QApplication::translate("InfoManiac", "Export Database", 0, QApplication::UnicodeUTF8));
        actionExport_Database->setShortcut(QApplication::translate("InfoManiac", "Alt+E", 0, QApplication::UnicodeUTF8));
        currentDBLabel->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = mainTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("InfoManiac", "First Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = mainTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("InfoManiac", "Last Name", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("InfoManiac", "File", 0, QApplication::UnicodeUTF8));
        menuMembers->setTitle(QApplication::translate("InfoManiac", "Members", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("InfoManiac", "Tools", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("InfoManiac", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InfoManiac: public Ui_InfoManiac {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOMANIAC_H
