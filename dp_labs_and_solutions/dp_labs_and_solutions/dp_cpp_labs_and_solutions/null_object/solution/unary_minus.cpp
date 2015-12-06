// unary_minus.cpp

class expression;
#include "expression_visitor.h"
#include "unary.h"
#include "unary_minus.h"

unary_minus::unary_minus(expression * a_operand1)
: unary(a_operand1)
{
}

void unary_minus::accept(expression_visitor & a_expression_visitor)
{
	a_expression_visitor.visit(*this);
}
