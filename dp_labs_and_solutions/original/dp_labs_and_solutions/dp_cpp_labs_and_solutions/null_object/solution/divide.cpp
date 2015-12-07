// divide.cpp

#include "binary.h"
#include "divide.h"
class expression;
#include "expression_visitor.h"

divide::divide(expression * a_operand1, expression * a_operand2)
: binary(a_operand1, a_operand2)
{
}

void divide::accept(expression_visitor & a_expression_visitor)
{
	a_expression_visitor.visit(*this);
}
