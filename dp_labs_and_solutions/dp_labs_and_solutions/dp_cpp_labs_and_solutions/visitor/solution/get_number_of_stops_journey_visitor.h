// get_number_of_stops_journey_visitor.h

#ifndef get_number_of_stops_journey_visitor_header
#define get_number_of_stops_journey_visitor_header

#include "journey_visitor.h"
class single_journey;

class get_number_of_stops_journey_visitor : public journey_visitor
{
public:
	get_number_of_stops_journey_visitor();

	virtual void visit(single_journey & a_single_journey);

	int get_number_of_stops() const;

private:
	int my_number_of_stops;
};

#endif
