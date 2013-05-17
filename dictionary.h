#ifndef DICTIONARY_H
#define DICTIONARY_H

#include<QList.h>
#include<word.h>

class Dictionary
{
    private:

    QList<Word> ListWord;

    public:

    Dictionary();


    void addWord(Word mot);
    void removeWord(Word mot);

    QString searchByFirstLetter(QString letter);

    bool isExist(Word mot);


};

#endif // DICTIONARY_H
