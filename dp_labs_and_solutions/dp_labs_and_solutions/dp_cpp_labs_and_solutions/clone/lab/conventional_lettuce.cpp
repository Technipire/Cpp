// conventional_lettuce.cpp

#include "conventional_lettuce.h"

conventional_lettuce::conventional_lettuce(double a_price, int a_number_of_pesticides)
: lettuce(a_price)
{
	my_number_of_pesticides = a_number_of_pesticides;
}

conventional_lettuce::conventional_lettuce(const conventional_lettuce & other)
: lettuce(other)
{
	my_number_of_pesticides = other.my_number_of_pesticides;
}

conventional_lettuce::~conventional_lettuce()
{
}

conventional_lettuce* conventional_lettuce::clone() const
{
    return new conventional_lettuce(*this);
}
