// single_journey_flyweight_factory.cpp

#include <string>
#include "dp_map.h"
#include "single_journey.h"
#include "single_journey_flyweight_factory.h"

single_journey_flyweight_factory::single_journey_flyweight_factory()
{
}

single_journey_flyweight_factory& single_journey_flyweight_factory::get_instance()
{
	if (the_instance == nullptr)
	{
		the_instance == new single_journey_flyweight_factory();
	}
	return *the_instance;
}

void single_journey_flyweight_factory::destroy()
{
	delete the_instance;
	the_instance = nullptr;
}

single_journey * single_journey_flyweight_factory::get_flyweight_for(const std::string & a_address)
{
	if (!my_map.contains(a_address))
	{
		my_map.put(a_address, new single_journey(a_address));
	}

	single_journey * result = my_map.get(a_address);

	return result;
}
