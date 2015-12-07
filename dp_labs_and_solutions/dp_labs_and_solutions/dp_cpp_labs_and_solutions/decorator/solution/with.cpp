// with.cpp

#include <cstdlib>
class beverage;
#include "with.h"

with::with(beverage * a_successor)
{
	set_successor(a_successor);
}

void with::prepare()
{
    get_successor()->prepare();
}

beverage * with::get_successor() const
{
	return my_successor;
}

void with::set_successor(beverage * a_successor)
{
	if (a_successor == nullptr)
	{
		// throw an exception.
	}
	my_successor = a_successor;
}