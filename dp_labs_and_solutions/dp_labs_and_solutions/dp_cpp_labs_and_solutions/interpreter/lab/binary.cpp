// binary.cpp

#include <iostream>
#include <string>
#include "binary.h"
#include "dp_exception.h"
class expression;

binary::binary(expression * a_operand1, expression * a_operand2)
{
	set_operand1(a_operand1);
	set_operand2(a_operand2);
}

int binary::get_number_of_uses_of_variable(const std::string & a_name) const
{
	int result(0);

	if (get_operand1() == nullptr)
	{
		throw dp_exception("int binary::get_number_of_uses_of_variable(const std::string & a_name) const -- get_operand1() == nullptr.");
	}
	result += get_operand1()->get_number_of_uses_of_variable(a_name);
	if (get_operand2() == nullptr)
	{
		throw dp_exception("int binary::get_number_of_uses_of_variable(const std::string & a_name) const -- get_operand2() == nullptr.");
	}
	result += get_operand2()->get_number_of_uses_of_variable(a_name);

	return result;
}

void binary::output_infix(std::ostream & a_ostream, const std::string & a_operator) const
{
	a_ostream << "(";
	if (get_operand1() == nullptr)
	{
		throw dp_exception("void binary::output_infix(std::ostream & a_ostream, const std::string & a_operator) const -- get_operand1() == nullptr.");
	}
	get_operand1()->output(a_ostream);
	a_ostream << a_operator;
	if (get_operand2() == nullptr)
	{
		throw dp_exception("void binary::output_infix(std::ostream & a_ostream, const std::string & a_operator) const -- get_operand2() == nullptr.");
	}
	get_operand2()->output(a_ostream);
	a_ostream << ")";
}

void binary::set_operand1(expression * a_operand1)
{
	my_operand1 = a_operand1;
}

double binary::get_value(dp_map<string, double> a_context)
{
	double total = 0.0;
	for(auto it = a_context.cbegin(); it != a_context.cend(); ++it)
	{
		total += it->second;
	}
	return total;
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