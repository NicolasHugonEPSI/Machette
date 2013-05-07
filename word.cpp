#include "word.h"

Word::Word()
{    
    this->value = "voiture\n";
    this->definition = "véhicule muni de roues et destiné au transport\n";
    this->first_letter = "v\n";
    this->type = "Nom féminin singulier\n";
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
