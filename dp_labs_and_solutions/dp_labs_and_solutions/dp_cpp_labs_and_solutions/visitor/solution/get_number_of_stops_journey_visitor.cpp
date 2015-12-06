// get_number_of_stops_journey_visitor.cpp

#include "get_number_of_stops_journey_visitor.h"
class single_journey;

get_number_of_stops_journey_visitor::get_number_of_stops_journey_visitor()
: my_number_of_stops(0)
{
}

void get_number_of_stops_journey_visitor::visit(single_journey & a_single_journey)
{
	++my_number_of_stops;
}

int get_number_of_stops_journey_visitor::get_number_of_stops() const
{
	return my_number_of_stops;
}
