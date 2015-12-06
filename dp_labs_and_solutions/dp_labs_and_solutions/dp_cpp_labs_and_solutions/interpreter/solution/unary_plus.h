// unary_plus.h

#ifndef unary_plus_header
#define unary_plus_header

#include <iostream>
#include <string>
#include "dp_map.h"
class expression;
#include "unary.h"

class unary_plus : public unary
{
public:
	unary_plus(expression * a_operand1);

	virtual double get_value(const dp_map<std::string, double> & a_map) const;

	virtual void output(std::ostream & a_ostream) const;
};

#endif
