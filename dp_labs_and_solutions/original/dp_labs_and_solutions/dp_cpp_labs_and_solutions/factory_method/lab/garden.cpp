// garden.cpp

#include "conventional_tomato.h"
#include "dp_exception.h"
#include "organic_tomato.h"
#include "garden.h"
#include "tomato.h"

garden::garden(int a_tomato_type)
{
	set_tomato_type(a_tomato_type);
}

void garden::set_tomato_type(int a_tomato_type)
{
	if (a_tomato_type != 1 && a_tomato_type != 2)
	{
		throw dp_exception("void garden::set_tomato_type(int a_tomato_type) -- A garden must have a valid tomato type.");
	}

	my_tomato_type = a_tomato_type;
}

tomato * garden::make_tomato()
{
	if (my_tomato_type == 1)
	{
		return new conventional_tomato(1, 2);
	}
	else if (my_tomato_type == 2)
	{
		return new organic_tomato(1, 2);
	}
	else
	{
		throw dp_exception("tomato * garden::make_tomato() -- Oops, should never reach this point.");
	}
}
