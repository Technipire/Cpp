// journey.h

#ifndef journey_header
#define journey_header

#include <iostream>

class journey
{
public:
	virtual void output(std::ostream & a_ostream) const = 0;
	static int get_number_of_stops()
	{
		return the_num_of_stops;
	}
	static int the_num_of_stops;

	
};

#endif
