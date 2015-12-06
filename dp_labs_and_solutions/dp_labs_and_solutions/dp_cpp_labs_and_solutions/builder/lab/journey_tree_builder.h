#include "journey_builder.h"

class journey_tree_builder : public journey_builder
{
public:
	journey_tree_builder();
	void build_multiple_journey(const string& a_name, const int a_number_of_journeys);
	void build_single_journey(const string& a_address);
	journey* get_tree();
}