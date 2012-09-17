#ifndef NEWCOLUMNDIALOG_H
#define NEWCOLUMNDIALOG_H

#include <QDialog>

namespace Ui {
class NewColumnDialog;
}

class NewColumnDialog : public QDialog
{
    Q_OBJECT
    
public:
    QString getText();
    explicit NewColumnDialog(QWidget *parent = 0);
    ~NewColumnDialog();
    
private slots:

private:
    Ui::NewColumnDialog *ui;
};

#endif // NEWCOLUMNDIALOG_H
