// journey_visitor.cpp

#include "dp_iterator.h"
#include "journey_visitor.h"
#include "multiple_journey.h"
#include "single_journey.h"

void journey_visitor::visit(multiple_journey & a_multiple_journey)
{
	dp_iterator<journey *> * a_iterator = a_multiple_journey.get_journeys();
	while (!a_iterator->is_done())
	{
		journey * a_journey = a_iterator->get_current();
		if (a_journey == nullptr)
		{
			throw dp_exception("void journey_visitor::visit(multiple_journey & a_multiple_journey) -- a_journey == nullptr.");
		}
		a_journey->accept(*this);
		a_iterator->advance();
	}
}

void journey_visitor::visit(single_journey & a_single_journey)
{
}
