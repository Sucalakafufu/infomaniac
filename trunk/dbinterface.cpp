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

    saveFile(saveFileName, false, ".db");

}

void dbInterface::saveDBAs(QWidget *parent)
{
    dialogType = "Save Database As...";

    saveFileName = QFileDialog::getSaveFileName(parent,dialogType,QString(),saveAsTypes);

    saveFile(saveFileName, false, ".db");
}

void dbInterface::saveFile(QString saveFileName, bool exporting, QString saveType)
{
    if (!saveFileName.isEmpty())
    {
        QFile exportFile;
        if (!exporting)
        {
            dbOpen = true;
            cfg.setLastDBFileName(saveFileName);
            dbFile.setFileName(saveFileName);
            dbFile.open(QFile::WriteOnly);

            QTextStream fout(&dbFile);

            //output column amount and column data
            fout << dbColumns.size() << endl;
            for (int i = 0; i < dbColumns.size(); i++)
            {
                if (dbColumns.at(i) == "")
                    fout << "\n";
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
                        fout << "\n";
                    else
                        fout << db.at(i).at(j) << endl;
                }
            }
            dbFile.close();
        }
        else
        {
            exportFile.setFileName(saveFileName);
            exportFile.open(QFile::WriteOnly);

            QTextStream fout(&exportFile);

            if (saveType == ".txt")
            {
                for (int i = 0; i < dbColumns.size(); i++)
                {
                    if (dbColumns.at(i) == "")
                        fout << "\t\t";
                    else
                        fout << dbColumns.at(i) << "\t";
                }

                fout << endl;
                for (int i = 0; i < db.size(); i++)
                {
                    for (int j = 0; j < db.at(i).size(); j++)
                    {
                        if (db.at(i).at(j) == "")
                            fout << "\t\t";
                        else
                            fout << db.at(i).at(j) << "\t";
                    }
                    fout << endl;
                }
            }
            else if (saveType == ".csv")
            {
                for (int i = 0; i < dbColumns.size(); i++)
                {
                    if (dbColumns.at(i) == "")
                        fout << " ," ;
                    else
                        fout << dbColumns.at(i) << ",";
                }

                fout << endl;
                for (int i = 0; i < db.size(); i++)
                {
                    for (int j = 0; j < db.at(i).size(); j++)
                    {
                        if (db.at(i).at(j) == "")
                            fout << " ,";
                        else
                            fout << db.at(i).at(j) << ",";
                    }
                    fout << endl;
                }
            }
            else if (saveType == ".xls")
            {
//                <?xml version="1.0"?>
//                <Workbook xmlns="urn:schemas-microsoft-com:office:spreadsheet"
//                 xmlns:o="urn:schemas-microsoft-com:office:office"
//                 xmlns:x="urn:schemas-microsoft-com:office:excel"
//                 xmlns:ss="urn:schemas-microsoft-com:office:spreadsheet"
//                 xmlns:html="http://www.w3.org/TR/REC-html40">
//                 <Worksheet ss:Name="Sheet1">
//                  <Table ss:ExpandedColumnCount="2" ss:ExpandedRowCount="2" x:FullColumns="1"
//                   x:FullRows="1">
//                   <Row>
//                    <Cell><Data ss:Type="String">Name</Data></Cell>
//                    <Cell><Data ss:Type="String">Example</Data></Cell>
//                   </Row>
//                   <Row>
//                    <Cell><Data ss:Type="String">Value</Data></Cell>
//                    <Cell><Data ss:Type="Number">123</Data></Cell>
//                   </Row>
//                  </Table>
//                 </Worksheet>
//                </Workbook>                
            }
            exportFile.close();
        }
    }
}

bool dbInterface::openDB(QWidget *parent, QTableWidget *table)
{
    dialogType = "Open Database";
    openFileName = QFileDialog::getOpenFileName(parent,dialogType,QString(),openTypes);

    return openFile(openFileName, table);
}

bool dbInterface::openLastDB(QTableWidget *table)
{
    openFileName = cfg.getLastDBFileName();

    return openFile(openFileName, table);
}

bool dbInterface::openFile(QString openFileName, QTableWidget *table)
{
    if (!openFileName.isEmpty())
    {
        saveFileName = openFileName;
        cfg.setLastDBFileName(openFileName);
        dbFile.setFileName(openFileName);

        if (dbFile.exists())
        {
            dbOpen = true;
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
                    if (newMemberText == "\n")
                        newMemberItem->setText("");
                    else
                        newMemberItem->setText(newMemberText);
                    table->setItem(i,j,newMemberItem);
                }
            }
            table->resizeColumnsToContents();
            dbFile.close();            
        }
        return true;
    }
    return false;
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

//void dbInterface::exportDB(QWidget *parent)
//{
//    ExportDialog *exportDialog = new ExportDialog(parent);
//    exportDialog->exec();
//}

void dbInterface::exportDB(QWidget *parent, QString exportDialogType, QString exportTypes,
                           QString exportFileType, QTableWidget *exportTable)
{
    dialogType = exportDialogType;
    populateDB(exportTable);

    exportFileName = QFileDialog::getSaveFileName(parent,dialogType,QString(),exportTypes);

    saveFile(exportFileName, true, exportFileType);
}
