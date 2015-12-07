// variable.h

#ifndef variable_header
#define variable_header

#include <iostream>
#include <string>
#include "dp_map.h"
class expression;
#include "terminal.h"

class variable : public terminal
{
public:
	variable(const std::string & a_name);

	virtual int get_number_of_uses_of_variable(const std::string & a_name) const;

	virtual double get_value(const dp_map<std::string, double> & a_map) const;

	virtual void output(std::ostream & a_ostream) const;

	const std::string & get_name() const;

private:
	void set_name(const std::string & a_name);

	std::string my_name;
};

#endif
