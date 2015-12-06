// binary_plus.cpp

#include <iostream>
#include "binary.h"
#include "binary_plus.h"
#include "dp_exception.h"
class expression;

binary_plus::binary_plus(expression * a_operand1, expression * a_operand2)
: binary(a_operand1, a_operand2)
{
}

void binary_plus::output(std::ostream & a_ostream) const
{
	output_infix(a_ostream, "+");
}
