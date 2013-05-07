#ifndef MOTS_H
#define MOTS_H

#include <QObject>

class Mots : public QObject
{
    private:

    String mots;
    String definition;
    String type;
    String expression;

    public:
    Mots();
    ~Mots();

    String getMots();
    String getDefinition();
    String getType();
    String getExpression();

};

#endif // MOTS_H
