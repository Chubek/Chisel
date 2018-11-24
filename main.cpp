#include "chisel.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Chisel w;
    w.show();

    return a.exec();
}
