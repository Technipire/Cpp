// garden.cpp

#include "dp_exception.h"
#include "lettuce.h"
#include "garden.h"
#include "tomato.h"

garden::garden(lettuce * a_lettuce_prototype)
{
	set_lettuce_prototype(a_lettuce_prototype);
}

void garden::set_lettuce_prototype(lettuce * a_lettuce_prototype)
{
	if (a_lettuce_prototype == nullptr)
	{
		throw dp_exception("void garden::set_lettuce_prototype(lettuce * a_lettuce_prototype) -- a_lettuce_prototype == nullptr.");
	}

	my_lettuce_prototype = a_lettuce_prototype->clone();
}

lettuce * garden::make_lettuce() const
{
	return my_lettuce_prototype->clone();
}
