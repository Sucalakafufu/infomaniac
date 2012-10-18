/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created: Mon Oct 15 12:11:56 2012
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
    QLabel *LookAndFeelLabel;
    QCheckBox *ShowOpenDBcheckBox;
    QDialogButtonBox *SettingsDialogButtonBox;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(174, 125);
        verticalLayout = new QVBoxLayout(SettingsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        StartupLabel = new QLabel(SettingsDialog);
        StartupLabel->setObjectName(QString::fromUtf8("StartupLabel"));

        verticalLayout->addWidget(StartupLabel);

        OpenLastDBcheckBox = new QCheckBox(SettingsDialog);
        OpenLastDBcheckBox->setObjectName(QString::fromUtf8("OpenLastDBcheckBox"));

        verticalLayout->addWidget(OpenLastDBcheckBox);

        LookAndFeelLabel = new QLabel(SettingsDialog);
        LookAndFeelLabel->setObjectName(QString::fromUtf8("LookAndFeelLabel"));

        verticalLayout->addWidget(LookAndFeelLabel);

        ShowOpenDBcheckBox = new QCheckBox(SettingsDialog);
        ShowOpenDBcheckBox->setObjectName(QString::fromUtf8("ShowOpenDBcheckBox"));

        verticalLayout->addWidget(ShowOpenDBcheckBox);

        SettingsDialogButtonBox = new QDialogButtonBox(SettingsDialog);
        SettingsDialogButtonBox->setObjectName(QString::fromUtf8("SettingsDialogButtonBox"));
        SettingsDialogButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        SettingsDialogButtonBox->setCenterButtons(true);

        verticalLayout->addWidget(SettingsDialogButtonBox);


        retranslateUi(SettingsDialog);
        QObject::connect(SettingsDialogButtonBox, SIGNAL(rejected()), SettingsDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "Form", 0, QApplication::UnicodeUTF8));
        StartupLabel->setText(QApplication::translate("SettingsDialog", "Startup", 0, QApplication::UnicodeUTF8));
        OpenLastDBcheckBox->setText(QApplication::translate("SettingsDialog", "Open Last Database", 0, QApplication::UnicodeUTF8));
        LookAndFeelLabel->setText(QApplication::translate("SettingsDialog", "Look and Feel", 0, QApplication::UnicodeUTF8));
        ShowOpenDBcheckBox->setText(QApplication::translate("SettingsDialog", "Show Open Database", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
