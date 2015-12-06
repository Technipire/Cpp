#ifndef JOURNEY_VISITOR__H__
#define JOURNEY_VISITOR__H__

class single_journey;
class multiple_journey;

class journey_visitor
{
public:
	visit(multiple_journey* a_multiple_journey);
	visit(single_journey* a_single_journey);
};

#endif