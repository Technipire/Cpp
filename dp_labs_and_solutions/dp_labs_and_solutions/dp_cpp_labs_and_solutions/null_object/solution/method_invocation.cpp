// method_invocation.cpp

#include <cmath>
#include <string>
#include "dp_const_iterator.h"
#include "dp_iterator.h"
#include "dp_vector.h"
class expression;
#include "expression_visitor.h"
#include "method_invocation.h"

method_invocation::method_invocation(const std::string & a_name)
{
	set_name(a_name);
}

void method_invocation::accept(expression_visitor & a_expression_visitor)
{
	a_expression_visitor.visit(*this);
}

void method_invocation::set_name(const std::string & a_name)
{
	my_name = a_name;
}

const std::string & method_invocation::get_name() const
{
	return my_name;
}

void method_invocation::add_operand(expression * a_operand)
{
	my_operands.add(a_operand);
}

dp_const_iterator<expression *> * method_invocation::get_operands() const
{
	return my_operands.make_iterator();
}

dp_iterator<expression *> * method_invocation::get_operands()
{
	return my_operands.make_iterator();
}
