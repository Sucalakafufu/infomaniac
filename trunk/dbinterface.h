#ifndef DBINTERFACE_H
#define DBINTERFACE_H

#include "cfginterface.h"
//#include "exportdialog.h"
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QVector>
#include <QTableWidget>

class dbInterface
{
public:
    dbInterface();

    void populateDB(QTableWidget *table);
    void saveDB(QWidget *parent);
    void saveDBAs(QWidget *parent);
    bool openDB(QWidget *parent,QTableWidget *table);
    bool openLastDB(QTableWidget *table);
    void newDB(QTableWidget *table);
    //void exportDB(QWidget *parent);
    void exportDB(QWidget *parent, QString exportDialogType, QString exportTypes,
                  QString exportFileType, QTableWidget *exportTable);

    bool dbIsOpen();

private:
    bool dbOpen;

    QString saveTypes,
            saveAsTypes,
            openTypes,
            dialogType,
            saveFileName,
            openFileName,
            exportFileName,
            columnNumber,
            memberNumber,
            newColumnText,
            newMemberText;

    QFile dbFile;

    QVector<QString> dbColumns;
    QVector< QVector<QString> > db;        

    cfgInterface cfg;

    void saveFile(QString saveFileName, bool exporting, QString saveType);
    bool openFile(QString openFileName, QTableWidget *table);
};

#endif // DBINTERFACE_H
