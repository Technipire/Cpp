// setup_class.cpp

#include "setup_class.h"
#include "conventional_garden.h"
class garden;

garden * setup_class::setup()
{
	return new conventional_garden();
}
