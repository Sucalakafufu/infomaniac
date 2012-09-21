#include "exportdialog.h"
#include "ui_exportdialog.h"

ExportDialog::ExportDialog(QWidget *parent, QTableWidget *table) :
    QDialog(parent),
    ui(new Ui::ExportDialog)
{
    exportTable = table;

    setWindowFlags(Qt::Window | Qt::WindowTitleHint);
    ui->setupUi(this);

    if (ui->OptionsComboBox->currentText() == ".txt")
        ui->OptionsLabel->setText("Text File");
    else if (ui->OptionsComboBox->currentText() == ".csv")
        ui->OptionsLabel->setText("Comma Delimited");
    else if (ui->OptionsComboBox->currentText() == ".xls")
        ui->OptionsLabel->setText("Spreadsheet");
}

ExportDialog::~ExportDialog()
{
    delete ui;
}

void ExportDialog::exportDB(QString fileType)
{
    QString exportTypes, exportDialogType = "Export To...";
    if (fileType == ".txt")
        exportTypes = "Text Files(*.txt)\0*.txt\0";
    else if (fileType == ".csv")
        exportTypes = "Comma Delmited(*.csv)\0*.csv\0";
    else if (fileType == ".xls")
        exportTypes = "Spreadsheet(*.xls)\0*.xls\0";

    db.exportDB(this->parentWidget(), exportDialogType, exportTypes, fileType, exportTable);
}

void ExportDialog::on_ExportDialogButtonBox_accepted()
{
    close();
    exportDB(ui->OptionsComboBox->currentText());
}

void ExportDialog::on_OptionsComboBox_currentIndexChanged(const QString &arg1)
{
    if (arg1 == ".txt")
        ui->OptionsLabel->setText("Text File");
    else if (arg1 == ".csv")
        ui->OptionsLabel->setText("Comma Delimited");
    else if (arg1 == ".xls")
        ui->OptionsLabel->setText("Spreadsheet");
}
