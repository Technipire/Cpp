// packing_strategy.h

#ifndef packing_strategy_header
#define packing_strategy_header

class packer;

class packing_strategy
{
public:
	virtual void pack(packer & a_packer) = 0;
};

#endif
