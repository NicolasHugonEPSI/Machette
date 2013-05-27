#include "mainwindow.h"
#include "word.h"
#include <QApplication>
#include <iostream>
#include <QDebug>






using namespace std;

int main(int argc, char *argv[])
{
    /*
    QApplication frame(argc, argv);
    MainWindow w;
    w.show();
    
    return frame.exec();
    */


    Word *mot = new Word::Word("Voiture", "Véhicule possèdant 4 roues et un moteur", "nom feminin singulier");

    mot->setDefinition("Test");
    cout << mot->getDefinitionSize();
    qDebug() << mot->getValue();
    qDebug() << mot->getType();
    qDebug() << mot->getDefinition();
    qDebug() << mot->getFistLetter();


}
