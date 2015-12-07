// use.cpp

#include "fast_sloppy_packing_strategy.h"
#include "packer.h"
#include "use_class.h"

void use_class::use(packer * a_packer)
{
	a_packer->pack();

	a_packer->set_strategy(new fast_sloppy_packing_strategy());

	a_packer->pack();
}
