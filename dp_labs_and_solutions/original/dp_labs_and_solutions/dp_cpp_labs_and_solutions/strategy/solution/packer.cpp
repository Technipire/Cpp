// packer.cpp

#include "dp_exception.h"
#include "packer.h"
#include "packing_strategy.h"

packer::packer(packing_strategy * a_strategy)
{
	set_strategy(a_strategy);
}

void packer::pack()
{
	get_strategy()->pack(*this);
}

void packer::set_strategy(packing_strategy * a_strategy)
{
	if (a_strategy == nullptr)
	{
		throw dp_exception("void packer::set_strategy(packing_strategy * a_strategy) -- Missing packing_strategy.");
	}

	my_strategy = a_strategy;
}

packing_strategy * packer::get_strategy() const
{
	return my_strategy;
}
