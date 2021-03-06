// conditional.cpp

#include <iostream>
#include <string>
#include "conditional.h"
#include "dp_exception.h"
#include "dp_map.h"
class expression;
#include "ternary.h"

conditional::conditional(expression * a_operand1, expression * a_operand2, expression * a_operand3)
: ternary(a_operand1, a_operand2, a_operand3)
{
}

double conditional::get_value(const dp_map<std::string, double> & a_map) const
{
	if (get_operand1() == nullptr)
	{
		throw dp_exception("double conditional::get_value(dp_map<std::string, double> & a_map) const -- get_operand1() == nullptr.");
	}
	double a_value1 = get_operand1()->get_value(a_map);

	double result(0);

	if (a_value1)
	{
		if (get_operand2() == nullptr)
		{
			throw dp_exception("double conditional::get_value(dp_map<std::string, double> & a_map) const -- get_operand2() == nullptr.");
		}
		result = get_operand2()->get_value(a_map);
	}
	else
	{
		if (get_operand3() == nullptr)
		{
			throw dp_exception("double conditional::get_value(dp_map<std::string, double> & a_map) const -- get_operand3() == nullptr.");
		}
		result = get_operand3()->get_value(a_map);
	}

	return result;
}

void conditional::output(std::ostream & a_ostream) const
{
	output_infix(a_ostream, "?", ":");
}
