/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created: Mon Sep 17 20:47:10 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *StartupLabel;
    QCheckBox *OpenLastDBcheckBox;
    QDialogButtonBox *SettingsDialogbuttonBox;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(174, 83);
        verticalLayout = new QVBoxLayout(SettingsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        StartupLabel = new QLabel(SettingsDialog);
        StartupLabel->setObjectName(QString::fromUtf8("StartupLabel"));

        verticalLayout->addWidget(StartupLabel);

        OpenLastDBcheckBox = new QCheckBox(SettingsDialog);
        OpenLastDBcheckBox->setObjectName(QString::fromUtf8("OpenLastDBcheckBox"));

        verticalLayout->addWidget(OpenLastDBcheckBox);

        SettingsDialogbuttonBox = new QDialogButtonBox(SettingsDialog);
        SettingsDialogbuttonBox->setObjectName(QString::fromUtf8("SettingsDialogbuttonBox"));
        SettingsDialogbuttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        SettingsDialogbuttonBox->setCenterButtons(true);

        verticalLayout->addWidget(SettingsDialogbuttonBox);


        retranslateUi(SettingsDialog);
        QObject::connect(SettingsDialogbuttonBox, SIGNAL(rejected()), SettingsDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "Form", 0, QApplication::UnicodeUTF8));
        StartupLabel->setText(QApplication::translate("SettingsDialog", "Startup", 0, QApplication::UnicodeUTF8));
        OpenLastDBcheckBox->setText(QApplication::translate("SettingsDialog", "Open Last Database", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
