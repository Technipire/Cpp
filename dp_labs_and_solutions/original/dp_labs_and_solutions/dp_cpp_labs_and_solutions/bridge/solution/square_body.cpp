// square_body.cpp

#include "square_body.h"

square_body::square_body(double a_side)
{
	my_side = a_side;
}

double square_body::get_height() const
{
	return my_side;
}

double square_body::get_width() const
{
	return my_side;
}

bool square_body::is_square() const
{
	return true;
}
