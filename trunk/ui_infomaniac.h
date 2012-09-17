/********************************************************************************
** Form generated from reading UI file 'infomaniac.ui'
**
** Created: Sun Sep 16 17:13:09 2012
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
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoManiac
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;

    void setupUi(QMainWindow *InfoManiac)
    {
        if (InfoManiac->objectName().isEmpty())
            InfoManiac->setObjectName(QString::fromUtf8("InfoManiac"));
        InfoManiac->resize(761, 509);
        centralWidget = new QWidget(InfoManiac);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        InfoManiac->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(InfoManiac);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 761, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        InfoManiac->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());

        retranslateUi(InfoManiac);

        QMetaObject::connectSlotsByName(InfoManiac);
    } // setupUi

    void retranslateUi(QMainWindow *InfoManiac)
    {
        InfoManiac->setWindowTitle(QApplication::translate("InfoManiac", "InfoManiac", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("InfoManiac", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InfoManiac: public Ui_InfoManiac {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOMANIAC_H
