// binary.cpp

#include "binary.h"
class expression;

binary::binary(expression * a_operand1, expression * a_operand2)
{
	set_operand1(a_operand1);
	set_operand2(a_operand2);
}

void binary::set_operand1(expression * a_operand1)
{
	my_operand1 = a_operand1;
}

expression * binary::get_operand1() const
{
	return my_operand1;
}

void binary::set_operand2(expression * a_operand2)
{
	my_operand2 = a_operand2;
}

expression * binary::get_operand2() const
{
	return my_operand2;
}
