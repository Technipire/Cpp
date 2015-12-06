// garden.cpp

#include "conventional_tomato.h"
#include "dp_exception.h"
#include "organic_tomato.h"
#include "garden.h"
#include "tomato.h"

garden::garden(tomato* a_tomato_type)
{
	set_tomato_type(a_tomato_type);
}

void garden::set_tomato_type(tomato* a_tomato_type)
{
	if (a_tomato_type)
	{
		my_tomato_type = a_tomato_type;
	}
	else 
	{
		my_tomato_type = NULL;
	}
}

