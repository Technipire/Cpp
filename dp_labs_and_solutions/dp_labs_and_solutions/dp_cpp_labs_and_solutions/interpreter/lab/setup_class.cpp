// setup_class.cpp

class expression;
#include "expression_parser.h"
#include "expression_tree_builder.h"
#include "setup_class.h"

expression * setup_class::setup()
{
	expression_parser * a_expression_parser = new expression_parser();

	expression_tree_builder * a_expression_tree_builder = new expression_tree_builder();

	a_expression_parser->parse(*a_expression_tree_builder);

	expression * a_expression = a_expression_tree_builder->get_tree();

	return a_expression;
}
