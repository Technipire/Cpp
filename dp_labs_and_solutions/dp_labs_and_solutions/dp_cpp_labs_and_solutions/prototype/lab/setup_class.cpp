// setup_class.cpp

#include "setup_class.h"
#include "garden.h"

garden * setup_class::setup()
{
	lettuce* aLettuce = new conventional_lettuce(0, 1);
	return new garden(aLettuce);
}
