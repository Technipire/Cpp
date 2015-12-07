// output_expression_visitor.h

#ifndef output_expression_visitor_header
#define output_expression_visitor_header

#include <iostream>
#include <string>
class binary;
class binary_minus;
class binary_plus;
class conditional;
class divide;
#include "expression_visitor.h"
class literal;
class method_invocation;
class multiply;
class ternary;
class unary;
class unary_minus;
class unary_plus;
class variable;

class output_expression_visitor : public expression_visitor
{
public:
	output_expression_visitor(std::ostream & a_stream);

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

private:
	void output_prefix (const unary   & a_unary  , const std::string & a_operator);
	void output_postfix(const unary   & a_unary  , const std::string & a_operator);
	void output_infix  (const binary  & a_binary , const std::string & a_operator);
	void output_infix  (const ternary & a_ternary, const std::string & a_operator1, const std::string & a_operator2);

private:
	std::ostream & my_stream;
};

#endif
