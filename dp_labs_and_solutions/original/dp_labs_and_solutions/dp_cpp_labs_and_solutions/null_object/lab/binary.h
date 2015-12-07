// binary.h

#ifndef binary_header
#define binary_header

class expression;
class expression_visitor;
#include "dp_operator.h"

class binary : public dp_operator
{
public:
	binary(expression * a_operand1, expression * a_operand2);

	virtual void accept(expression_visitor & a_expression_visitor) = 0;

	expression * get_operand1() const;
	expression * get_operand2() const;

private:
	void set_operand1(expression * a_operand1);
	void set_operand2(expression * a_operand2);

	expression * my_operand1;
	expression * my_operand2;
};

#endif
