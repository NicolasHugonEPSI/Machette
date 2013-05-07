#ifndef MOTS_H
#define MOTS_H

#include <QObject>

class Mots
{
    private:

    QString mots;
    QString definition;
    QString type;
    QString expression;

    public:
    Mots();
    //~Mots();

    QString getMots();
    QString getDefinition();
    QString getType();
    QString getExpression();

};

#endif // MOTS_H
