// setup_class.cpp

#include "setup_class.h"
#include "garden.h"

garden * setup_class::setup()
{
	return new garden(1);
}
