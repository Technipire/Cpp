// unary_minus.h

#ifndef unary_minus_header
#define unary_minus_header

class expression;
class expression_visitor;
#include "unary.h"

class unary_minus : public unary
{
public:
	unary_minus(expression * a_operand1);

	virtual void accept(expression_visitor & a_expression_visitor);
};

#endif
