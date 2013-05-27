#ifndef WORD_H
#define WORD_H

#include <iostream>
#include <QString>
#include <QList>


using namespace std;

class Word
{
   private:

    QString value;
    QList<QString> definition;
    QString type;
    QString expression;
    QString first_letter;

    public:

   // ~Word();
    Word(QString value, QString definition, QString type);

    QString getValue();
    QString getDefinition();
    QString getType();
    QString getExpression();
    QString getFistLetter();
    int getDefinitionSize();

    void setValue(QString name);
    void setDefinition(QString definition);
    void setType(QString type);
    void setExpression(QString expression);
    void removeDefinition(int i);

};

#endif // WORD_H
