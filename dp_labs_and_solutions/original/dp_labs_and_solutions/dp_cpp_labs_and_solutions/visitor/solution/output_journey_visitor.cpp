// output_journey_visitor.cpp

#include <iostream>
#include <string>
#include "dp_iterator.h"
#include "multiple_journey.h"
#include "output_journey_visitor.h"
#include "single_journey.h"

output_journey_visitor::output_journey_visitor(std::ostream & a_ostream)
: my_ostream(a_ostream)
{
}

void output_journey_visitor::visit(multiple_journey & a_multiple_journey)
{
	my_ostream << "multiple journey to " << a_multiple_journey.get_name() << ":\n";
	dp_iterator<journey *> * a_iterator = a_multiple_journey.get_journeys();
	while (!a_iterator->is_done())
	{
		journey * a_journey = a_iterator->get_current();
		if (a_journey == nullptr)
		{
			throw dp_exception("void output_journey_visitor::visit(multiple_journey & a_multiple_journey) -- a_journey == nullptr.");
		}
		a_journey->accept(*this);
		a_iterator->advance();
	}
}

void output_journey_visitor::visit(single_journey & a_single_journey)
{
	my_ostream << "single journey to " << a_single_journey.get_address() << ".\n";
}
