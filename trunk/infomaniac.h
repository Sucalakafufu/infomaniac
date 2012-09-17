#ifndef INFOMANIAC_H
#define INFOMANIAC_H

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

private:
    Ui::InfoManiac *ui;
};

#endif // INFOMANIAC_H
