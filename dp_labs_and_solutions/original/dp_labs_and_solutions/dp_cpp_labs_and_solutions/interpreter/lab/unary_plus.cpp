// unary_plus.cpp

#include <iostream>
#include "dp_exception.h"
class expression;
#include "unary.h"
#include "unary_plus.h"

unary_plus::unary_plus(expression * a_operand1)
: unary(a_operand1)
{
}

void unary_plus::output(std::ostream & a_ostream) const
{
	output_prefix(a_ostream, "+");
}
