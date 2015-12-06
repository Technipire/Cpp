// binary_minus.cpp

#include <iostream>
#include "binary.h"
#include "binary_minus.h"
#include "dp_exception.h"
class expression;

binary_minus::binary_minus(expression * a_operand1, expression * a_operand2)
: binary(a_operand1, a_operand2)
{
}

void binary_minus::output(std::ostream & a_ostream) const
{
	output_infix(a_ostream, "-");
}
