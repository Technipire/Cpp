// coffee_without_milk_with_sugar.cpp

#include <iostream>
#include "coffee_without_milk.h"
#include "coffee_without_milk_with_sugar.h"

void coffee_without_milk_with_sugar::prepare()
{
	coffee_without_milk::prepare();
	std::cout << "Adding sugar.\n";
}
