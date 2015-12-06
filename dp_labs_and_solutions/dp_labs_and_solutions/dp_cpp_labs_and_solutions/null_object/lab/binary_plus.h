// binary_plus.h

#ifndef binary_plus_header
#define binary_plus_header

#include "binary.h"
class expression;
class expression_visitor;

class binary_plus : public binary
{
public:
	binary_plus(expression * a_operand1, expression * a_operand2);

	virtual void accept(expression_visitor & a_expression_visitor);
};

#endif
