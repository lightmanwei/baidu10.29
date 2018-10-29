#include "mainwindow.h"
#include <QApplication>
#include "client.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    client w2;
    w.show();
    w2.show();


    return a.exec();
}
