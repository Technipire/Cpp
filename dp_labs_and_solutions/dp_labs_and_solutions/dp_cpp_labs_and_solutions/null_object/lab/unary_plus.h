// unary_plus.h

#ifndef unary_plus_header
#define unary_plus_header

class expression;
class expression_visitor;
#include "unary.h"

class unary_plus : public unary
{
public:
	unary_plus(expression * a_operand1);

	virtual void accept(expression_visitor & a_expression_visitor);
};

#endif
