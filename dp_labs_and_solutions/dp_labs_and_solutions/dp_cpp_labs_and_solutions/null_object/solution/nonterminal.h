// nonterminal.h

#ifndef nonterminal_header
#define nonterminal_header

#include "expression.h"
class expression_visitor;

class nonterminal : public expression
{
public:
	virtual void accept(expression_visitor & a_expression_visitor) = 0;
};

#endif
