#include "word.h"

Word::Word()
{    
    this->value = "";
    this->definition = "";
    this->type = "";
    this->first_letter = "";
}

Word::Word(string n_value, string n_definition, string n_type)
{
    this->value = n_value + "\n";
    this->definition = n_definition + "\n";
    this->type = n_type + "\n";
    this->first_letter = this->value[0];
}

string Word::getDefinition()
{
    return this->definition;
}

string Word::getValue()
{
    return this->value;
}

string Word::getType()
{
    return this->type;
}

string Word::getExpression()
{
    return this->expression;
}

string Word::getFistLetter()
{
    return this->first_letter;
}

void Word::setDefinition(string new_definition)
{
    this->definition = new_definition;
}

void Word::setExpression(string new_expression)
{
    this->expression = new_expression;
}

void Word::setType(string new_type)
{
    this->type = new_type;
}
