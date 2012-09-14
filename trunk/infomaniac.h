#ifndef INFOMANIAC_H
#define INFOMANIAC_H

#include <QMainWindow>

namespace Ui {
class InfoManiac;
}

class InfoManiac : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit InfoManiac(QWidget *parent = 0);
    ~InfoManiac();
    
private:
    Ui::InfoManiac *ui;
};

#endif // INFOMANIAC_H
