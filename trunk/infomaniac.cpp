#include "infomaniac.h"
#include "ui_infomaniac.h"

InfoManiac::InfoManiac(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InfoManiac)
{
    ui->setupUi(this);
}

InfoManiac::~InfoManiac()
{
    delete ui;
}
