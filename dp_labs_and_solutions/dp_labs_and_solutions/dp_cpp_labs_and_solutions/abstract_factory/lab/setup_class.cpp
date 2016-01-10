// setup_class.cpp

#include "setup_class.h"
#include "conventional_garden.h"
#include "conventional_lettuce.h"
garden * setup_class::setup()
{
    return new conventional_garden(new conventional_lettuce(1, 2));
}
