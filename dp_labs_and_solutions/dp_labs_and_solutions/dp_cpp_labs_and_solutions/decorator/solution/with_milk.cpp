// with_milk.cpp

#include <iostream>
#include "beverage.h"
#include "with_milk.h"

with_milk::with_milk(beverage * a_successor)
: with(a_successor)
{
}

void with_milk::prepare()
{
	with::prepare();
	std::cout << "Adding milk.\n";
}
