#ifndef CFGINTERFACE_H
#define CFGINTERFACE_H

#include <QString>
#include <QFile>
#include <QTextStream>

class cfgInterface
{
public:
    cfgInterface();

    void reInit();

    void setToolBarState(bool hide);
    bool getToolBarState();

    void setRememberDB(bool remember);
    bool getRememberDB();

    void setLastDBFileName(QString openDBFileName);
    QString getLastDBFileName();

private:
    bool hideToolBar;
    bool rememberLastDB;

    QString cfgFileName,
            lastDBFileName;

    QFile cfgFile;

    void cfgUpdate();
};

#endif // CFGINTERFACE_H
