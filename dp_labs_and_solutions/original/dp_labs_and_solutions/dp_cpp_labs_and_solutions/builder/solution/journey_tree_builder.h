// journey_tree_builder.h

#ifndef journey_tree_builder_header
#define journey_tree_builder_header

#include <string>
#include "dp_stack.h"
class journey;
#include "journey_builder.h"

class journey_tree_builder : public journey_builder
{
public:
	virtual void build_multiple_journey(const std::string & a_name, int a_number_of_journeys);

	virtual void build_single_journey(const std::string & a_address);

	journey * get_tree() const;

private:
	dp_stack<journey *> my_stack;
};

#endif
