#include "infomaniac.h"
#include "ui_infomaniac.h"

//static vars
const static QString APPNAME = "InfoManiac Alpha";
const static QString VERSIONNUM = "1.0";

InfoManiac::InfoManiac(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InfoManiac)
{
    ui->setupUi(this);
    setWindowTitle(APPNAME+VERSIONNUM);
}

InfoManiac::~InfoManiac()
{
    delete ui;
}

void InfoManiac::on_actionNewMember_triggered()
{
    ui->mainTable->setRowCount(ui->mainTable->rowCount()+1);
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
