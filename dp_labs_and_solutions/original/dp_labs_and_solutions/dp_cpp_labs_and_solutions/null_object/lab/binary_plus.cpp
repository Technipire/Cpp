// binary_plus.cpp

#include "binary.h"
#include "binary_plus.h"
class expression;
#include "expression_visitor.h"

binary_plus::binary_plus(expression * a_operand1, expression * a_operand2)
: binary(a_operand1, a_operand2)
{
}

void binary_plus::accept(expression_visitor & a_expression_visitor)
{
	a_expression_visitor.visit(*this);
}
