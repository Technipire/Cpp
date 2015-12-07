// setup_class.cpp

#include "packer.h"
#include "setup_class.h"
#include "slow_careful_packing_strategy.h"

packer * setup_class::setup()
{
	return new packer(new slow_careful_packing_strategy());
}
