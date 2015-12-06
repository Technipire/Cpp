// main.cpp

class expression;
#include "setup_class.h"
#include "use_class.h"

int main()
{
	expression * a_expression = setup_class::setup();

	use_class::use(a_expression);

	return 0;
}
