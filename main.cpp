#include "word.h"
#include <iostream>


#include <QApplication>
#include <QTextEdit>   // Nous allons afficher le contenu du fichier ^^
#include <QFile>       // Pour utiliser le fichier
#include <QString>     // Stocke le contenu du fichier
#include <QTextStream> // Flux sortant du fichier
#include <QInputDialog>
#include <QIODevice>
#include <QMessageBox>

using namespace std;

int main(int argc, char **argv)
{

//------------------- Lire dans un ficher
//    QApplication a(argc, argv);
//    QTextEdit zoneTexte;
//    zoneTexte.setGeometry(100,100,400,200);
//    zoneTexte.setReadOnly(true);

//    QString texte;
//    QFile fichier("file.txt");
//    if(fichier.open(QIODevice::ReadOnly | QIODevice::Text))
//    {
//        QTextStream flux(&fichier);
//        while(!flux.atEnd())
//        {
//            texte += flux.readLine() + '\n';
//        }

//        texte.resize(texte.size()-1); // Élimine le '\n' en trop
//        fichier.close();
//    }
//    else texte = "Impossible d'ouvrir le fichier !";

//    zoneTexte.setText(texte);
//    zoneTexte.show();
//    return a.exec();
//----------------------------------------

//------------------ Ecrire dans un fichier


    QApplication app(argc, argv);

        QString chemin, texte;

        while((chemin = QInputDialog::getText(NULL,"Fichier","Quel est le chemin du fichier ?")).isEmpty())
            QMessageBox::critical(NULL,"Erreur","Aucun chemin n'a été spécifié !");

        while((texte = QInputDialog::getText(NULL, "Texte", "Que voulez-vous écrire dans "+chemin.toLatin1())).isEmpty())
            QMessageBox::critical(NULL,"Erreur","Aucun texte n'a été spécifié !");

        QFile fichier(chemin);
        fichier.open(QIODevice::WriteOnly | QIODevice::Text);
        fichier.write(texte.toLatin1(),texte.size());
        fichier.close();

        exit(0);
//-------------------------------------


//---------------Copier un fichier
//        if(!fichier.copy("copie.txt"))
//            QMessageBox::critical(NULL,"Erreur","Impossible de copier poeme.txt");
//------------------------------

//    Word *mot = new Word::Word("Voiture", "Véhicule possèdant 4 roues et un moteur", "nom feminin singulier");

//    mot->setDefinition("Test");
//    cout << mot->getDefinitionSize();
//    qDebug() << mot->getValue();
//    qDebug() << mot->getType();
//    qDebug() << mot->getDefinition();
//    qDebug() << mot->getFistLetter();


}
