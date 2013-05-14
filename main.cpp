#include "mainwindow.h"
#include "word.h"
#include <QApplication>
#include <iostream>
#include <QDebug>

#include <QSqlDatabase>
#include <QSqlQuery>
//#include <QtSql/QMYSQLDriver>
#include <QtSql/QODBCDriver>




using namespace std;

int main(int argc, char *argv[])
{
    /*
    QApplication frame(argc, argv);
    MainWindow w;
    w.show();
    
    return frame.exec();
    */



    QCoreApplication a(argc, argv);

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC"); // pour SQL Server, utiliser QODBC. Pour SQLite utiliser QSQLITE
      db.setHostName("172.16.82.145:1433"); //
      db.setDatabaseName("dictionary");
      db.setUserName("W2K3\Administrateur");
      db.setPassword("abcd4ABCD");

      if(db.open())
      {
          cout << "It works\n";
      }
      else
      {
          cout << "Do not work\n";
      }

      /*
        QSqlQuery query("SELECT * from MaTable");
      while(query.next()) {
        std::cout << query.value(0).toString() << std::endl;
      }*/


    /*
    Word *mot = new Word::Word("Voiture", "Véhicul possèdant 4 roues et un moteur", "nom feminin singulier");
    qDebug() << mot->getValue();
    qDebug() << mot->getDefinition();
    qDebug() << mot->getFistLetter();
    */

}
