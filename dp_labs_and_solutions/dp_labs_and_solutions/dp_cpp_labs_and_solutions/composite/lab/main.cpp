// main.cpp
#include "journey.h"
#include "setup_class.h"
#include "use_class.h"

int main()
{
	journey::the_num_of_stops = 0;
	journey * a_journey = setup_class::setup();

	use_class::use(a_journey);

	return 0;
}
