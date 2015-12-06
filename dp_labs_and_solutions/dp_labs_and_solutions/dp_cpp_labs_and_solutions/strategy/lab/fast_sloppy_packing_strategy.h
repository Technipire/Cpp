#ifndef FAST_SLOPPY_PACKING_STRATEGY__H__
#define FAST_SLOPPY_PACKING_STRATEGY__H__

#include "packing_strategy.h"

class fast_sloppy_packing_strategy : public packing_strategy
{
public:
	void pack(packer* a_packer);
};

#endif