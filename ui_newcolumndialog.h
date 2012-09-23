/********************************************************************************
** Form generated from reading UI file 'newcolumndialog.ui'
**
** Created: Thu Sep 20 20:48:27 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCOLUMNDIALOG_H
#define UI_NEWCOLUMNDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NewColumnDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *NewColumnText;
    QDialogButtonBox *NewColumnbuttonBox;

    void setupUi(QDialog *NewColumnDialog)
    {
        if (NewColumnDialog->objectName().isEmpty())
            NewColumnDialog->setObjectName(QString::fromUtf8("NewColumnDialog"));
        NewColumnDialog->resize(363, 60);
        NewColumnDialog->setContextMenuPolicy(Qt::DefaultContextMenu);
        NewColumnDialog->setLayoutDirection(Qt::LeftToRight);
        verticalLayout = new QVBoxLayout(NewColumnDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        NewColumnText = new QLineEdit(NewColumnDialog);
        NewColumnText->setObjectName(QString::fromUtf8("NewColumnText"));
        NewColumnText->setContextMenuPolicy(Qt::DefaultContextMenu);

        verticalLayout->addWidget(NewColumnText);

        NewColumnbuttonBox = new QDialogButtonBox(NewColumnDialog);
        NewColumnbuttonBox->setObjectName(QString::fromUtf8("NewColumnbuttonBox"));
        NewColumnbuttonBox->setLayoutDirection(Qt::LeftToRight);
        NewColumnbuttonBox->setOrientation(Qt::Horizontal);
        NewColumnbuttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(NewColumnbuttonBox);


        retranslateUi(NewColumnDialog);
        QObject::connect(NewColumnbuttonBox, SIGNAL(accepted()), NewColumnDialog, SLOT(accept()));
        QObject::connect(NewColumnbuttonBox, SIGNAL(rejected()), NewColumnDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewColumnDialog);
    } // setupUi

    void retranslateUi(QDialog *NewColumnDialog)
    {
        NewColumnDialog->setWindowTitle(QApplication::translate("NewColumnDialog", "New Column", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NewColumnDialog: public Ui_NewColumnDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCOLUMNDIALOG_H
