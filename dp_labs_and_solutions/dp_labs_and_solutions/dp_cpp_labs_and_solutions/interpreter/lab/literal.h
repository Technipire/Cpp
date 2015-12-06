// literal.h

#ifndef literal_header
#define literal_header

#include <iostream>
#include <string>
class expression;
#include "terminal.h"

class literal : public terminal
{
public:
	literal(int a_value);

	virtual int get_number_of_uses_of_variable(const std::string & a_name) const;

	virtual void output(std::ostream & a_ostream) const;

	int get_value() const;

private:
	void set_value(int a_value);

	int my_value;
};

#endif
