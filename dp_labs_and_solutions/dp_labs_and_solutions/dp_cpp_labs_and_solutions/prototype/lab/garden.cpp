// garden.cpp

#include "conventional_lettuce.h"
#include "dp_exception.h"
#include "lettuce.h"
#include "organic_lettuce.h"
#include "garden.h"

garden::garden(lettuce* a_lettuce_prototype)
{
	set_lettuce_prototype(a_lettuce_prototype);
}

void garden::set_lettuce_prototype(lettuce* a_lettuce_prototype)
{
	if (!a_lettuce_prototype) 
	{
            throw dp_exception("a_lettuce_prototype is NULL!");
	}
	my_lettuce_prototype = a_lettuce_prototype->clone();
}

lettuce * garden::make_lettuce() const
{
	return my_lettuce_prototype;
}
