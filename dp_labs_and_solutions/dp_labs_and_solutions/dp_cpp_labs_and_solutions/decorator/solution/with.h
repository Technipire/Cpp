// with.h

#ifndef with_header
#define with_header

#include "beverage.h"

class with : public beverage
{
public:
	with(beverage * a_successor);

	virtual void prepare();

private:
	beverage * get_successor() const;
	void set_successor(beverage * a_successor);

	beverage * my_successor;
};

#endif
