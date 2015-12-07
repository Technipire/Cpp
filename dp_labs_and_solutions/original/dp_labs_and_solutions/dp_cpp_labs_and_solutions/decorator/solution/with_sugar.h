// with_sugar.h

#ifndef with_sugar_header
#define with_sugar_header

class beverage;
#include "with.h"

class with_sugar : public with
{
public:
	with_sugar(beverage * a_successor);

	virtual void prepare();
};

#endif
