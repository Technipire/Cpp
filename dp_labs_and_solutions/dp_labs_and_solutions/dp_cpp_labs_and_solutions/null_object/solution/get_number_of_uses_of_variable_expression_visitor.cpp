// get_number_of_uses_of_variable_expression_visitor.cpp

#include <string>
#include "expression_visitor.h"
#include "get_number_of_uses_of_variable_expression_visitor.h"
#include "variable.h"

get_number_of_uses_of_variable_expression_visitor::get_number_of_uses_of_variable_expression_visitor(const std::string & a_name)
: my_name(a_name), my_number_of_uses_of_variable(0)
{
}

void get_number_of_uses_of_variable_expression_visitor::visit(variable & a_variable)
{
	if (a_variable.get_name() == my_name)
	{
		++my_number_of_uses_of_variable;
	}
}

int get_number_of_uses_of_variable_expression_visitor::get_number_of_uses_of_variable() const
{
	return my_number_of_uses_of_variable;
}
