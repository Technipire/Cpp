// setup_class.cpp

#include "conventional_garden.h"
#include "setup_class.h"
class garden;

garden * setup_class::setup()
{
	return new conventional_garden();
}
