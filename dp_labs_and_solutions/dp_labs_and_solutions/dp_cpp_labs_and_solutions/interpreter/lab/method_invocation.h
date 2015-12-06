// method_invocation.h

#ifndef method_invocation_header
#define method_invocation_header

#include <iostream>
#include <string>
#include "dp_const_iterator.h"
#include "dp_iterator.h"
#include "dp_vector.h"
class expression;
#include "nonterminal.h"

class method_invocation : public nonterminal
{
public:
	method_invocation(const std::string & a_name);

	virtual int get_number_of_uses_of_variable(const std::string & a_name) const;

	virtual void output(std::ostream & a_ostream) const;

	const std::string & get_name() const;

	void add_operand(expression * a_operand);
	dp_const_iterator<expression *> * get_operands() const;
	      dp_iterator<expression *> * get_operands()      ;

private:
	void set_name(const std::string & a_name);

	std::string my_name;
	dp_vector<expression *> my_operands;
};

#endif
