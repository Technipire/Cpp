// unary.h

#ifndef unary_header
#define unary_header

#include <iostream>
#include <string>
class expression;
#include "dp_operator.h"

class unary : public dp_operator
{
public:
	unary(expression * a_operand1);

	virtual int get_number_of_uses_of_variable(const std::string & a_name) const;

	virtual void output(std::ostream & a_ostream) const = 0;

	expression * get_operand1() const;

protected:
	void output_prefix (std::ostream & a_ostream, const std::string & a_operator) const;
	void output_postfix(std::ostream & a_ostream, const std::string & a_operator) const;

private:
	void set_operand1(expression * a_operand1);

	expression * my_operand1;
};

#endif
