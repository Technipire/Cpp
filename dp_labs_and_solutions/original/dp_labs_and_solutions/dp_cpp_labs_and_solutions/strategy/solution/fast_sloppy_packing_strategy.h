// fast_sloppy_packing_strategy.h

#ifndef fast_sloppy_packing_strategy_header
#define fast_sloppy_packing_strategy_header

class packer;
#include "packing_strategy.h"

class fast_sloppy_packing_strategy : public packing_strategy
{
public:
	virtual void pack(packer & a_packer);
};

#endif
