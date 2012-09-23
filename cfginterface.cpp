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
        ShowOpenDB = true;
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
        ShowOpenDB = fin.readLine().toInt();
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
    fout << ShowOpenDB << endl;
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

void cfgInterface::setShowOpenDB(bool show)
{
    reInit();
    ShowOpenDB = show;
    cfgUpdate();
}

bool cfgInterface::getShowOpenDB()
{
    reInit();
    return ShowOpenDB;
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
