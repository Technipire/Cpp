// conditional.cpp

#include <iostream>
#include "conditional.h"
#include "dp_exception.h"
class expression;
#include "ternary.h"

conditional::conditional(expression * a_operand1, expression * a_operand2, expression * a_operand3)
: ternary(a_operand1, a_operand2, a_operand3)
{
}

void conditional::output(std::ostream & a_ostream) const
{
	output_infix(a_ostream, "?", ":");
}
