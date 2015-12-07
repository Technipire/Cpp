// divide.cpp

#include <iostream>
#include "binary.h"
#include "divide.h"
#include "dp_exception.h"
class expression;

divide::divide(expression * a_operand1, expression * a_operand2)
: binary(a_operand1, a_operand2)
{
}

void divide::output(std::ostream & a_ostream) const
{
	output_infix(a_ostream, "/");
}
