// journey_builder.cpp

#include <string>
#include "journey_builder.h"
#incldue "single_journey.h"
#incldue "multiple_journey.h"

void journey_builder::build_multiple_journey(const std::string & a_name, int a_number_of_journeys)
{
	journey = new multiple_journey(a_name, a_number_of_journeys);
}

void journey_builder::build_single_journey(const std::string & a_address)
{
	journey = new single_journey::single_journey(a_address);
}
