#ifndef ERRORDIALOG_H
#define ERRORDIALOG_H

#include <QDialog>

namespace Ui {
class ErrorDialog;
}

class ErrorDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit ErrorDialog(QWidget *parent = 0);
    ~ErrorDialog();

    void setErrorMessage(QString);
    
private:
    Ui::ErrorDialog *ui;
};

#endif // ERRORDIALOG_H
