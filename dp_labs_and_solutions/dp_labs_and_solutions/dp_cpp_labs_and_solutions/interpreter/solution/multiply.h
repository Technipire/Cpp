// multiply.h

#ifndef multiply_header
#define multiply_header

#include <iostream>
#include <string>
#include "binary.h"
#include "dp_map.h"
class expression;

class multiply : public binary
{
public:
	multiply(expression * a_operand1, expression * a_operand2);

	virtual double get_value(const dp_map<std::string, double> & a_map) const;

	virtual void output(std::ostream & a_ostream) const;
};

#endif
