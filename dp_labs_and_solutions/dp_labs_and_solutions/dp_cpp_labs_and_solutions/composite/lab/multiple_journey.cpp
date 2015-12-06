// multiple_journey.cpp

#include <iostream>
#include <string>
#include "dp_const_iterator.h"
#include "dp_exception.h"
#include "dp_iterator.h"
#include "dp_vector.h"
#include "multiple_journey.h"

multiple_journey::multiple_journey(const std::string & a_name)
{
	if (a_name == "")
	{
		throw dp_exception("multiple_journey::multiple_journey(const std::string & a_name) -- a_name == \"\".");
	}
	my_name = a_name;
}

void multiple_journey::output(std::ostream & a_ostream) const
{
	a_ostream << "multiple journey to " << my_name << ":\n";
	dp_const_iterator<journey *> * a_iterator = get_journeys();
	while (!a_iterator->is_done())
	{
		journey * a_journey = a_iterator->get_current();
		if (a_journey == nullptr)
		{
			throw dp_exception("void multiple_journey::output(std::ostream & a_ostream) const -- a_journey == nullptr.");
		}
		a_journey->output(a_ostream);
		a_iterator->advance();
	}
}

void multiple_journey::add_journey(journey * a_journey)
{
	if (a_journey == nullptr)
	{
		throw dp_exception("void multiple_journey::add_journey(journey * a_journey) -- a_journey == nullptr.");
	}
	my_journeys.add(a_journey);
}


dp_const_iterator<journey *> * multiple_journey::get_journeys() const
{
	return my_journeys.make_iterator();
}

dp_iterator<journey *> * multiple_journey::get_journeys()
{
	return my_journeys.make_iterator();
}
