// organic_tomato.cpp

#include "organic_tomato.h"
#include "tomato.h"

organic_tomato::organic_tomato(double a_price, int a_number_of_insects)
: tomato(a_price)
{
	my_number_of_insects = a_number_of_insects;
}

organic_tomato::~organic_tomato()
{
}
