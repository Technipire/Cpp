// expression_tree_builder.h

#ifndef expression_tree_builder_header
#define expression_tree_builder_header

#include <string>
#include "dp_stack.h"
#include "expression_builder.h"

class expression_tree_builder : public expression_builder
{
public:
	virtual void build_binary_minus();
	virtual void build_binary_plus();
	virtual void build_conditional();
	virtual void build_divide();
	virtual void build_literal(int a_value);
	virtual void build_method_invocation(const std::string & a_name, int a_number_of_parameters);
	virtual void build_multiply();
	virtual void build_unary_minus();
	virtual void build_unary_plus();
	virtual void build_variable(const std::string & a_name);

	expression * get_tree() const;

private:
	dp_stack<expression *> my_stack;
};

#endif
