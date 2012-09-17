#include "infomaniac.h"
#include "ui_infomaniac.h"
#include <QString>

//static vars
const static QString APPNAME = "InfoManiac Alpha";
const static QString VERSIONNUM = "1.0";

InfoManiac::InfoManiac(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InfoManiac)
{
    ui->setupUi(this);
    setWindowTitle(APPNAME+VERSIONNUM);
}

InfoManiac::~InfoManiac()
{
    delete ui;
}
