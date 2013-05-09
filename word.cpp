#include "word.h"

/*Word::Word()
{    
    this->value = "";
    this->definition = "";
    this->type = "";
    this->first_letter = "";
}
*/

Word::Word(string n_value, string n_definition, string n_type)
{
    this->value = n_value + "\n";
    this->definition.append(n_definition + "\n");
    this->type = n_type + "\n";
    this->first_letter = this->value[0];
}

qString Word::getDefinition()
{
    return this->definition;
}

qString Word::getValue()
{
    return this->value;
}

qString Word::getType()
{
    return this->type;
}

qString Word::getExpression()
{
    return this->expression;
}

qString Word::getFistLetter()
{
    return this->first_letter;
}

void Word::setDefinition(qString new_definition)
{
    this->definition = new_definition;
}

void Word::setExpression(qString new_expression)
{
    this->expression = new_expression;
}

void Word::setType(qString new_type)
{
    this->type = new_type;
}
