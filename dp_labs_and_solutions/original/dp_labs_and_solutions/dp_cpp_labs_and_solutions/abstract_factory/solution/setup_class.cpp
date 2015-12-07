// setup_class.cpp

#include "conventional_garden.h"
#include "conventional_lettuce.h"
#include "setup_class.h"
class garden;

garden * setup_class::setup()
{
	return new conventional_garden(new conventional_lettuce(1, 2));
}
