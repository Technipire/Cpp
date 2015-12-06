// with_milk.h

#ifndef with_milk_header
#define with_milk_header

class beverage;
#include "with.h"

class with_milk : public with
{
public:
	with_milk(beverage * a_successor);

	virtual void prepare();
};

#endif
