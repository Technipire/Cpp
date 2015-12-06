// dp_operator.h

#ifndef dp_operator_header
#define dp_operator_header

#include <iostream>
#include <string>
class expression;
#include "nonterminal.h"

class dp_operator : public nonterminal
{
public:
	virtual int get_number_of_uses_of_variable(const std::string & a_name) const = 0;

	virtual void output(std::ostream & a_ostream) const = 0;
};

#endif
