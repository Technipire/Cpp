// journey.h

#ifndef journey_header
#define journey_header

#include <iostream>

class journey
{
public:
	virtual void output(std::ostream & a_ostream) const = 0;

	virtual int get_number_of_stops() const = 0;
};

#endif
