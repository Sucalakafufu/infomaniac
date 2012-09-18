#ifndef CFGINTERFACE_H
#define CFGINTERFACE_H

#include <QString>
#include <QFile>

class cfgInterface
{
public:
    cfgInterface();

private:
    QString cfgFileName;
    QFile cfgFile;

    void cfgUpdate();
};

#endif // CFGINTERFACE_H
