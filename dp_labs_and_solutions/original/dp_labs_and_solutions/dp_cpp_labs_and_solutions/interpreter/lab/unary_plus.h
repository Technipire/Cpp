// unary_plus.h

#ifndef unary_plus_header
#define unary_plus_header

#include <iostream>
class expression;
#include "unary.h"

class unary_plus : public unary
{
public:
	unary_plus(expression * a_operand1);

	virtual void output(std::ostream & a_ostream) const;
};

#endif
