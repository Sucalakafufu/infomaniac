#ifndef EXPORTDIALOG_H
#define EXPORTDIALOG_H

#include "dbinterface.h"
#include <QDialog>
#include <QFile>

namespace Ui {
class ExportDialog;
}

class ExportDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit ExportDialog(QWidget *parent = 0, QTableWidget *table = 0);
    ~ExportDialog();
    
private slots:
    void on_ExportDialogButtonBox_accepted();

    void on_OptionsComboBox_currentIndexChanged(const QString &arg1);

private:
    Ui::ExportDialog *ui;

    QTableWidget *exportTable;

    dbInterface db;

    void exportDB(QString fileType);
};

#endif // EXPORTDIALOG_H
