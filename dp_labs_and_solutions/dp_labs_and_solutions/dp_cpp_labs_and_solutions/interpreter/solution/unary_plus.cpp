// unary_plus.cpp

#include <iostream>
#include <string>
#include "dp_exception.h"
#include "dp_map.h"
class expression;
#include "unary.h"
#include "unary_plus.h"

unary_plus::unary_plus(expression * a_operand1)
: unary(a_operand1)
{
}

double unary_plus::get_value(const dp_map<std::string, double> & a_map) const
{
	if (get_operand1() == nullptr)
	{
		throw dp_exception("double unary_plus::get_value(dp_map<std::string, double> & a_map) const -- get_operand1() == nullptr.");
	}
	double a_value1 = get_operand1()->get_value(a_map);

	double result(+ a_value1);

	return result;
}

void unary_plus::output(std::ostream & a_ostream) const
{
	output_prefix(a_ostream, "+");
}
