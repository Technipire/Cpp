// rectangle_body.cpp

#include "rectangle_body.h"

rectangle_body::rectangle_body(double a_height, double a_width)
{
	my_height = a_height;
	my_width  = a_width ;
}

double rectangle_body::get_height() const
{
	return my_height;
}

double rectangle_body::get_width() const
{
	return my_width;
}

bool rectangle_body::is_square() const
{
	return false;
}
