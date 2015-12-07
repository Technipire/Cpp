// conditional.cpp

#include "conditional.h"
class expression;
#include "expression_visitor.h"
#include "ternary.h"

conditional::conditional(expression * a_operand1, expression * a_operand2, expression * a_operand3)
: ternary(a_operand1, a_operand2, a_operand3)
{
}

void conditional::accept(expression_visitor & a_expression_visitor)
{
	a_expression_visitor.visit(*this);
}
