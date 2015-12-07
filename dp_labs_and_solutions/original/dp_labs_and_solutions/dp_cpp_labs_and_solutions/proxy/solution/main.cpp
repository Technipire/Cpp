// main.cpp

class foo;
#include "setup_class.h"
#include "use_class.h"

int main()
{
	foo * a_foo = setup_class::setup();

	use_class::use(a_foo);

	return 0;
}
