// expression.h

#ifndef expression_header
#define expression_header

class expression_visitor;

class expression
{
public:
	virtual void accept(expression_visitor & a_expression_visitor) = 0;
};

#endif
