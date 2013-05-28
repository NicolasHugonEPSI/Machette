#include "mainwindow.h"
#include "word.h"
#include "dictionary.h"
#include <QApplication>
#include <iostream>
#include <QDebug>


#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtSql>
#include <QMessageBox>

using namespace std;

int main(int argc, char *argv[])
{
    /*
    QApplication frame(argc, argv);
    MainWindow w;
    w.show();
    
    return frame.exec();
    */

    /*
    QCoreApplication a(argc, argv);

       QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

         db.setHostName("localhost"); //Adresse IP de mon serveur
         db.setDatabaseName("dictionnary"); // Nom de ma base
         db.setUserName(""); //Nom de l'utilisateur
         db.setPassword(""); //Mot de passe

        if(db.open())
         {
            cout << "It Works";
         }
         else
         {
             cout << "Do not work \n";
         }

    */

     Word *mot = new Word::Word("Voiture", "Véhicule possèdant 4 roues et un moteur", "nom feminin singulier");
     Dictionary *dico = new Dictionary();

     dico->addWord(*mot);


//    mot->setDefinition("Test");
//    cout << mot->getDefinitionSize();
//    qDebug() << mot->getValue();
//    qDebug() << mot->getType();
//    qDebug() << mot->getDefinition();
//    qDebug() << mot->getFistLetter();


}
