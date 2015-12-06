// expression.h

#ifndef expression_header
#define expression_header

#include <iostream>
#include <string>

class expression
{
public:
	virtual int get_number_of_uses_of_variable(const std::string & a_name) const = 0;

	virtual void output(std::ostream & a_ostream) const = 0;
};

#endif
