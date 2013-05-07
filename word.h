#ifndef WORD_H
#define WORD_H
#include <QString>

class Word
{
   private:

    QString value;
    QString definition;
    QString type;
    QString expression;

    public:

    Word();

    QString getValue();
    QString getDefinition();
    QString getType();
    QString getExpression();

    void setValue(QString name);
    void setDefinition(QString definition);
    void setType(QString type);
    void setExpression(QString expression);



};

#endif // WORD_H
