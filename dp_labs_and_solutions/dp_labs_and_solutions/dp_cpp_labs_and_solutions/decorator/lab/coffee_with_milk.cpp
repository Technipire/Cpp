// coffee_with_milk.cpp

#include <iostream>
#include "coffee.h"
#include "coffee_with_milk.h"

void coffee_with_milk::prepare()
{
	coffee::prepare();
	std::cout << "Adding milk.\n";
}
