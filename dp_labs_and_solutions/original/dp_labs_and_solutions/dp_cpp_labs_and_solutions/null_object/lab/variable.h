// variable.h

#ifndef variable_header
#define variable_header

#include <string>
class expression;
class expression_visitor;
#include "terminal.h"

class variable : public terminal
{
public:
	variable(const std::string & a_name);

	virtual void accept(expression_visitor & a_expression_visitor);

	const std::string & get_name() const;

private:
	void set_name(const std::string & a_name);

	std::string my_name;
};

#endif
