#ifndef WORD_H
#define WORD_H

#include <iostream>
#include <string>

using namespace std;

class Word
{
   private:

    string value;
    string definition;
    string type;
    string expression;
    string first_letter;

    public:

    Word();

    string getValue();
    string getDefinition();
    string getType();
    string getExpression();
    string  getFistLetter();


    void setValue(string name);
    void setDefinition(string definition);
    void setType(string type);
    void setExpression(string expression);

};

#endif // WORD_H
