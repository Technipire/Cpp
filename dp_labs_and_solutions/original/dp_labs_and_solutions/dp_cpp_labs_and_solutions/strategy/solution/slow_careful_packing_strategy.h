// slow_careful_packing_strategy.h

#ifndef slow_careful_packing_strategy_header
#define slow_careful_packing_strategy_header

class packer;
#include "packing_strategy.h"

class slow_careful_packing_strategy : public packing_strategy
{
public:
	virtual void pack(packer & a_packer);
};

#endif
