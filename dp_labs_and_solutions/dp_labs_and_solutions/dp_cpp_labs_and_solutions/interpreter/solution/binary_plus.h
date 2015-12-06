// binary_plus.h

#ifndef binary_plus_header
#define binary_plus_header

#include <iostream>
#include <string>
#include "binary.h"
#include "dp_map.h"
class expression;

class binary_plus : public binary
{
public:
	binary_plus(expression * a_operand1, expression * a_operand2);

	virtual double get_value(const dp_map<std::string, double> & a_map) const;

	virtual void output(std::ostream & a_ostream) const;
};

#endif
