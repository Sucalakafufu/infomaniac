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
    ui->ShowOpenDBcheckBox->setChecked(cfg.getShowOpenDB());
}

SettingsDialog::~SettingsDialog()
{
    delete ui;
}

void SettingsDialog::on_SettingsDialogButtonBox_accepted()
{
    cfg.setRememberDB(ui->OpenLastDBcheckBox->isChecked());
    cfg.setShowOpenDB(ui->ShowOpenDBcheckBox->isChecked());
    close();
}
