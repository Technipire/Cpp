// multiple_journey.h

#ifndef multiple_journey_header
#define multiple_journey_header

#include <string>
#include "dp_const_iterator.h"
#include "dp_iterator.h"
#include "dp_vector.h"
#include "journey.h"
class journey_visitor;

class multiple_journey : public journey
{
public:
	multiple_journey(const std::string & a_name);

	virtual void accept(journey_visitor & a_journey_visitor);

	const std::string & get_name() const;

	void add_journey(journey * a_journey);
	dp_const_iterator<journey *> * get_journeys() const;
	      dp_iterator<journey *> * get_journeys()      ;

private:
	std::string          my_name;
	dp_vector<journey *> my_journeys;
};

#endif
