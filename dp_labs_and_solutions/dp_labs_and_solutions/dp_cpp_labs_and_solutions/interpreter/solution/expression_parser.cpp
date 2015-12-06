// expression_parser.cpp

#include "expression_builder.h"
#include "expression_parser.h"

void expression_parser::parse(expression_builder & a_expression_builder)
{
	a_expression_builder.build_variable("b");
	a_expression_builder.build_unary_minus();
	a_expression_builder.build_variable("b");
	a_expression_builder.build_variable("b");
	a_expression_builder.build_multiply();
	a_expression_builder.build_literal(4);
	a_expression_builder.build_variable("a");
	a_expression_builder.build_multiply();
	a_expression_builder.build_variable("c");
	a_expression_builder.build_multiply();
	a_expression_builder.build_binary_minus();
	a_expression_builder.build_method_invocation("sqrt", 1);
	a_expression_builder.build_binary_plus();
	a_expression_builder.build_literal(2);
	a_expression_builder.build_variable("a");
	a_expression_builder.build_multiply();
	a_expression_builder.build_divide();
}
