// binary_plus.cpp

#include <iostream>
#include <string>
#include "binary.h"
#include "binary_plus.h"
#include "dp_exception.h"
#include "dp_map.h"
class expression;

binary_plus::binary_plus(expression * a_operand1, expression * a_operand2)
: binary(a_operand1, a_operand2)
{
}

double binary_plus::get_value(const dp_map<std::string, double> & a_map) const
{
	if (get_operand1() == nullptr)
	{
		throw dp_exception("double binary_plus::get_value(dp_map<std::string, double> & a_map) const -- get_operand1() == nullptr.");
	}
	double a_value1 = get_operand1()->get_value(a_map);

	if (get_operand2() == nullptr)
	{
		throw dp_exception("double binary_plus::get_value(dp_map<std::string, double> & a_map) const -- get_operand2() == nullptr.");
	}
	double a_value2 = get_operand2()->get_value(a_map);

	double result(a_value1 + a_value2);

	return result;
}

void binary_plus::output(std::ostream & a_ostream) const
{
	output_infix(a_ostream, "+");
}