#ifndef PACKING_STRATEGY__H__
#define PACKING_STRATEGY__H__

class packer;

class packing_strategy
{
public:
	virtual void pack(packer* a_packer) = 0;
};

#endif