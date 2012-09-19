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
        showCurrentDB = true;
        lastDBFileName = "\n";
        cfgUpdate();
    }
    else
    {
        cfgFile.open(QFile::ReadOnly);
        QTextStream fin(&cfgFile);

        //initiate settings
        hideToolBar = fin.readLine().toInt();
        rememberLastDB = fin.readLine().toInt();
        showCurrentDB = fin.readLine().toInt();
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
    fout << showCurrentDB << endl;
    fout << lastDBFileName;

    cfgFile.close();
}

void cfgInterface::setToolBarState(bool hide)
{
    reInit();
    hideToolBar = hide;
    cfgUpdate();
}

bool cfgInterface::getToolBarState()
{
    reInit();
    return hideToolBar;
}

void cfgInterface::setRememberDB(bool remember)
{
    reInit();
    rememberLastDB = remember;
    cfgUpdate();
}

bool cfgInterface::getRememberDB()
{
    reInit();
    return rememberLastDB;
}

void cfgInterface::setShowCurrentDB(bool show)
{
    reInit();
    showCurrentDB = show;
    cfgUpdate();
}

bool cfgInterface::getShowCurrentDB()
{
    reInit();
    return showCurrentDB;
}

void cfgInterface::setLastDBFileName(QString openDBFileName)
{
    reInit();
    lastDBFileName = openDBFileName;
    cfgUpdate();
}

QString cfgInterface::getLastDBFileName()
{
    reInit();
    return lastDBFileName;
}
