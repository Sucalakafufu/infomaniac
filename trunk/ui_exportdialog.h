/********************************************************************************
** Form generated from reading UI file 'exportdialog.ui'
**
** Created: Thu Sep 20 20:40:37 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTDIALOG_H
#define UI_EXPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExportDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *ExportLabel;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *OptionsLabel;
    QComboBox *OptionsComboBox;
    QDialogButtonBox *ExportDialogButtonBox;

    void setupUi(QDialog *ExportDialog)
    {
        if (ExportDialog->objectName().isEmpty())
            ExportDialog->setObjectName(QString::fromUtf8("ExportDialog"));
        ExportDialog->resize(174, 106);
        verticalLayout = new QVBoxLayout(ExportDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ExportLabel = new QLabel(ExportDialog);
        ExportLabel->setObjectName(QString::fromUtf8("ExportLabel"));
        ExportLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(ExportLabel);

        frame = new QFrame(ExportDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        OptionsLabel = new QLabel(frame);
        OptionsLabel->setObjectName(QString::fromUtf8("OptionsLabel"));

        horizontalLayout->addWidget(OptionsLabel);

        OptionsComboBox = new QComboBox(frame);
        OptionsComboBox->setObjectName(QString::fromUtf8("OptionsComboBox"));

        horizontalLayout->addWidget(OptionsComboBox);


        verticalLayout->addWidget(frame);

        ExportDialogButtonBox = new QDialogButtonBox(ExportDialog);
        ExportDialogButtonBox->setObjectName(QString::fromUtf8("ExportDialogButtonBox"));
        ExportDialogButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(ExportDialogButtonBox);


        retranslateUi(ExportDialog);
        QObject::connect(ExportDialogButtonBox, SIGNAL(rejected()), ExportDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(ExportDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportDialog)
    {
        ExportDialog->setWindowTitle(QApplication::translate("ExportDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        ExportLabel->setText(QApplication::translate("ExportDialog", "Export To...", 0, QApplication::UnicodeUTF8));
        OptionsLabel->setText(QString());
        OptionsComboBox->clear();
        OptionsComboBox->insertItems(0, QStringList()
         << QApplication::translate("ExportDialog", ".txt", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ExportDialog", ".csv", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ExportDialog", ".xls", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class ExportDialog: public Ui_ExportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTDIALOG_H
