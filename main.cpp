#include "mainwindow.h"
#include "word.h"
#include <QApplication>
#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    /*QApplication frame(argc, argv);
    MainWindow w;
    w.show();
    
    return frame.exec();
    */

    Word *mot = new Word("Cheval", "Animal qui ne sers a rien", "nom masculin singulier");

    /*

    qDebug() << mot->getValue();
    qDebug() << mot->getDefinition();
    qDebug() << mot->getFistLetter();

    */
}
