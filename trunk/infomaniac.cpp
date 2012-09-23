#include "infomaniac.h"
#include "ui_infomaniac.h"

//static vars
const static QString APPNAME = "InfoManiac Alpha";
const static QString VERSIONNUM = "1.3";

InfoManiac::InfoManiac(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InfoManiac)
{
    ui->setupUi(this);
    setWindowTitle(APPNAME+" "+VERSIONNUM);

    //initialize
    ui->toolBar->setHidden(cfg.getToolBarState());
    currentDBFileName = cfg.getLastDBFileName();

    if (cfg.getShowOpenDB())
        ui->currentDBLabel->setText("Open Database: "+cfg.getLastDBFileName());

    if (cfg.getRememberDB())
        db.openLastDB(ui->mainTable);
}

InfoManiac::~InfoManiac()
{
    delete ui;
}

void InfoManiac::refreshUI()
{
    if (cfg.getShowOpenDB())
        ui->currentDBLabel->setText("Open Database: "+currentDBFileName);
    else
        ui->currentDBLabel->setText("");
}

void InfoManiac::on_actionNewMember_triggered()
{
    ui->mainTable->setRowCount(ui->mainTable->rowCount()+1);
    QModelIndex index = ui->mainTable->model()->index(ui->mainTable->rowCount()-1,0);
    ui->mainTable->setCurrentIndex(index);
}

void InfoManiac::on_actionRemoveMember_triggered()
{
    ui->mainTable->removeRow(ui->mainTable->currentRow());
    //remove bulk is below
//    QList<QTableWidgetItem *> badMembers = ui->mainTable->selectedItems();
//    qSort(badMembers);
//    for (int i = badMembers.count()-1; i >=0; i--)
//    {
//        ui->mainTable->removeRow(badMembers.at(i)->row());
//    }
}

void InfoManiac::on_actionNewColumn_triggered()
{
    NewColumnDialog *newColumn = new NewColumnDialog(this);

    if (newColumn->exec() == QDialog::Accepted)
    {
        ui->mainTable->setColumnCount(ui->mainTable->columnCount()+1);
        QTableWidgetItem *newColumnItem = new QTableWidgetItem();
        newColumnItem->setText(newColumn->getText());
        ui->mainTable->setHorizontalHeaderItem(ui->mainTable->columnCount()-1,newColumnItem);
    }
}

void InfoManiac::on_actionRemoveColumn_triggered()
{
    if (ui->mainTable->rowCount() > 0)
    {
        if (ui->mainTable->horizontalHeaderItem(ui->mainTable->currentColumn())->text() == "First Name" ||
                ui->mainTable->horizontalHeaderItem(ui->mainTable->currentColumn())->text() == "Last Name")
        {
            ErrorDialog *lockedColumn = new ErrorDialog(this);
            lockedColumn->setErrorMessage("Cannot Remove This Column");
            lockedColumn->exec();
        }
        else
            ui->mainTable->removeColumn(ui->mainTable->currentColumn());
    }
}

void InfoManiac::on_actionSave_triggered()
{
    db.populateDB(ui->mainTable);
    db.saveDB(this);
}

void InfoManiac::on_actionOpen_triggered()
{
    if (db.openDB(this, ui->mainTable))
        currentDBFileName = cfg.getLastDBFileName();
    refreshUI();
}

void InfoManiac::on_actionSaveToolBarState_triggered()
{
    cfg.setToolBarState(ui->toolBar->isHidden());
}

void InfoManiac::on_actionSettings_triggered()
{
    SettingsDialog *settings = new SettingsDialog(this);
    settings->exec();   

    refreshUI();
}
void InfoManiac::on_actionNewDatabase_triggered()
{
    db.newDB(ui->mainTable);

    currentDBFileName = "Unsaved Database";
    refreshUI();
}

void InfoManiac::on_actionSave_As_triggered()
{
    db.populateDB(ui->mainTable);
    db.saveDBAs(this);
}

void InfoManiac::on_actionExport_Database_triggered()
{
    ExportDialog *exportDialog = new ExportDialog(this, ui->mainTable);
    exportDialog->exec();
}

void InfoManiac::on_mainTable_cellChanged(int row, int column)
{
    ui->mainTable->resizeColumnsToContents();
}
