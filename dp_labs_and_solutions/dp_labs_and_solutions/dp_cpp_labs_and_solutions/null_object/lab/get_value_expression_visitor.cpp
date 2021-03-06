// get_value_expression_visitor.cpp

#include <cmath>
#include <string>
#include "binary_minus.h"
#include "binary_plus.h"
#include "conditional.h"
#include "divide.h"
#include "dp_exception.h"
#include "dp_iterator.h"
#include "dp_map.h"
#include "expression_visitor.h"
#include "get_value_expression_visitor.h"
#include "literal.h"
#include "method_invocation.h"
#include "multiply.h"
#include "unary_minus.h"
#include "unary_plus.h"
#include "variable.h"

get_value_expression_visitor::get_value_expression_visitor(const dp_map<std::string, double> & a_map)
: my_map(a_map), my_value(0)
{
}

void get_value_expression_visitor::visit(binary_minus & a_binary_minus)
{
	if (a_binary_minus.get_operand1() == nullptr)
	{
		throw dp_exception("void get_value_expression_visitor::visit(binary_minus & a_binary_minus) -- a_binary_minus.get_operand1() == nullptr.");
	}
	a_binary_minus.get_operand1()->accept(*this);
	double a_value1 = get_value();

	if (a_binary_minus.get_operand2() == nullptr)
	{
		throw dp_exception("void get_value_expression_visitor::visit(binary_minus & a_binary_minus) -- a_binary_minus.get_operand2() == nullptr.");
	}
	a_binary_minus.get_operand2()->accept(*this);
	double a_value2 = get_value();

	set_value(a_value1 - a_value2);
}

void get_value_expression_visitor::visit(binary_plus & a_binary_plus)
{
	if (a_binary_plus.get_operand1() == nullptr)
	{
		throw dp_exception("void get_value_expression_visitor::visit(binary_plus & a_binary_plus) -- a_binary_plus.get_operand1() == nullptr.");
	}
	a_binary_plus.get_operand1()->accept(*this);
	double a_value1 = get_value();

	if (a_binary_plus.get_operand2() == nullptr)
	{
		throw dp_exception("void get_value_expression_visitor::visit(binary_plus & a_binary_plus) -- a_binary_plus.get_operand2() == nullptr.");
	}
	a_binary_plus.get_operand2()->accept(*this);
	double a_value2 = get_value();

	set_value(a_value1 + a_value2);
}

void get_value_expression_visitor::visit(conditional & a_conditional)
{
	if (a_conditional.get_operand1() == nullptr)
	{
		throw dp_exception("void get_value_expression_visitor::visit(conditional & a_conditional) -- a_conditional.get_operand1() == nullptr.");
	}
	a_conditional.get_operand1()->accept(*this);
	double a_value1 = get_value();

	if (a_value1)
	{
		if (a_conditional.get_operand2() == nullptr)
		{
			throw dp_exception("void get_value_expression_visitor::visit(conditional & a_conditional) -- a_conditional.get_operand2() == nullptr.");
		}
		a_conditional.get_operand2()->accept(*this);
		//	double a_value2 = get_value();
		//	set_value(a_value2);
	}
	else
	{
		if (a_conditional.get_operand3() == nullptr)
		{
			throw dp_exception("void get_value_expression_visitor::visit(conditional & a_conditional) -- a_conditional.get_operand3() == nullptr.");
		}
		a_conditional.get_operand3()->accept(*this);
		//	double a_value3 = get_value();
		//	set_value(a_value3);
	}
}

void get_value_expression_visitor::visit(divide & a_divide)
{
	if (a_divide.get_operand1() == nullptr)
	{
		throw dp_exception("void get_value_expression_visitor::visit(divide & a_divide) -- a_divide.get_operand1() == nullptr.");
	}
	a_divide.get_operand1()->accept(*this);
	double a_value1 = get_value();

	if (a_divide.get_operand2() == nullptr)
	{
		throw dp_exception("void get_value_expression_visitor::visit(divide & a_divide) -- a_divide.get_operand2() == nullptr.");
	}
	a_divide.get_operand2()->accept(*this);
	double a_value2 = get_value();

	set_value(a_value1 / a_value2);
}

void get_value_expression_visitor::visit(literal & a_literal)
{
	double a_value1 = a_literal.get_value();

	set_value(a_value1);
}

void get_value_expression_visitor::visit(method_invocation & a_method_invocation)
{
	if (a_method_invocation.get_name() == "sqrt")
	{
		dp_iterator<expression *> * a_iterator = a_method_invocation.get_operands();
		expression * a_operand1 = a_iterator->get_current();
		if (a_operand1 == nullptr)
		{
			throw dp_exception("void get_value_expression_visitor::visit(method_invocation & a_method_invocation) -- a_operand1 == nullptr.");
		}
		a_operand1->accept(*this);
		double a_value1 = get_value();

		set_value(std::sqrt(a_value1));
	}
	else
	{
		throw dp_exception("void get_value_expression_visitor::visit(method_invocation & a_method_invocation) -- unsupported method name.");
	}
}

void get_value_expression_visitor::visit(multiply & a_multiply)
{
	if (a_multiply.get_operand1() == nullptr)
	{
		throw dp_exception("void get_value_expression_visitor::visit(multiply & a_multiply) -- a_multiply.get_operand1() == nullptr.");
	}
	a_multiply.get_operand1()->accept(*this);
	double a_value1 = get_value();

	if (a_multiply.get_operand2() == nullptr)
	{
		throw dp_exception("void get_value_expression_visitor::visit(multiply & a_multiply) -- a_multiply.get_operand2() == nullptr.");
	}
	a_multiply.get_operand2()->accept(*this);
	double a_value2 = get_value();

	set_value(a_value1 * a_value2);
}

void get_value_expression_visitor::visit(unary_minus & a_unary_minus)
{
	if (a_unary_minus.get_operand1() == nullptr)
	{
		throw dp_exception("void get_value_expression_visitor::visit(unary_minus & a_unary_minus) -- a_unary_minus.get_operand1() == nullptr.");
	}
	a_unary_minus.get_operand1()->accept(*this);
	double a_value1 = get_value();

	set_value(- a_value1);
}

void get_value_expression_visitor::visit(unary_plus & a_unary_plus)
{
	if (a_unary_plus.get_operand1() == nullptr)
	{
		throw dp_exception("void get_value_expression_visitor::visit(unary_plus & a_unary_plus) -- a_unary_plus.get_operand1() == nullptr.");
	}
	a_unary_plus.get_operand1()->accept(*this);
	double a_value1 = get_value();

	set_value(+ a_value1);
}

void get_value_expression_visitor::visit(variable & a_variable)
{
	set_value(my_map.get(a_variable.get_name()));
}

void get_value_expression_visitor::set_value(double a_value)
{
	my_value = a_value;
}

double get_value_expression_visitor::get_value() const
{
	return my_value;
}
