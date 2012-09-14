#include <QtGui/QApplication>
#include "infomaniac.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    InfoManiac w;
    w.show();
    
    return a.exec();
}
