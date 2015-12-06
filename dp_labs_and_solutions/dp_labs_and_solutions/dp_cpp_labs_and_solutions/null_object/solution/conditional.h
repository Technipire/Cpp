// conditional.h

#ifndef conditional_header
#define conditional_header

class expression;
class expression_visitor;
#include "ternary.h"

class conditional : public ternary
{
public:
	conditional(expression * a_operand1, expression * a_operand2, expression * a_operand3);

	virtual void accept(expression_visitor & a_expression_visitor);
};

#endif
