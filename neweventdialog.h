#ifndef NEWEVENTDIALOG_H
#define NEWEVENTDIALOG_H

#include <QDialog>

namespace Ui {
class neweventdialog;
}

class neweventdialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit neweventdialog(QWidget *parent = 0);
    ~neweventdialog();
    
private:
    Ui::neweventdialog *ui;
};

#endif // NEWEVENTDIALOG_H
