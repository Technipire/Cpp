// terminal.h

#ifndef terminal_header
#define terminal_header

#include "expression.h"
class expression_visitor;

class terminal : public expression
{
public:
	virtual void accept(expression_visitor & a_expression_visitor) = 0;
};

#endif
