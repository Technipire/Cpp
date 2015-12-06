// single_journey.cpp

#include <iostream>
#include <string>
#include "dp_exception.h"
#include "single_journey.h"

single_journey::single_journey(const std::string & a_address)
{
	if (a_address == "")
	{
		throw dp_exception("single_journey::single_journey(const std::string & a_address) -- a_address == \"\".");
	}
	my_address = a_address;
}

void single_journey::output(std::ostream & a_ostream) const
{
	a_ostream << "single journey to " << my_address << ".\n";
}

int single_journey::get_number_of_stops() const
{
	return 1;
}
