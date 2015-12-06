// divide.h

#ifndef divide_header
#define divide_header

#include <iostream>
#include "binary.h"
class expression;

class divide : public binary
{
public:
	divide(expression * a_operand1, expression * a_operand2);

	virtual void output(std::ostream & a_ostream) const;
};

#endif
