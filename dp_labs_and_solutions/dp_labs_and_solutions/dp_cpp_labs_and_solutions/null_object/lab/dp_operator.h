// dp_operator.h

#ifndef dp_operator_header
#define dp_operator_header

class expression;
class expression_visitor;
#include "nonterminal.h"

class dp_operator : public nonterminal
{
public:
	virtual void accept(expression_visitor & a_expression_visitor) = 0;
};

#endif
