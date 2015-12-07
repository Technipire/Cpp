// main.cpp

class driver;
#include "setup_class.h"
#include "use_class.h"

int main()
{
	driver * a_driver = setup_class::setup();

	use_class::use(a_driver);

	return 0;
}
