// rectangle.cpp

#include "rectangle.h"

rectangle::rectangle(double a_height, double a_width)
{
	set_height(a_height);
	set_width (a_width );
}

double rectangle::get_height() const
{
	return my_height;
}

double rectangle::get_width() const
{
	return my_width;
}

void rectangle::set_height(double a_height)
{
	my_height = a_height;
}

void rectangle::set_width(double a_width)
{
	my_width = a_width;
}
