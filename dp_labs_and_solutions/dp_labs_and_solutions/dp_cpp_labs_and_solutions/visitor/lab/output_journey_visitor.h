#ifndef OUTPUT_JOURNEY_VISITOR__H__
#define OUTPUT_JOURNEY_VISITOR__H__

class output_journey_visitor
{
public:
	void visit(multiple_journey* a_multiple_journey);
	void visit(single_journey* a_single_journey);
}

#endif