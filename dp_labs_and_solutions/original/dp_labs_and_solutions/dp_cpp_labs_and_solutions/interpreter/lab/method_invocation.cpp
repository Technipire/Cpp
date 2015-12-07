// method_invocation.cpp

#include <cmath>
#include <iostream>
#include <string>
#include "dp_const_iterator.h"
#include "dp_exception.h"
#include "dp_iterator.h"
#include "dp_vector.h"
class expression;
#include "method_invocation.h"

method_invocation::method_invocation(const std::string & a_name)
{
	set_name(a_name);
}

int method_invocation::get_number_of_uses_of_variable(const std::string & a_name) const
{
	int result(0);

	dp_const_iterator<expression *> * a_iterator = get_operands();
	while (!a_iterator->is_done())
	{
		expression * a_operand = a_iterator->get_current();
		if (a_operand == nullptr)
		{
			throw dp_exception("int method_invocation::get_number_of_uses_of_variable(const std::string & a_name) const -- a_operand == nullptr.");
		}
		result += a_operand->get_number_of_uses_of_variable(a_name);
		a_iterator->advance();
	}

	return result;
}

void method_invocation::output(std::ostream & a_ostream) const
{
	a_ostream << get_name();
	a_ostream << "(";
	bool is_first = true;
	dp_const_iterator<expression *> * a_iterator = get_operands();
	while (!a_iterator->is_done())
	{
		if (is_first)
		{
			is_first = false;
		}
		else
		{
			a_ostream << ",";
		}
		expression * a_operand1 = a_iterator->get_current();
		if (a_operand1 == nullptr)
		{
			throw dp_exception("void method_invocation::output(std::ostream & a_ostream) const -- a_operand1 == nullptr.");
		}
		a_operand1->output(a_ostream);
		a_iterator->advance();
	}
	a_ostream << ")";
}

void method_invocation::set_name(const std::string & a_name)
{
	my_name = a_name;
}

const std::string & method_invocation::get_name() const
{
	return my_name;
}

void method_invocation::add_operand(expression * a_operand)
{
	my_operands.add(a_operand);
}

dp_const_iterator<expression *> * method_invocation::get_operands() const
{
	return my_operands.make_iterator();
}

dp_iterator<expression *> * method_invocation::get_operands()
{
	return my_operands.make_iterator();
}
