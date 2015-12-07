// lettuce.cpp

#include "lettuce.h"

lettuce::lettuce(double a_price)
{
	my_price = a_price;
}

lettuce::lettuce(const lettuce & other)
{
	my_price = other.my_price;
}

lettuce::~lettuce()
{
}
