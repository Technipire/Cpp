// setup_class.cpp

#include <string>
#include "journey.h"
#include "journey_parser.h"
#include "journey_tree_builder.h"
#include "setup_class.h"

journey * setup_class::setup()
{
	journey_parser * a_journey_parser = new journey_parser();

	journey_tree_builder * a_journey_tree_builder = new journey_tree_builder();

	a_journey_parser->parse(*a_journey_tree_builder);

	journey * a_journey = a_journey_tree_builder->get_tree();

	return a_journey;
}
