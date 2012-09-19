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

    db.exportDB(this, exportDialogType, exportTypes, fileType, exportTable);
}

void ExportDialog::on_ExportDialogButtonBox_accepted()
{
    exportDB(ui->OptionsComboBox->currentText());
}

void ExportDialog::on_OptionsComboBox_currentIndexChanged(const QString &arg1)
{
    if (arg1 == ".txt")
        ui->OptionsLabel->setText("Text File");
}
