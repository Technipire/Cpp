// output_journey_visitor.h

#ifndef output_journey_visitor_header
#define output_journey_visitor_header

#include <iostream>
#include "journey_visitor.h"
class multiple_journey;
class single_journey;

class output_journey_visitor : public journey_visitor
{
public:
	output_journey_visitor(std::ostream & a_ostream);

	virtual void visit(multiple_journey & a_multiple_journey);

	virtual void visit(single_journey & a_single_journey);

private:
	std::ostream & my_ostream;
};

#endif
