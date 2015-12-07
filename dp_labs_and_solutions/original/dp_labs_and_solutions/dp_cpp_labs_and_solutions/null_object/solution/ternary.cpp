// ternary.cpp

class expression;
#include "ternary.h"

ternary::ternary(expression * a_operand1, expression * a_operand2, expression * a_operand3)
{
	set_operand1(a_operand1);
	set_operand2(a_operand2);
	set_operand3(a_operand3);
}

void ternary::set_operand1(expression * a_operand1)
{
	my_operand1 = a_operand1;
}

expression * ternary::get_operand1() const
{
	return my_operand1;
}

void ternary::set_operand2(expression * a_operand2)
{
	my_operand2 = a_operand2;
}

expression * ternary::get_operand2() const
{
	return my_operand2;
}

void ternary::set_operand3(expression * a_operand3)
{
	my_operand3 = a_operand3;
}

expression * ternary::get_operand3() const
{
	return my_operand3;
}
