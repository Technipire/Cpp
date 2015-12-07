// garden.cpp

#include "conventional_lettuce.h"
#include "conventional_tomato.h"
#include "dp_exception.h"
#include "lettuce.h"
#include "organic_lettuce.h"
#include "organic_tomato.h"
#include "garden.h"
#include "tomato.h"

garden::garden(int a_lettuce_type, int a_tomato_type)
{
	set_lettuce_type(a_lettuce_type);
	set_tomato_type(a_tomato_type);
}

void garden::set_lettuce_type(int a_lettuce_type)
{
	if (a_lettuce_type != 1 && a_lettuce_type != 2)
	{
		throw dp_exception("void garden::set_lettuce_type(int a_lettuce_type) -- A garden must have a valid lettuce type.");
	}

	my_lettuce_type = a_lettuce_type;
}

void garden::set_tomato_type(int a_tomato_type)
{
	if (a_tomato_type != 1 && a_tomato_type != 2)
	{
		throw dp_exception("void garden::set_tomato_type(int a_tomato_type) -- A garden must have a valid tomato type.");
	}

	my_tomato_type = a_tomato_type;
}

lettuce * garden::make_lettuce() const
{
	if (my_lettuce_type == 1)
	{
		return new conventional_lettuce(1, 2);
	}
	else if (my_lettuce_type == 2)
	{
		return new organic_lettuce(1, 2);
	}
	else
	{
		throw dp_exception("lettuce * garden::make_lettuce() -- Oops, should never reach this point.");
	}
}

tomato * garden::make_tomato() const
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