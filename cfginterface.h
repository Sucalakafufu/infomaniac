#ifndef CFGINTERFACE_H
#define CFGINTERFACE_H

#include <QString>
#include <QFile>
#include <QTextStream>

class cfgInterface
{
public:
    cfgInterface();

    void setToolBarState(bool hide);
    bool getToolBarState();

    void setRememberDB(bool remember);
    bool getRememberDB();

    void setLastDBFileName(QString openDBFileName);
    QString getLastDBFileName();

    void setShowCurrentDB(bool show);
    bool getShowCurrentDB();

private:
    bool hideToolBar;
    bool rememberLastDB;
    bool showCurrentDB;

    QString cfgFileName,
            lastDBFileName;

    QFile cfgFile;

    void reInit();
    void cfgUpdate();
};

#endif // CFGINTERFACE_H
