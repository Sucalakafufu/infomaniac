#ifndef DBINTERFACE_H
#define DBINTERFACE_H

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
    void openDB(QWidget *parent,QTableWidget *table);

private:
    QString saveTypes,
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
};

#endif // DBINTERFACE_H
