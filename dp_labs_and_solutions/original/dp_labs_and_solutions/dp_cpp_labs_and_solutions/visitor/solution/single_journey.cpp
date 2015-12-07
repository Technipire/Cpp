// single_journey.cpp

#include <string>
#include "dp_exception.h"
#include "journey_visitor.h"
#include "single_journey.h"

single_journey::single_journey(const std::string & a_address)
{
	if (a_address == "")
	{
		throw dp_exception("single_journey::single_journey(const std::string & a_address) -- a_address == \"\".");
	}
	my_address = a_address;
}

void single_journey::accept(journey_visitor & a_journey_visitor)
{
	a_journey_visitor.visit(*this);
}

const std::string & single_journey::get_address() const
{
	return my_address;
}
