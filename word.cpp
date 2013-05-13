#include "word.h"

/*Word::Word()
{    
    this->value = "";
    this->definition = "";
    this->type = "";
    this->first_letter = "";
}
*/

Word::Word(QString n_value, QString n_definition, QString n_type)
{
    this->value = n_value;
    this->definition.append(n_definition);
    this->type = n_type;
    this->first_letter = this->value[0];
}

QString Word::getDefinition()
{
    return this->definition.takeFirst();
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
