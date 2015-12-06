// conventional_tomato.cpp

#include "conventional_tomato.h"
#include "tomato.h"

conventional_tomato::conventional_tomato(double a_price, int a_number_of_pesticides)
: tomato(a_price)
{
	my_number_of_pesticides = a_number_of_pesticides;
}

conventional_tomato::~conventional_tomato()
{
}
