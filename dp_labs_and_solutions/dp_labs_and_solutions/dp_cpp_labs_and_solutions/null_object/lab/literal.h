// literal.h

#ifndef literal_header
#define literal_header

class expression;
class expression_visitor;
#include "terminal.h"

class literal : public terminal
{
public:
	literal(int a_value);

	virtual void accept(expression_visitor & a_expression_visitor);

	int get_value() const;

private:
	void set_value(int a_value);

	int my_value;
};

#endif
