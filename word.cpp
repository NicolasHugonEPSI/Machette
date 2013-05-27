#include "word.h"

Word::Word(QString n_value, QString n_definition, QString n_type)
{
    this->value = n_value;
    this->definition.append(n_definition);
    this->type = n_type;
    this->first_letter = this->value[0];
}

QString Word::getDefinition()
{
    QString value;

    for(int i = 0; i < this->getDefinitionSize(); i++)
    {
        value += this->definition.value(i) +'\n';
    }

    return value;
}

QString Word::getValue()
{
    return this->value;
}

QString Word::getType()
{
    return this->type;
}

QString Word::getExpression()
{
    return this->expression;
}

QString Word::getFistLetter()
{
    return this->first_letter;
}

int Word::getDefinitionSize()
{
    return this->definition.size();
}

void Word::setDefinition(QString new_definition)
{
    this->definition.append(new_definition);
}

void Word::setExpression(QString new_expression)
{
    this->expression = new_expression;
}

void Word::setType(QString new_type)
{
    this->type = new_type;
}

void Word::removeDefinition(int i)
{
    this->definition.removeAt(i);
}

