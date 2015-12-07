// multiply.h

#ifndef multiply_header
#define multiply_header

#include <iostream>
#include "binary.h"
class expression;

class multiply : public binary
{
public:
	multiply(expression * a_operand1, expression * a_operand2);

	virtual void output(std::ostream & a_ostream) const;
};

#endif
