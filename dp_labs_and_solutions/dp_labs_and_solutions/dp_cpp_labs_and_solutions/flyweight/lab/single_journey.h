// single_journey.h

#ifndef single_journey_header
#define single_journey_header

#include <iostream>
#include <string>
#include "journey.h"
#include "single_journey_flyweight_factory.h"


class single_journey : public journey
{
public:
	virtual void output(std::ostream & a_ostream) const;
private:
	single_journey(const std::string & a_address);
    friend single_journey* single_journey_flyweight_factory::get_flyweight_for(const std::string& a_address);
    std::string my_address;
};

#endif

