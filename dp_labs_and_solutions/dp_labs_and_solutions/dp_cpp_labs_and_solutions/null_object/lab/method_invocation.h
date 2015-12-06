// method_invocation.h

#ifndef method_invocation_header
#define method_invocation_header

#include <string>
#include "dp_const_iterator.h"
#include "dp_iterator.h"
#include "dp_vector.h"
class expression;
class expression_visitor;
#include "nonterminal.h"

class method_invocation : public nonterminal
{
public:
	method_invocation(const std::string & a_name);

	virtual void accept(expression_visitor & a_expression_visitor);

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
