#ifndef DICTIONARY_H
#define DICTIONARY_H

#include<word.h>

class Dictionary
{
    private:

    QList<Word> ListWord;

    public:

    Dictionary();


    void addWord(Word mot);
    void removeWord(Word mot);

    QList<QString> searchByFirstLetter(QString letter);

    bool isExist(Word mot);
    int searchOnList(string value);


};

#endif // DICTIONARY_H
