// with_sugar.cpp

#include <iostream>
#include "beverage.h"
#include "with_sugar.h"

with_sugar::with_sugar(beverage * a_successor)
: with(a_successor)
{
}

void with_sugar::prepare()
{
	with::prepare();
	std::cout << "Adding sugar.\n";
}
