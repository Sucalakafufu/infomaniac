#include "errordialog.h"
#include "ui_errordialog.h"

ErrorDialog::ErrorDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ErrorDialog)
{
    setWindowFlags(Qt::Window | Qt::WindowCloseButtonHint);
    ui->setupUi(this);
}

ErrorDialog::~ErrorDialog()
{
    delete ui;
}

void ErrorDialog::setErrorMessage(QString message)
{
    ui->ErrorMessage->setText(message);
}
