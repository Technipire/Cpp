// expression_tree_builder.cpp

#include <string>
#include "binary_minus.h"
#include "binary_plus.h"
#include "conditional.h"
#include "divide.h"
#include "dp_exception.h"
#include "dp_stack.h"
#include "expression_tree_builder.h"
#include "literal.h"
#include "literal_flyweight_factory.h"
#include "method_invocation.h"
#include "multiply.h"
#include "null_expression.h"
#include "unary_minus.h"
#include "unary_plus.h"
#include "variable.h"
#include "variable_flyweight_factory.h"

void expression_tree_builder::build_binary_minus()
{
	expression * a_operand2 = my_stack.top(); my_stack.pop();
	expression * a_operand1 = my_stack.top(); my_stack.pop();

	my_stack.push(new binary_minus(a_operand1, a_operand2));
}

void expression_tree_builder::build_binary_plus()
{
	expression * a_operand2 = my_stack.top(); my_stack.pop();
	expression * a_operand1 = my_stack.top(); my_stack.pop();

	my_stack.push(new binary_plus(a_operand1, a_operand2));
}

void expression_tree_builder::build_conditional()
{
	expression * a_operand3 = my_stack.top(); my_stack.pop();
	expression * a_operand2 = my_stack.top(); my_stack.pop();
	expression * a_operand1 = my_stack.top(); my_stack.pop();

	my_stack.push(new conditional(a_operand1, a_operand2, a_operand3));
}

void expression_tree_builder::build_divide()
{
	expression * a_operand2 = my_stack.top(); my_stack.pop();
	expression * a_operand1 = my_stack.top(); my_stack.pop();

	my_stack.push(new divide(a_operand1, a_operand2));
}

void expression_tree_builder::build_literal(int a_value)
{
	my_stack.push(literal_flyweight_factory::get_instance().get_flyweight_for(a_value));
}

void expression_tree_builder::build_method_invocation(const std::string & a_name, int a_number_of_parameters)
{
	method_invocation * a_method_invocation = new method_invocation(a_name);

	dp_stack<expression *> a_stack;

	for (int i = 1; i <= a_number_of_parameters; ++i)
	{
		expression * a_operand = my_stack.top(); my_stack.pop();

		a_stack.push(a_operand);
	}

	for (int i = 1; i <= a_number_of_parameters; ++i)
	{
		expression * a_operand = a_stack.top(); a_stack.pop();

		a_method_invocation->add_operand(a_operand);
	}

	my_stack.push(a_method_invocation);
}

void expression_tree_builder::build_multiply()
{
	expression * a_operand2 = my_stack.top(); my_stack.pop();
	expression * a_operand1 = my_stack.top(); my_stack.pop();

	my_stack.push(new multiply(a_operand1, a_operand2));
}

void expression_tree_builder::build_null_expression()
{
	my_stack.push(new null_expression());
}

void expression_tree_builder::build_unary_minus()
{
	expression * a_operand1 = my_stack.top(); my_stack.pop();

	my_stack.push(new unary_minus(a_operand1));
}

void expression_tree_builder::build_unary_plus()
{
	expression * a_operand1 = my_stack.top(); my_stack.pop();

	my_stack.push(new unary_plus(a_operand1));
}

void expression_tree_builder::build_variable(const std::string & a_name)
{
	my_stack.push(variable_flyweight_factory::get_instance().get_flyweight_for(a_name));
}

expression * expression_tree_builder::get_tree() const
{
	if (my_stack.is_empty())
	{
		throw dp_exception("expression * expression_tree_builder::get_tree() const -- my_stack.is_empty().");
	}

	expression * result = my_stack.top();

	return result;
}
