#ifndef DBINTERFACE_H
#define DBINTERFACE_H

#include "cfginterface.h"
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
    void openDB(QWidget *parent,QTableWidget *table);
    void openLastDB(QTableWidget *table);
    void newDB(QTableWidget *table);

    bool dbIsOpen();

private:
    bool dbOpen;

    QString saveTypes,
            saveAsTypes,
            openTypes,
            dialogType,
            saveFileName,
            openFileName,
            columnNumber,
            memberNumber,
            newColumnText,
            newMemberText;

    QFile dbFile;

    QVector<QString> dbColumns;
    QVector< QVector<QString> > db;        

    cfgInterface cfg;

    void saveFile(QString saveFileName);
    void openFile(QString openFileName, QTableWidget *table);
};

#endif // DBINTERFACE_H
