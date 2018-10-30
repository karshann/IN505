#include "appliaction.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Appliaction w;
    w.show();

    return a.exec();
}
