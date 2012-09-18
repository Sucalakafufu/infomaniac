#include "cfginterface.h"

cfgInterface::cfgInterface()
{
    cfgFileName = "InfoManiac.cfg";
    QFile cfgFile(cfgFileName);

    if (!cfgFile.exists())
    {
        cfgFile.open(QFile::WriteOnly);
        cfgFile.close();
        cfgUpdate();
    }
}

void cfgInterface::cfgUpdate()
{
    //cfgFile(cfgFileName);
    cfgFile.setFileName(cfgFileName);

    cfgFile.open(QFile::WriteOnly);
    //write config
    cfgFile.close();
}
