/********************************************************************************
** Form generated from reading UI file 'infomaniac.ui'
**
** Created: Sun Sep 16 19:45:24 2012
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
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoManiac
{
public:
    QAction *actionNewMember;
    QAction *actionQuit;
    QAction *actionRemoveMember;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTableWidget *mainTable;
    QMenuBar *menuBar;
    QMenu *menuFile;
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
        centralWidget = new QWidget(InfoManiac);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mainTable = new QTableWidget(centralWidget);
        if (mainTable->columnCount() < 2)
            mainTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mainTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mainTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        mainTable->setObjectName(QString::fromUtf8("mainTable"));

        gridLayout->addWidget(mainTable, 0, 0, 1, 1);

        InfoManiac->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(InfoManiac);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 761, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        InfoManiac->setMenuBar(menuBar);
        toolBar = new QToolBar(InfoManiac);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        InfoManiac->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionQuit);
        toolBar->addAction(actionNewMember);
        toolBar->addAction(actionRemoveMember);

        retranslateUi(InfoManiac);
        QObject::connect(actionQuit, SIGNAL(triggered()), InfoManiac, SLOT(close()));

        QMetaObject::connectSlotsByName(InfoManiac);
    } // setupUi

    void retranslateUi(QMainWindow *InfoManiac)
    {
        InfoManiac->setWindowTitle(QApplication::translate("InfoManiac", "InfoManiac", 0, QApplication::UnicodeUTF8));
        actionNewMember->setText(QApplication::translate("InfoManiac", "New Member", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("InfoManiac", "Quit", 0, QApplication::UnicodeUTF8));
        actionQuit->setShortcut(QApplication::translate("InfoManiac", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionRemoveMember->setText(QApplication::translate("InfoManiac", "RemoveMember", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = mainTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("InfoManiac", "First Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = mainTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("InfoManiac", "Last Name", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("InfoManiac", "File", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("InfoManiac", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InfoManiac: public Ui_InfoManiac {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOMANIAC_H
