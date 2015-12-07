// binary_minus.h

#ifndef binary_minus_header
#define binary_minus_header

#include "binary.h"
class expression;
class expression_visitor;

class binary_minus : public binary
{
public:
	binary_minus(expression * a_operand1, expression * a_operand2);

	virtual void accept(expression_visitor & a_expression_visitor);
};

#endif
