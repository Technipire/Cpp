// main.cpp

class command;
#include "setup_class.h"
#include "use_class.h"

int main()
{
	command * a_command = setup_class::setup();

	use_class::use(a_command);

	return 0;
}
