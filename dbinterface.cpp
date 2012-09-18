#include "dbinterface.h"

dbInterface::dbInterface()
{
    dbOpen = false;
    saveTypes = "DataBase Files(*.db)\0*.db\0";
    saveAsTypes = "DataBase Files(*.db)\0*.db\0";
    openTypes = "DataBase Files(*.db)\0*.db\0";
}

bool dbInterface::dbIsOpen()
{
    return dbOpen;
}

void dbInterface::populateDB(QTableWidget *table)
{
    dbColumns.clear();
    db.clear();

    QVector<QString> tempDB;

    //save column names
    for (int i = 0; i < table->columnCount(); i++)
    {
        dbColumns.append(table->horizontalHeaderItem(i)->text());
    }

    for (int i = 0; i < table->rowCount(); i++)
    {
        for (int j = 0; j < table->columnCount(); j++)
        {
            if (table->item(i,j) == 0)
                tempDB.append("");
            else
                tempDB.append(table->item(i,j)->text());
        }
        db.append(tempDB);
        tempDB.clear();
    }
}

void dbInterface::saveDB(QWidget *parent)
{
    dialogType = "Save Database";
    if (!dbOpen)
        saveFileName = QFileDialog::getSaveFileName(parent,dialogType,QString(),saveTypes);

    saveFile(saveFileName);

}

void dbInterface::saveDBAs(QWidget *parent)
{
    dialogType = "Save Database As...";

    saveFileName = QFileDialog::getSaveFileName(parent,dialogType,QString(),saveAsTypes);

    saveFile(saveFileName);
}

void dbInterface::saveFile(QString saveFileName)
{
    if (!saveFileName.isEmpty())
    {
        dbOpen = true;

        //dbFile(saveFileName);
        dbFile.setFileName(saveFileName);
        dbFile.open(QFile::WriteOnly);

        QTextStream fout(&dbFile);

        //output column amount and column data
        fout << dbColumns.size() << endl;
        for (int i = 0; i < dbColumns.size(); i++)
        {
            if (dbColumns.at(i) == "")
                fout << "\\0\n";
            else
                fout << dbColumns.at(i) << endl;
        }

        //output member amount and member data
        fout << db.size() << endl;
        for (int i = 0; i < db.size(); i++)
        {
            for (int j = 0; j < db.at(i).size(); j++)
            {
                if (db.at(i).at(j) == "")
                    fout << "\\0\n";
                else
                    fout << db.at(i).at(j) << endl;
            }
        }

        dbFile.close();
    }
}

void dbInterface::openDB(QWidget *parent, QTableWidget *table)
{
    dialogType = "Open Database";
    openFileName = QFileDialog::getOpenFileName(parent,dialogType,QString(),openTypes);

    openFile(openFileName, table);
}

void dbInterface::openLastDB(QTableWidget *table)
{
    openFileName = cfg.getLastDBFileName();

    openFile(openFileName, table);
}

void dbInterface::openFile(QString openFileName, QTableWidget *table)
{
    if (!openFileName.isEmpty())
    {
        dbOpen = true;
        saveFileName = openFileName;
        cfg.setLastDBFileName(openFileName);
        dbFile.setFileName(openFileName);

        if (dbFile.exists())
        {
            dbFile.open(QFile::ReadOnly);

            QTextStream fin(&dbFile);

            table->clear();
            //input column amount and column data
            columnNumber = fin.readLine();
            table->setColumnCount(columnNumber.toInt());
            for (int i = 0; i < columnNumber.toInt(); i++)
            {
                QTableWidgetItem *newColumnItem = new QTableWidgetItem();
                newColumnText = fin.readLine();
                newColumnItem->setText(newColumnText);
                table->setHorizontalHeaderItem(i,newColumnItem);
            }

            //input member amount and member data
            memberNumber = fin.readLine();
            table->setRowCount(memberNumber.toInt());
            for (int i = 0; i < memberNumber.toInt(); i++)
            {
                for (int j = 0; j < columnNumber.toInt(); j++)
                {
                    QTableWidgetItem *newMemberItem = new QTableWidgetItem();
                    newMemberText = fin.readLine();
                    newMemberItem->setText(newMemberText);
                    table->setItem(i,j,newMemberItem);
                }
            }
            dbFile.close();
        }
    }
}

void dbInterface::newDB(QTableWidget *table)
{
    dbOpen = false;

    table->setRowCount(0);
    table->setColumnCount(2);
    QTableWidgetItem *newColumnItem = new QTableWidgetItem();
    newColumnItem->setText("First Name");
    table->setHorizontalHeaderItem(0,newColumnItem);
    QTableWidgetItem *newColumnItem2 = new QTableWidgetItem();
    newColumnItem2->setText("Last Name");
    table->setHorizontalHeaderItem(1,newColumnItem2);
}
