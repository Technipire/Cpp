// setup_class.cpp

#include "driver.h"
#include "setup_class.h"

driver * setup_class::setup()
{
	return new driver("Robert");
}
