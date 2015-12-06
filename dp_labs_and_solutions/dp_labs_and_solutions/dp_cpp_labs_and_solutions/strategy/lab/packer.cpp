// packer.cpp

#include "packer.h"

packer::packer(packing_strategy* a_strategy)
{
	set_strategy(a_strategy);
}

void packer::set_strategy(packing_strategy* a_strategy)
{
	if (!a_strategy)
	{
		std::cout << "exception!" << std::endl;
	}
	my_packing_strategy = a_strategy;
}

packing_strategy* packer::get_strategy()
{
	return my_packing_strategy;
}

void packer::pack()
{}
