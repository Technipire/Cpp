// main.cpp

class meeting;
#include "setup_class.h"
#include "use_class.h"

int main()
{
	meeting * a_meeting = setup_class::setup();

	use_class::use(a_meeting);

	return 0;
}
