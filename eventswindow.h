#ifndef EVENTSWINDOW_H
#define EVENTSWINDOW_H

#include <QMainWindow>

namespace Ui {
class EventsWindow;
}

class EventsWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit EventsWindow(QWidget *parent = 0);
    ~EventsWindow();
    
private:
    Ui::EventsWindow *ui;
};

#endif // EVENTSWINDOW_H
