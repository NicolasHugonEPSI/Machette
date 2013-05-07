#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication frame(argc, argv);
    MainWindow w;
    w.show();
    
    return frame.exec();
}
