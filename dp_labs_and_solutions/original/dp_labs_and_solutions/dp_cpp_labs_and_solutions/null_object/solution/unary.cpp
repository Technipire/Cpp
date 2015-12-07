// unary.cpp

class expression;
#include "unary.h"

unary::unary(expression * a_operand1)
{
	set_operand1(a_operand1);
}

void unary::set_operand1(expression * a_operand1)
{
	my_operand1 = a_operand1;
}

expression * unary::get_operand1() const
{
	return my_operand1;
}
