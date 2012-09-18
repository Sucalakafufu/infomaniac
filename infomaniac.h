#ifndef INFOMANIAC_H
#define INFOMANIAC_H

#include "errordialog.h"
#include "newcolumndialog.h"
#include "dbinterface.h"
#include <QMainWindow>
#include <QString>

namespace Ui {
class InfoManiac;
}

class InfoManiac : public QMainWindow
{
    Q_OBJECT

public:
    explicit InfoManiac(QWidget *parent = 0);
    ~InfoManiac();

private slots:
    void on_actionNewMember_triggered();

    void on_actionRemoveMember_triggered();

    void on_actionNewColumn_triggered();

    void on_actionRemoveColumn_triggered();

    void on_actionSave_triggered();

    void on_actionOpen_triggered();

private:
    Ui::InfoManiac *ui;

    dbInterface db;
};

#endif // INFOMANIAC_H
