// main.cpp

class purchase;
#include "setup_class.h"
#include "use_class.h"

int main()
{
	purchase * a_purchase = setup_class::setup();

	use_class::use(a_purchase);

	return 0;
}
