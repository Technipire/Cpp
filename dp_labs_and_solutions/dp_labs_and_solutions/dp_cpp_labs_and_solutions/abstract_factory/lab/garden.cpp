// garden.cpp

#include "conventional_lettuce.h"
#include "conventional_tomato.h"
#include "dp_exception.h"
#include "lettuce.h"
#include "organic_lettuce.h"
#include "organic_tomato.h"
#include "garden.h"
#include "tomato.h"

garden::garden(lettuce* a_lettuce_prototype)
{
	set_lettuce_prototype(a_lettuce_prototype);
}

void garden::set_lettuce_prototype(lettuce* a_lettuce_prototype)
{
	if (a_lettuce_prototype == nullptr)
	{
		throw dp_exception("void garden::set_lettuce_prototype(int a_lettuce_type) -- A garden must have a valid lettuce type.");
	}

	my_lettuce = a_lettuce_prototype->clone();
}

lettuce* garden::make_lettuce() const
{
    return my_lettuce;
}


