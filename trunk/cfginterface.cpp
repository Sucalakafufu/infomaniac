#include "cfginterface.h"

cfgInterface::cfgInterface()
{
    cfgFileName = "InfoManiac.cfg";

    reInit();
}

void cfgInterface::reInit()
{
    QFile cfgFile(cfgFileName);
    if (!cfgFile.exists())
    {
        cfgFile.open(QFile::WriteOnly);
        cfgFile.close();

        hideToolBar = false;
        rememberLastDB = true;
        lastDBFileName = "\\0";
        cfgUpdate();
    }
    else
    {
        cfgFile.open(QFile::ReadOnly);
        QTextStream fin(&cfgFile);

        //initiate settings
        hideToolBar = fin.readLine().toInt();
        rememberLastDB = fin.readLine().toInt();
        lastDBFileName = fin.readLine();

        cfgFile.close();
    }
}

void cfgInterface::cfgUpdate()
{
    cfgFile.setFileName(cfgFileName);

    cfgFile.open(QFile::WriteOnly);
    QTextStream fout(&cfgFile);

    //write config
    fout << hideToolBar << endl;
    fout << rememberLastDB << endl;
    fout << lastDBFileName << endl;

    cfgFile.close();
}

void cfgInterface::setToolBarState(bool hide)
{
    hideToolBar = hide;
    cfgUpdate();
}

bool cfgInterface::getToolBarState()
{
    return hideToolBar;
}

void cfgInterface::setRememberDB(bool remember)
{
    rememberLastDB = remember;
    cfgUpdate();
}

bool cfgInterface::getRememberDB()
{
    return rememberLastDB;
}

void cfgInterface::setLastDBFileName(QString openDBFileName)
{
    lastDBFileName = openDBFileName;
    cfgUpdate();
}

QString cfgInterface::getLastDBFileName()
{
    return lastDBFileName;
}
