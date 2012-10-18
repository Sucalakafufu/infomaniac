/********************************************************************************
** Form generated from reading UI file 'neweventdialog.ui'
**
** Created: Wed Oct 17 20:02:58 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWEVENTDIALOG_H
#define UI_NEWEVENTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QTimeEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NewEventDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *EventInfoFrame;
    QGridLayout *gridLayout;
    QFrame *EventFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *EventLabel;
    QLineEdit *EventLineEdit;
    QFrame *LocationFrame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *LocationLabel;
    QLineEdit *LocationLineEdit;
    QFrame *StartDateFrame;
    QHBoxLayout *horizontalLayout_4;
    QLabel *StartDateLabel;
    QDateEdit *StartDateEdit;
    QFrame *EndDateFrame;
    QHBoxLayout *horizontalLayout_3;
    QLabel *EndDateLabel;
    QDateEdit *EndDateEdit;
    QFrame *StartTimeFrame;
    QHBoxLayout *horizontalLayout_5;
    QLabel *StartTimeLabel;
    QTimeEdit *StartTimeEdit;
    QFrame *EndTimeFrame;
    QHBoxLayout *horizontalLayout_6;
    QLabel *EndTimeLabel;
    QTimeEdit *EndTimeEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewEventDialog)
    {
        if (NewEventDialog->objectName().isEmpty())
            NewEventDialog->setObjectName(QString::fromUtf8("NewEventDialog"));
        NewEventDialog->resize(374, 199);
        verticalLayout = new QVBoxLayout(NewEventDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        EventInfoFrame = new QFrame(NewEventDialog);
        EventInfoFrame->setObjectName(QString::fromUtf8("EventInfoFrame"));
        EventInfoFrame->setFrameShape(QFrame::StyledPanel);
        EventInfoFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(EventInfoFrame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        EventFrame = new QFrame(EventInfoFrame);
        EventFrame->setObjectName(QString::fromUtf8("EventFrame"));
        EventFrame->setFrameShape(QFrame::StyledPanel);
        EventFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(EventFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        EventLabel = new QLabel(EventFrame);
        EventLabel->setObjectName(QString::fromUtf8("EventLabel"));

        horizontalLayout->addWidget(EventLabel);

        EventLineEdit = new QLineEdit(EventFrame);
        EventLineEdit->setObjectName(QString::fromUtf8("EventLineEdit"));

        horizontalLayout->addWidget(EventLineEdit);


        gridLayout->addWidget(EventFrame, 0, 0, 1, 1);

        LocationFrame = new QFrame(EventInfoFrame);
        LocationFrame->setObjectName(QString::fromUtf8("LocationFrame"));
        LocationFrame->setFrameShape(QFrame::StyledPanel);
        LocationFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(LocationFrame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        LocationLabel = new QLabel(LocationFrame);
        LocationLabel->setObjectName(QString::fromUtf8("LocationLabel"));

        horizontalLayout_2->addWidget(LocationLabel);

        LocationLineEdit = new QLineEdit(LocationFrame);
        LocationLineEdit->setObjectName(QString::fromUtf8("LocationLineEdit"));

        horizontalLayout_2->addWidget(LocationLineEdit);


        gridLayout->addWidget(LocationFrame, 0, 1, 1, 1);

        StartDateFrame = new QFrame(EventInfoFrame);
        StartDateFrame->setObjectName(QString::fromUtf8("StartDateFrame"));
        StartDateFrame->setFrameShape(QFrame::StyledPanel);
        StartDateFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(StartDateFrame);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        StartDateLabel = new QLabel(StartDateFrame);
        StartDateLabel->setObjectName(QString::fromUtf8("StartDateLabel"));

        horizontalLayout_4->addWidget(StartDateLabel);

        StartDateEdit = new QDateEdit(StartDateFrame);
        StartDateEdit->setObjectName(QString::fromUtf8("StartDateEdit"));

        horizontalLayout_4->addWidget(StartDateEdit);


        gridLayout->addWidget(StartDateFrame, 1, 0, 1, 1);

        EndDateFrame = new QFrame(EventInfoFrame);
        EndDateFrame->setObjectName(QString::fromUtf8("EndDateFrame"));
        EndDateFrame->setFrameShape(QFrame::StyledPanel);
        EndDateFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(EndDateFrame);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        EndDateLabel = new QLabel(EndDateFrame);
        EndDateLabel->setObjectName(QString::fromUtf8("EndDateLabel"));

        horizontalLayout_3->addWidget(EndDateLabel);

        EndDateEdit = new QDateEdit(EndDateFrame);
        EndDateEdit->setObjectName(QString::fromUtf8("EndDateEdit"));

        horizontalLayout_3->addWidget(EndDateEdit);


        gridLayout->addWidget(EndDateFrame, 1, 1, 1, 1);

        StartTimeFrame = new QFrame(EventInfoFrame);
        StartTimeFrame->setObjectName(QString::fromUtf8("StartTimeFrame"));
        StartTimeFrame->setFrameShape(QFrame::StyledPanel);
        StartTimeFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(StartTimeFrame);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        StartTimeLabel = new QLabel(StartTimeFrame);
        StartTimeLabel->setObjectName(QString::fromUtf8("StartTimeLabel"));

        horizontalLayout_5->addWidget(StartTimeLabel);

        StartTimeEdit = new QTimeEdit(StartTimeFrame);
        StartTimeEdit->setObjectName(QString::fromUtf8("StartTimeEdit"));

        horizontalLayout_5->addWidget(StartTimeEdit);


        gridLayout->addWidget(StartTimeFrame, 2, 0, 1, 1);

        EndTimeFrame = new QFrame(EventInfoFrame);
        EndTimeFrame->setObjectName(QString::fromUtf8("EndTimeFrame"));
        EndTimeFrame->setFrameShape(QFrame::StyledPanel);
        EndTimeFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(EndTimeFrame);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        EndTimeLabel = new QLabel(EndTimeFrame);
        EndTimeLabel->setObjectName(QString::fromUtf8("EndTimeLabel"));

        horizontalLayout_6->addWidget(EndTimeLabel);

        EndTimeEdit = new QTimeEdit(EndTimeFrame);
        EndTimeEdit->setObjectName(QString::fromUtf8("EndTimeEdit"));

        horizontalLayout_6->addWidget(EndTimeEdit);


        gridLayout->addWidget(EndTimeFrame, 2, 1, 1, 1);


        verticalLayout->addWidget(EventInfoFrame);

        buttonBox = new QDialogButtonBox(NewEventDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(NewEventDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewEventDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewEventDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewEventDialog);
    } // setupUi

    void retranslateUi(QDialog *NewEventDialog)
    {
        NewEventDialog->setWindowTitle(QApplication::translate("NewEventDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        EventLabel->setText(QApplication::translate("NewEventDialog", "Event:", 0, QApplication::UnicodeUTF8));
        LocationLabel->setText(QApplication::translate("NewEventDialog", "Location:", 0, QApplication::UnicodeUTF8));
        StartDateLabel->setText(QApplication::translate("NewEventDialog", "Start Date:", 0, QApplication::UnicodeUTF8));
        EndDateLabel->setText(QApplication::translate("NewEventDialog", "End Date:", 0, QApplication::UnicodeUTF8));
        StartTimeLabel->setText(QApplication::translate("NewEventDialog", "Start Time:", 0, QApplication::UnicodeUTF8));
        EndTimeLabel->setText(QApplication::translate("NewEventDialog", "End Time:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NewEventDialog: public Ui_NewEventDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWEVENTDIALOG_H
