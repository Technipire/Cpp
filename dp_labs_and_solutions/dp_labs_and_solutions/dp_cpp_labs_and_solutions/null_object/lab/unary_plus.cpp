// unary_plus.cpp

class expression;
#include "expression_visitor.h"
#include "unary.h"
#include "unary_plus.h"

unary_plus::unary_plus(expression * a_operand1)
: unary(a_operand1)
{
}

void unary_plus::accept(expression_visitor & a_expression_visitor)
{
	a_expression_visitor.visit(*this);
}
