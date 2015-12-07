// literal.cpp

class expression;
#include "expression_visitor.h"
#include "literal.h"

literal::literal(int a_value)
{
	set_value(a_value);
}

void literal::accept(expression_visitor & a_expression_visitor)
{
	a_expression_visitor.visit(*this);
}

void literal::set_value(int a_value)
{
	my_value = a_value;
}

int literal::get_value() const
{
	return my_value;
}
