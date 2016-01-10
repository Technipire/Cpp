#ifndef SINGLE_JOURNEY_FLYWEIGHT_FACTORY__H__
#define SINGLE_JOURNEY_FLYWEIGHT_FACTORY__H__

#include "dp_map.h"
class single_journey;

class single_journey_flyweight_factory
{
    public:
        single_journey_flyweight_factory();
        single_journey* get_flyweight_for(const std::string& a_address);
    private:
        dp_map<std::string, single_journey* > my_map;
};

#endif
