// unary.h

#ifndef unary_header
#define unary_header

class expression;
class expression_visitor;
#include "dp_operator.h"

class unary : public dp_operator
{
public:
	unary(expression * a_operand1);

	virtual void accept(expression_visitor & a_expression_visitor) = 0;

	expression * get_operand1() const;

private:
	void set_operand1(expression * a_operand1);

	expression * my_operand1;
};

#endif
