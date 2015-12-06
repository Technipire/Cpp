// binary_minus.h

#ifndef binary_minus_header
#define binary_minus_header

#include <iostream>
#include "binary.h"
class expression;

class binary_minus : public binary
{
public:
	binary_minus(expression * a_operand1, expression * a_operand2);

	virtual void output(std::ostream & a_ostream) const;
};

#endif
