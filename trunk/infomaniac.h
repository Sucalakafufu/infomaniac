#ifndef INFOMANIAC_H
#define INFOMANIAC_H

#include "errordialog.h"
#include "newcolumndialog.h"
#include "dbinterface.h"
#include "cfginterface.h"
#include "settingsdialog.h"
#include "exportdialog.h"
#include "neweventdialog.h"
#include <QMainWindow>
#include <QString>

namespace Ui {
class InfoManiac;
}

class InfoManiac : public QMainWindow
{
    Q_OBJECT

public:
    explicit InfoManiac(QWidget *parent = 0);
    ~InfoManiac();

private slots:    
    void on_actionNewMember_triggered();

    void on_actionRemoveMember_triggered();

    void on_actionNewColumn_triggered();

    void on_actionRemoveColumn_triggered();

    void on_actionSave_triggered();

    void on_actionOpen_triggered();

    void on_actionSaveToolBarState_triggered();

    void on_actionSettings_triggered();

    void on_actionNewDatabase_triggered();

    void on_actionSaveAs_triggered();

    void on_actionExportDatabase_triggered();

    void on_mainTable_cellChanged(int row, int column);

    void on_actionNewEvent_triggered();

private:
    Ui::InfoManiac *ui;

    QString currentDBFileName;

    cfgInterface cfg;

    dbInterface db;

    void refreshUI();
};

#endif // INFOMANIAC_H
