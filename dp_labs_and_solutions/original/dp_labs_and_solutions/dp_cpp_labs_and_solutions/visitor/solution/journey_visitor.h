// journey_visitor.h

#ifndef journey_visitor_header
#define journey_visitor_header

class multiple_journey;
class single_journey;

class journey_visitor
{
public:
	virtual void visit(multiple_journey & a_multiple_journey);

	virtual void visit(single_journey & a_single_journey);
};

#endif
