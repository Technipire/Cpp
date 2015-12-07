// setup_class.cpp

#include "conventional_lettuce.h"
#include "setup_class.h"
#include "garden.h"

garden * setup_class::setup()
{
	return new garden(new conventional_lettuce(1, 2));
}
