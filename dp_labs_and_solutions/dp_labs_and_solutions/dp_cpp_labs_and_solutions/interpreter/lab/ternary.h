// ternary.h

#ifndef ternary_header
#define ternary_header

#include <iostream>
#include <string>
class expression;
#include "dp_operator.h"

class ternary : public dp_operator
{
public:
	ternary(expression * a_operand1, expression * a_operand2, expression * a_operand3);

	virtual int get_number_of_uses_of_variable(const std::string & a_name) const;

	virtual void output(std::ostream & a_ostream) const = 0;

	expression * get_operand1() const;
	expression * get_operand2() const;
	expression * get_operand3() const;

protected:
	void output_infix(std::ostream & a_ostream, const std::string & a_operator1, const std::string & a_operator2) const;

private:
	void set_operand1(expression * a_operand1);
	void set_operand2(expression * a_operand2);
	void set_operand3(expression * a_operand3);

	expression * my_operand1;
	expression * my_operand2;
	expression * my_operand3;
};

#endif
