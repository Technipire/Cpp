// unary_minus.h

#ifndef unary_minus_header
#define unary_minus_header

#include <iostream>
class expression;
#include "unary.h"

class unary_minus : public unary
{
public:
	unary_minus(expression * a_operand1);

	virtual void output(std::ostream & a_ostream) const;
};

#endif
