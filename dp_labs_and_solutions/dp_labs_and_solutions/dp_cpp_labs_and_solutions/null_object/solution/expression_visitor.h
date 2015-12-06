// expression_visitor.h

#ifndef expression_visitor_header
#define expression_visitor_header

class binary_minus;
class binary_plus;
class conditional;
class divide;
class literal;
class method_invocation;
class multiply;
class null_expression;
class unary_minus;
class unary_plus;
class variable;

class expression_visitor
{
public:
	virtual void visit(binary_minus & a_binary_minus);
	virtual void visit(binary_plus & a_binary_plus);
	virtual void visit(conditional & a_conditional);
	virtual void visit(divide & a_divide);
	virtual void visit(literal & a_literal);
	virtual void visit(method_invocation & a_method_invocation);
	virtual void visit(multiply & a_multiply);
	virtual void visit(null_expression & a_null_expression);
	virtual void visit(unary_minus & a_unary_minus);
	virtual void visit(unary_plus & a_unary_plus);
	virtual void visit(variable & a_variable);
};

#endif
