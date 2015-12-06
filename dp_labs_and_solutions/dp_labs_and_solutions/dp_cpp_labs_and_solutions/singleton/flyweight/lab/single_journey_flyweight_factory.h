// single_journey_flyweight_factory.h

#ifndef single_journey_flyweight_factory_header
#define single_journey_flyweight_factory_header

#include <string>
#include "dp_map.h"
class single_journey;

class single_journey_flyweight_factory
{
public:
	static single_journey_flyweight_factory & get_instance();
	
private:
	single_journey_flyweight_factory();
	single_journey * get_flyweight_for(const std::string & a_address);
	void destroy();
	
	static single_journey_flyweight_factory* the_instace;
	dp_map<std::string, single_journey *> my_map;
};

#endif
