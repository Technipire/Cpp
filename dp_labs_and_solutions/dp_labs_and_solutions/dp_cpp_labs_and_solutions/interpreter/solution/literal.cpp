// literal.cpp

#include <iostream>
#include <string>
#include "dp_map.h"
class expression;
#include "literal.h"

literal::literal(int a_value)
{
	set_value(a_value);
}

int literal::get_number_of_uses_of_variable(const std::string & a_name) const
{
	int result(0);

	return result;
}

double literal::get_value(const dp_map<std::string, double> & a_map) const
{
	return get_value();
}

void literal::output(std::ostream & a_ostream) const
{
	a_ostream << get_value();
}

void literal::set_value(int a_value)
{
	my_value = a_value;
}

int literal::get_value() const
{
	return my_value;
}
