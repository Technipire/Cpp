// journey.h

#ifndef journey_header
#define journey_header

class journey_visitor;

class journey
{
public:
	virtual void accept(journey_visitor & a_journey_visitor) = 0;
};

#endif
