#include "mainwindow.h"
#include "word.h"
#include <QApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    /*QApplication frame(argc, argv);
    MainWindow w;
    w.show();
    
    return frame.exec();
    */

    Word mot;

   cout << mot.getDefinition();

   mot.setDefinition("Une voiture c'est trop un truc de bogoss\n");

   cout << mot.getValue();
   cout << mot.getDefinition();
   cout << mot.getFistLetter();
}
