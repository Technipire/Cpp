// coffee_without_milk.h

#ifndef coffee_without_milk_header
#define coffee_without_milk_header

#include "coffee.h"

class coffee_without_milk : public coffee
{
public:
	virtual void prepare() = 0;
};

#endif
