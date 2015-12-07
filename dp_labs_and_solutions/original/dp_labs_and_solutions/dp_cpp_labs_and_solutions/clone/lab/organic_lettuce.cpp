// organic_lettuce.cpp

#include "organic_lettuce.h"
#include "lettuce.h"

organic_lettuce::organic_lettuce(double a_price, int a_number_of_insects)
: lettuce(a_price)
{
	my_number_of_insects = a_number_of_insects;
}

organic_lettuce::organic_lettuce(const organic_lettuce & other)
: lettuce(other)
{
	my_number_of_insects = other.my_number_of_insects;
}

organic_lettuce::~organic_lettuce()
{
}
