// coffee_with_milk_with_sugar.cpp

#include <iostream>
#include "coffee_with_milk.h"
#include "coffee_with_milk_with_sugar.h"

void coffee_with_milk_with_sugar::prepare()
{
	coffee_with_milk::prepare();
	std::cout << "Adding sugar.\n";
}
