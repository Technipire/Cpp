// main.cpp

class lettuce;
#include "setup_class.h"
#include "use_class.h"

int main()
{
	lettuce * a_lettuce = setup_class::setup();

	use_class::use(a_lettuce);

	return 0;
}
