// get_number_of_uses_of_variable_expression_visitor.h

#ifndef get_number_of_uses_of_variable_expression_visitor_header
#define get_number_of_uses_of_variable_expression_visitor_header

#include <string>
#include "expression_visitor.h"
class variable;

class get_number_of_uses_of_variable_expression_visitor : public expression_visitor
{
public:
	get_number_of_uses_of_variable_expression_visitor(const std::string & a_name);

	virtual void visit(variable & a_variable);

	int get_number_of_uses_of_variable() const;

private:
	std::string my_name;
	int         my_number_of_uses_of_variable;
};

#endif
