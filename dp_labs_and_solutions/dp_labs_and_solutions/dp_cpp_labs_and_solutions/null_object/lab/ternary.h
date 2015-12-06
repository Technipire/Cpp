// ternary.h

#ifndef ternary_header
#define ternary_header

class expression;
class expression_visitor;
#include "dp_operator.h"

class ternary : public dp_operator
{
public:
	ternary(expression * a_operand1, expression * a_operand2, expression * a_operand3);

	virtual void accept(expression_visitor & a_expression_visitor) = 0;

	expression * get_operand1() const;
	expression * get_operand2() const;
	expression * get_operand3() const;

private:
	void set_operand1(expression * a_operand1);
	void set_operand2(expression * a_operand2);
	void set_operand3(expression * a_operand3);

	expression * my_operand1;
	expression * my_operand2;
	expression * my_operand3;
};

#endif
