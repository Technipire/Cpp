// multiply.cpp

#include "binary.h"
class expression;
#include "expression_visitor.h"
#include "multiply.h"

multiply::multiply(expression * a_operand1, expression * a_operand2)
: binary(a_operand1, a_operand2)
{
}

void multiply::accept(expression_visitor & a_expression_visitor)
{
	a_expression_visitor.visit(*this);
}
