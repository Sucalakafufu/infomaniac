/********************************************************************************
** Form generated from reading UI file 'infomaniac.ui'
**
** Created: Thu Sep 13 11:26:05 2012
**      by: Qt User Interface Compiler version 4.8.2
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
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoManiac
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *InfoManiac)
    {
        if (InfoManiac->objectName().isEmpty())
            InfoManiac->setObjectName(QString::fromUtf8("InfoManiac"));
        InfoManiac->resize(400, 300);
        menuBar = new QMenuBar(InfoManiac);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        InfoManiac->setMenuBar(menuBar);
        mainToolBar = new QToolBar(InfoManiac);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        InfoManiac->addToolBar(mainToolBar);
        centralWidget = new QWidget(InfoManiac);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        InfoManiac->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(InfoManiac);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        InfoManiac->setStatusBar(statusBar);

        retranslateUi(InfoManiac);

        QMetaObject::connectSlotsByName(InfoManiac);
    } // setupUi

    void retranslateUi(QMainWindow *InfoManiac)
    {
        InfoManiac->setWindowTitle(QApplication::translate("InfoManiac", "InfoManiac", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InfoManiac: public Ui_InfoManiac {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOMANIAC_H
