#include "settingsdialog.h"
#include "ui_settingsdialog.h"

SettingsDialog::SettingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingsDialog)
{
    setWindowFlags(Qt::Window | Qt::WindowTitleHint);
    ui->setupUi(this);

    //initialize
    ui->OpenLastDBcheckBox->setChecked(cfg.getRememberDB());
}

SettingsDialog::~SettingsDialog()
{
    delete ui;
}

void SettingsDialog::on_SettingsDialogbuttonBox_accepted()
{
    cfg.setRememberDB(ui->OpenLastDBcheckBox->isChecked());
    close();
}
