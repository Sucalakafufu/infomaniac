/********************************************************************************
** Form generated from reading UI file 'errordialog.ui'
**
** Created: Thu Sep 20 20:48:27 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORDIALOG_H
#define UI_ERRORDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ErrorDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *ErrorMessage;
    QPushButton *OkayPushButton;

    void setupUi(QDialog *ErrorDialog)
    {
        if (ErrorDialog->objectName().isEmpty())
            ErrorDialog->setObjectName(QString::fromUtf8("ErrorDialog"));
        ErrorDialog->resize(235, 68);
        verticalLayout = new QVBoxLayout(ErrorDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ErrorMessage = new QLabel(ErrorDialog);
        ErrorMessage->setObjectName(QString::fromUtf8("ErrorMessage"));
        ErrorMessage->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(ErrorMessage);

        OkayPushButton = new QPushButton(ErrorDialog);
        OkayPushButton->setObjectName(QString::fromUtf8("OkayPushButton"));

        verticalLayout->addWidget(OkayPushButton);


        retranslateUi(ErrorDialog);
        QObject::connect(OkayPushButton, SIGNAL(clicked()), ErrorDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(ErrorDialog);
    } // setupUi

    void retranslateUi(QDialog *ErrorDialog)
    {
        ErrorDialog->setWindowTitle(QApplication::translate("ErrorDialog", "Error", 0, QApplication::UnicodeUTF8));
        ErrorMessage->setText(QString());
        OkayPushButton->setText(QApplication::translate("ErrorDialog", "Okay", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ErrorDialog: public Ui_ErrorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORDIALOG_H
