#include "eventswindow.h"
#include "ui_eventswindow.h"

EventsWindow::EventsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EventsWindow)
{
    ui->setupUi(this);
}

EventsWindow::~EventsWindow()
{
    delete ui;
}
