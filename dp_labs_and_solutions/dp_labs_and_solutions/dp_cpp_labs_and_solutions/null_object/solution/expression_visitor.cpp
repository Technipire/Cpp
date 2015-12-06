// expression_visitor.cpp

#include "binary_minus.h"
#include "binary_plus.h"
#include "conditional.h"
#include "divide.h"
#include "dp_iterator.h"
#include "expression_visitor.h"
#include "literal.h"
#include "method_invocation.h"
#include "multiply.h"
#include "null_expression.h"
#include "unary_minus.h"
#include "unary_plus.h"
#include "variable.h"

void expression_visitor::visit(binary_minus & a_binary_minus)
{
	a_binary_minus.get_operand1()->accept(*this);
	a_binary_minus.get_operand2()->accept(*this);
}

void expression_visitor::visit(binary_plus & a_binary_plus)
{
	a_binary_plus.get_operand1()->accept(*this);
	a_binary_plus.get_operand2()->accept(*this);
}

void expression_visitor::visit(conditional & a_conditional)
{
	a_conditional.get_operand1()->accept(*this);
	a_conditional.get_operand2()->accept(*this);
	a_conditional.get_operand3()->accept(*this);
}

void expression_visitor::visit(divide & a_divide)
{
	a_divide.get_operand1()->accept(*this);
	a_divide.get_operand2()->accept(*this);
}

void expression_visitor::visit(literal & a_literal)
{
}

void expression_visitor::visit(method_invocation & a_method_invocation)
{
	dp_iterator<expression *> * a_iterator = a_method_invocation.get_operands();
	while (!a_iterator->is_done())
	{
		expression * a_operand = a_iterator->get_current();
		a_operand->accept(*this);
		a_iterator->advance();
	}
}

void expression_visitor::visit(multiply & a_multiply)
{
	a_multiply.get_operand1()->accept(*this);
	a_multiply.get_operand2()->accept(*this);
}

void expression_visitor::visit(null_expression & a_null_expression)
{
}

void expression_visitor::visit(unary_minus & a_unary_minus)
{
	a_unary_minus.get_operand1()->accept(*this);
}

void expression_visitor::visit(unary_plus & a_unary_plus)
{
	a_unary_plus.get_operand1()->accept(*this);
}

void expression_visitor::visit(variable & a_variable)
{
}
