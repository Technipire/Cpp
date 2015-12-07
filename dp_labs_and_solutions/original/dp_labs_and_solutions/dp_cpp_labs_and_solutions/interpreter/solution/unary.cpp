// unary.cpp

#include <iostream>
#include <string>
#include "dp_exception.h"
class expression;
#include "unary.h"

unary::unary(expression * a_operand1)
{
	set_operand1(a_operand1);
}

int unary::get_number_of_uses_of_variable(const std::string & a_name) const
{
	int result(0);

	if (get_operand1() == nullptr)
	{
		throw dp_exception("int unary::get_number_of_uses_of_variable(const std::string & a_name) const -- get_operand1() == nullptr.");
	}
	result += get_operand1()->get_number_of_uses_of_variable(a_name);

	return result;
}

void unary::output_prefix(std::ostream & a_ostream, const std::string & a_operator) const
{
	a_ostream << "(";
	a_ostream << a_operator;
	if (get_operand1() == nullptr)
	{
		throw dp_exception("void unary::output_prefix(std::ostream & a_ostream, const std::string & a_operator) const -- get_operand1() == nullptr.");
	}
	get_operand1()->output(a_ostream);
	a_ostream << ")";
}

void unary::output_postfix(std::ostream & a_ostream, const std::string & a_operator) const
{
	a_ostream << "(";
	if (get_operand1() == nullptr)
	{
		throw dp_exception("void unary::output_postfix(std::ostream & a_ostream, const std::string & a_operator) const -- get_operand1() == nullptr.");
	}
	get_operand1()->output(a_ostream);
	a_ostream << a_operator;
	a_ostream << ")";
}

void unary::set_operand1(expression * a_operand1)
{
	my_operand1 = a_operand1;
}

expression * unary::get_operand1() const
{
	return my_operand1;
}
