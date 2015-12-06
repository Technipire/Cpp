// setup_class.cpp

#include "conventional_lettuce.h"
class lettuce;
#include "setup_class.h"

lettuce * setup_class::setup()
{
	return new conventional_lettuce(1, 2);
}
