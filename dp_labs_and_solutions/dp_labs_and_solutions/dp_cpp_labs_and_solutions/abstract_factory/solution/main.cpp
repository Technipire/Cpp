// main.cpp

#include "setup_class.h"
class garden;
#include "use_class.h"

int main()
{
	garden * a_garden = setup_class::setup();

	use_class::use(a_garden);

	return 0;
}
