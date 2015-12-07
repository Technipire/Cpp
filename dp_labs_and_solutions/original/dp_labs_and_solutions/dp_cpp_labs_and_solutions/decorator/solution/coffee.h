// coffee.h

#ifndef coffee_header
#define coffee_header

#include "beverage.h"

class coffee : public beverage
{
public:
	virtual void prepare();
};

#endif
