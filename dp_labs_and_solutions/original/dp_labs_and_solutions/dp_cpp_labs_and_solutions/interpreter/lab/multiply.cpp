// multiply.cpp

#include <iostream>
#include "binary.h"
#include "dp_exception.h"
class expression;
#include "multiply.h"

multiply::multiply(expression * a_operand1, expression * a_operand2)
: binary(a_operand1, a_operand2)
{
}

void multiply::output(std::ostream & a_ostream) const
{
	output_infix(a_ostream, "*");
}
