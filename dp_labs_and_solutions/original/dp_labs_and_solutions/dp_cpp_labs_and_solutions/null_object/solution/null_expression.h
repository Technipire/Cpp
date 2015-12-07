// null_expression.h

#ifndef null_expression_header
#define null_expression_header

#include "terminal.h"
class expression_visitor;

class null_expression : public terminal
{
public:
	virtual void accept(expression_visitor & a_expression_visitor);
};

#endif
