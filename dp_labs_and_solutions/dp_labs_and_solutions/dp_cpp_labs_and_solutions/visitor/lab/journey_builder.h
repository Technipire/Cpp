// journey_builder.h

#ifndef journey_builder_header
#define journey_builder_header

#include <string>

class journey_builder
{
public:
	virtual void build_multiple_journey(const std::string & a_name, int a_number_of_journeys);

	virtual void build_single_journey(const std::string & a_address);
};

#endif
