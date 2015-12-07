// main.cpp

class packer;
#include "setup_class.h"
#include "use_class.h"

int main()
{
	packer * a_packer = setup_class::setup();

	use_class::use(a_packer);

	return 0;
}
