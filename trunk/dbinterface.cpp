#include "dbinterface.h"

dbInterface::dbInterface()
{
    saveTypes = "DataBase Files(*.db)\0*.db\0";
    openTypes = "DataBase Files(*.db)\0*.db\0";
}

void dbInterface::populateDB(QTableWidget *table)
{
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
    saveFileName = QFileDialog::getSaveFileName(parent,dialogType,QString(),saveTypes);

    if (!saveFileName.isEmpty())
    {
        //dbFile(saveFileName);
        dbFile.setFileName(saveFileName);
        dbFile.open(QFile::WriteOnly);

        QTextStream fout(&dbFile);

        fout << dbColumns.size() << endl;
        for (int i = 0; i < dbColumns.size(); i++)
        {
            if (dbColumns.at(i) == "")
                fout << "\\0\n";
            else
                fout << dbColumns.at(i) << endl;
        }

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

    if (!openFileName.isEmpty())
    {
        dbFile.setFileName(openFileName);
        dbFile.open(QFile::ReadOnly);

        QTextStream fin(&dbFile);

        columnNumber = fin.readLine();
        table->setColumnCount(columnNumber.toInt());
        for (int i = 0; i < columnNumber.toInt(); i++)
        {
            QTableWidgetItem *newColumnItem = new QTableWidgetItem();
            newColumnText = fin.readLine();
            newColumnItem->setText(newColumnText);
            table->setHorizontalHeaderItem(i,newColumnItem);
        }

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
    }
}
