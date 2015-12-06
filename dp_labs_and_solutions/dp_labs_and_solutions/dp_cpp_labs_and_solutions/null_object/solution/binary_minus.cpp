// binary_minus.cpp

#include "binary.h"
#include "binary_minus.h"
class expression;
#include "expression_visitor.h"

binary_minus::binary_minus(expression * a_operand1, expression * a_operand2)
: binary(a_operand1, a_operand2)
{
}

void binary_minus::accept(expression_visitor & a_expression_visitor)
{
	a_expression_visitor.visit(*this);
}
