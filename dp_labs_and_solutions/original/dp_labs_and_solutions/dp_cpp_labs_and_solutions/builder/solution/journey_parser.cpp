// journey_parser.cpp

#include "journey_builder.h"
#include "journey_parser.h"

void journey_parser::parse(journey_builder & a_journey_builder)
{
	a_journey_builder.build_single_journey("Apple Computer");
	a_journey_builder.build_multiple_journey("Work", 1);
	a_journey_builder.build_single_journey("Whole Foods");
	a_journey_builder.build_single_journey("Stop & Shop");
	a_journey_builder.build_multiple_journey("Food shopping", 2);
	a_journey_builder.build_single_journey("Petco");
	a_journey_builder.build_single_journey("Stop & Shop");
	a_journey_builder.build_multiple_journey("Pet shopping", 2);
	a_journey_builder.build_multiple_journey("Today's itinerary", 3);
}
