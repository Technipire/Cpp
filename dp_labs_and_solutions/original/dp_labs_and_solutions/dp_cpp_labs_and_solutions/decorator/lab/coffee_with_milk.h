// coffee_with_milk.h

#ifndef coffee_with_milk_header
#define coffee_with_milk_header

#include "coffee.h"

class coffee_with_milk : public coffee
{
public:
	virtual void prepare() = 0;
};

#endif
