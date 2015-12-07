// main.cpp

class journey;
#include "setup_class.h"
#include "use_class.h"

int main()
{
	journey * a_journey = setup_class::setup();

	use_class::use(a_journey);

	return 0;
}
