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

    Word *mot = new Word("Cheval", "Animal qui ne sers a rien", "nom masculin singulier");

   cout << mot->getValue();
   cout << mot->getDefinition();
   cout << mot->getFistLetter();
}
