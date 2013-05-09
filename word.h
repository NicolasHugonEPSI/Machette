#ifndef WORD_H
#define WORD_H

#include <iostream>
#include <qString>
#include <qList>

using namespace std;

class Word
{
   private:

    qString value;
    qList<qString> definition;
    qString type;
    qString expression;
    qString first_letter;

    public:

    //Word();
    Word(string value, string definition, string type);

    qString getValue();
    qString getDefinition();
    qString getType();
    qString getExpression();
    qString  getFistLetter();


    void setValue(qString name);
    void setDefinition(qString definition);
    void setType(qString type);
    void setExpression(qString expression);

};

#endif // WORD_H
