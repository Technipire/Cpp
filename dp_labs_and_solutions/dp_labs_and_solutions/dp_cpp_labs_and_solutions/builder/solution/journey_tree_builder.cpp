// journey_tree_builder.cpp

#include <string>
#include "dp_stack.h"
#include "journey_tree_builder.h"
#include "multiple_journey.h"
#include "single_journey.h"
#include "single_journey_flyweight_factory.h"

void journey_tree_builder::build_multiple_journey(const std::string & a_name, int a_number_of_journeys)
{
	multiple_journey * a_multiple_journey = new multiple_journey(a_name);

	dp_stack<journey *> a_stack;

	for (int i = 1; i <= a_number_of_journeys; ++i)
	{
		journey * a_journey = my_stack.top(); my_stack.pop();

		a_stack.push(a_journey);
	}

	for (int i = 1; i <= a_number_of_journeys; ++i)
	{
		journey * a_journey = a_stack.top(); a_stack.pop();

		a_multiple_journey->add_journey(a_journey);
	}

	my_stack.push(a_multiple_journey);
}

void journey_tree_builder::build_single_journey(const std::string & a_address)
{
	my_stack.push(single_journey_flyweight_factory::get_instance().get_flyweight_for(a_address));
}

journey * journey_tree_builder::get_tree() const
{
	if (my_stack.is_empty())
	{
		throw dp_exception("journey * journey_tree_builder::get_tree() const -- my_stack.is_empty().");
	}

	journey * result = my_stack.top();

	return result;
}
