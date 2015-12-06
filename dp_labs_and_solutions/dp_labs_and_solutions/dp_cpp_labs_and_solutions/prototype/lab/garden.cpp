// garden.cpp

#include "conventional_lettuce.h"
#include "dp_exception.h"
#include "lettuce.h"
#include "organic_lettuce.h"
#include "garden.h"

garden::garden(lettuce* a_lettuce_type)
{
	set_lettuce_type(a_lettuce_type);
}

void garden::set_lettuce_type(lettuce* a_lettuce_type)
{
	if (!a_lettuce_type) 
	{
		return;
	}
	my_lettuce_type = a_lettuce_type->clone();
}

lettuce * garden::make_lettuce() const
{
	return my_lettuce_type;
}
