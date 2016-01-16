// single_journey.h

#ifndef single_journey_header
#define single_journey_header

#include <iostream>
#include <string>
#include "journey.h"

class single_journey : public journey
{
public:
	single_journey(const std::string & a_address);

	virtual void output(std::ostream & a_ostream) const;
    virtual int get_number_of_stops() const;

private:
    std::string my_address;
    const int number_of_stops = 1;
};

#endif
