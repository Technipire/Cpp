// use_class.cpp

#include <iostream>
#include "dp_exception.h"
#include "get_number_of_stops_journey_visitor.h"
#include "journey.h"
#include "output_journey_visitor.h"
#include "use_class.h"

void use_class::use(journey * a_journey)
{
	if (a_journey == nullptr)
	{
		throw dp_exception("void use_class::use(journey * a_journey) -- a_journey == nullptr.");
	}

	output_journey_visitor * a_output_journey_visitor = new output_journey_visitor(std::cout);
	a_journey->accept(*a_output_journey_visitor);

	get_number_of_stops_journey_visitor * a_get_number_of_stops_journey_visitor = new get_number_of_stops_journey_visitor();
	a_journey->accept(*a_get_number_of_stops_journey_visitor);
	std::cout << a_get_number_of_stops_journey_visitor->get_number_of_stops() << ".\n";
}
