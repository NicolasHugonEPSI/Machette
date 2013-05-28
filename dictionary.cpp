#include "dictionary.h"
#include <QList>

Dictionary::Dictionary()
{

}

void Dictionary::addWord(Word mot)
{
    if(!isExist(mot))
    {
        this->ListWord.append(mot);
    }
    else
    {
        cout << "Le mot que vous voulez ajouter existe déjà \n";
    }
}

void Dictionary::removeWord(Word mot)
{

}

QList<QString> Dictionary::searchByFirstLetter(QString letter)
{
    QList<QString> list;

    for(int i = 0; i < this->ListWord.size();i++)
    {
        // IF FISRT LETTER == Letter en param
        //if()
//        {
            /*
             * Le mot est ajouté a list
             */
//        }

    }

    return list;
}

bool Dictionary::isExist(Word mot)
{
    bool monBooleen = false;

    for(int i = 0; i < this->ListWord.size(); i++)
    {

        /*
        if(this->ListWord.at(i).getValue() == mot.getValue())
        {
         monBooleen = true;
        }
        */
    }

   return monBooleen;
}

int Dictionary::searchOnList(string value)
{

    int cpt = 0;

    for(int i = 0; i < this->ListWord.size();i++)
    {
        /*
        if(this->ListWord.at(i).getValue() == value)
        {
         cpt = i;
        }
        */
    }

   return cpt;

}
