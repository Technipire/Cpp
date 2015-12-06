// conditional.h

#ifndef conditional_header
#define conditional_header

#include <iostream>
class expression;
#include "ternary.h"

class conditional : public ternary
{
public:
	conditional(expression * a_operand1, expression * a_operand2, expression * a_operand3);

	virtual void output(std::ostream & a_ostream) const;
};

#endif
