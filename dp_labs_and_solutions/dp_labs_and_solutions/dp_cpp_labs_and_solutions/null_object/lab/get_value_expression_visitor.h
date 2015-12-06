// get_value_expression_visitor.h

#ifndef get_value_expression_visitor_header
#define get_value_expression_visitor_header

#include <string>
class binary_minus;
class binary_plus;
class conditional;
class divide;
#include "dp_map.h"
#include "expression_visitor.h"
class literal;
class method_invocation;
class multiply;
class unary_minus;
class unary_plus;
class variable;

class get_value_expression_visitor : public expression_visitor
{
public:
	get_value_expression_visitor(const dp_map<std::string, double> & a_map);

	virtual void visit(binary_minus & a_binary_minus);
	virtual void visit(binary_plus & a_binary_plus);
	virtual void visit(conditional & a_conditional);
	virtual void visit(divide & a_divide);
	virtual void visit(literal & a_literal);
	virtual void visit(method_invocation & a_method_invocation);
	virtual void visit(multiply & a_multiply);
	virtual void visit(unary_minus & a_unary_minus);
	virtual void visit(unary_plus & a_unary_plus);
	virtual void visit(variable & a_variable);

	double get_value() const;

private:
	void set_value(double a_value);

	const dp_map<std::string, double> & my_map;
	double my_value;
};

#endif
