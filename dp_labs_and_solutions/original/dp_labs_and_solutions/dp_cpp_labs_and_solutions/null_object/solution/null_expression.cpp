// null_expression.cpp

#include "expression_visitor.h"
#include "null_expression.h"

void null_expression::accept(expression_visitor & a_expression_visitor)
{
	a_expression_visitor.visit(*this);
}
