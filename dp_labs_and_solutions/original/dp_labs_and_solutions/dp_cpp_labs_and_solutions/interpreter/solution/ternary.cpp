// ternary.cpp

#include <iostream>
#include <string>
#include "dp_exception.h"
class expression;
#include "ternary.h"

ternary::ternary(expression * a_operand1, expression * a_operand2, expression * a_operand3)
{
	set_operand1(a_operand1);
	set_operand2(a_operand2);
	set_operand3(a_operand3);
}

int ternary::get_number_of_uses_of_variable(const std::string & a_name) const
{
	int result(0);

	if (get_operand1() == nullptr)
	{
		throw dp_exception("int ternary::get_number_of_uses_of_variable(const std::string & a_name) const -- get_operand1() == nullptr.");
	}
	result += get_operand1()->get_number_of_uses_of_variable(a_name);
	if (get_operand2() == nullptr)
	{
		throw dp_exception("int ternary::get_number_of_uses_of_variable(const std::string & a_name) const -- get_operand2() == nullptr.");
	}
	result += get_operand2()->get_number_of_uses_of_variable(a_name);
	if (get_operand3() == nullptr)
	{
		throw dp_exception("int ternary::get_number_of_uses_of_variable(const std::string & a_name) const -- get_operand3() == nullptr.");
	}
	result += get_operand3()->get_number_of_uses_of_variable(a_name);

	return result;
}

void ternary::output_infix(std::ostream & a_ostream, const std::string & a_operator1, const std::string & a_operator2) const
{
	a_ostream << "(";
	if (get_operand1() == nullptr)
	{
		throw dp_exception("void ternary::output_infix(std::ostream & a_ostream, const std::string & a_operator1, const std::string & a_operator2) const -- get_operand1() == nullptr.");
	}
	get_operand1()->output(a_ostream);
	a_ostream << a_operator1;
	if (get_operand2() == nullptr)
	{
		throw dp_exception("void ternary::output_infix(std::ostream & a_ostream, const std::string & a_operator1, const std::string & a_operator2) const -- get_operand2() == nullptr.");
	}
	get_operand2()->output(a_ostream);
	a_ostream << a_operator2;
	if (get_operand3() == nullptr)
	{
		throw dp_exception("void ternary::output_infix(std::ostream & a_ostream, const std::string & a_operator1, const std::string & a_operator2) const -- get_operand3() == nullptr.");
	}
	get_operand3()->output(a_ostream);
	a_ostream << ")";
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
