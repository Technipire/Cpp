// multiply.h

#ifndef multiply_header
#define multiply_header

#include "binary.h"
class expression;
class expression_visitor;

class multiply : public binary
{
public:
	multiply(expression * a_operand1, expression * a_operand2);

	virtual void accept(expression_visitor & a_expression_visitor);
};

#endif
