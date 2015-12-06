// setup_class.cpp

class packer;
#include "setup_class.h"
#include "slow_careful_packer.h"

packer * setup_class::setup()
{
	return new slow_careful_packer();
}
