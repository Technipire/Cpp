// single_journey_flyweight_factory.cpp
#include <iostream>
#include "single_journey_flyweight_factory.h"
#include "single_journey.h"

single_journey_flyweight_factory::single_journey_flyweight_factory()
{}

single_journey* single_journey_flyweight_factory::get_flyweight_for(const std::string& a_address)
{
    if (a_address.empty())
    {
        dp_exception("a_address is empty!");
    }
    else 
    {
        if (my_map.contains(a_address))
        {
            auto result = my_map.get(a_address);
            return result;
        }
        auto new_journey = new single_journey(a_address);
        my_map.put(a_address, new_journey);
        return new_journey;
    }
}
