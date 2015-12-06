// square.cpp

#include "square.h"

square::square(double a_side)
{
	set_side(a_side);
}

double square::get_side() const
{
	return my_side;
}

void square::set_side(double a_side)
{
	my_side = a_side;
}
