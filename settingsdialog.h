#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include "cfginterface.h"
#include <QDialog>

namespace Ui {
class SettingsDialog;
}

class SettingsDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit SettingsDialog(QWidget *parent = 0);
    ~SettingsDialog();
    
private slots:
    void on_SettingsDialogButtonBox_accepted();

private:
    Ui::SettingsDialog *ui;

    cfgInterface cfg;
};

#endif // SETTINGSDIALOG_H
