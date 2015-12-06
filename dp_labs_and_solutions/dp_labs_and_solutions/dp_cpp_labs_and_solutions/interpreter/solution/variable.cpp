// variable.cpp

#include <iostream>
#include <string>
#include "dp_map.h"
class expression;
#include "variable.h"

variable::variable(const std::string & a_name)
{
	set_name(a_name);
}

int variable::get_number_of_uses_of_variable(const std::string & a_name) const
{
	int result(0);

	if (get_name() == a_name)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}

	return result;
}

double variable::get_value(const dp_map<std::string, double> & a_map) const
{
	return a_map.get(get_name());
}

void variable::output(std::ostream & a_ostream) const
{
	a_ostream << get_name();
}

void variable::set_name(const std::string & a_name)
{
	my_name = a_name;
}

const std::string & variable::get_name() const
{
	return my_name;
}
