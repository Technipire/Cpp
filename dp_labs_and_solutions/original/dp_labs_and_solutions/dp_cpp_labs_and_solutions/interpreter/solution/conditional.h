// conditional.h

#ifndef conditional_header
#define conditional_header

#include <iostream>
#include <string>
#include "dp_map.h"
class expression;
#include "ternary.h"

class conditional : public ternary
{
public:
	conditional(expression * a_operand1, expression * a_operand2, expression * a_operand3);

	virtual double get_value(const dp_map<std::string, double> & a_map) const;

	virtual void output(std::ostream & a_ostream) const;
};

#endif
