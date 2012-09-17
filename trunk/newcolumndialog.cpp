#include "newcolumndialog.h"
#include "ui_newcolumndialog.h"

NewColumnDialog::NewColumnDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewColumnDialog)
{
    setWindowFlags(Qt::Window | Qt::WindowTitleHint);
    ui->setupUi(this);

}

NewColumnDialog::~NewColumnDialog()
{
    delete ui;
}

QString NewColumnDialog::getText()
{
    return ui->NewColumnText->text();
}
