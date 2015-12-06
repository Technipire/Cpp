// divide.h

#ifndef divide_header
#define divide_header

#include "binary.h"
class expression;
class expression_visitor;

class divide : public binary
{
public:
	divide(expression * a_operand1, expression * a_operand2);

	virtual void accept(expression_visitor & a_expression_visitor);
};

#endif
