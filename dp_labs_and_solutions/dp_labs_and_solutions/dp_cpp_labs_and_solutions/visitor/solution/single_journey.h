// single_journey.h

#ifndef single_journey_header
#define single_journey_header

#include <string>
#include "journey.h"
class journey_visitor;

class single_journey : public journey
{
public:
	single_journey(const std::string & a_address);

	virtual void accept(journey_visitor & a_journey_visitor);

	const std::string & get_address() const;

private:
	std::string my_address;
};

#endif
