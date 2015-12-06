// unary_minus.cpp

#include <iostream>
#include "dp_exception.h"
class expression;
#include "unary.h"
#include "unary_minus.h"

unary_minus::unary_minus(expression * a_operand1)
: unary(a_operand1)
{
}

void unary_minus::output(std::ostream & a_ostream) const
{
	output_prefix(a_ostream, "-");
}
