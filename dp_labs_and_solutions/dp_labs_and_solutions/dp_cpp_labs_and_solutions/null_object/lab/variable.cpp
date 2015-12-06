// variable.cpp

#include <string>
class expression;
#include "expression_visitor.h"
#include "variable.h"

variable::variable(const std::string & a_name)
{
	set_name(a_name);
}

void variable::accept(expression_visitor & a_expression_visitor)
{
	a_expression_visitor.visit(*this);
}

void variable::set_name(const std::string & a_name)
{
	my_name = a_name;
}

const std::string & variable::get_name() const
{
	return my_name;
}
