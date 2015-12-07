// garden.cpp

#include "conventional_garden.h"
#include "conventional_lettuce.h"
#include "dp_exception.h"
#include "lettuce.h"
#include "organic_garden.h"
#include "organic_lettuce.h"
#include "garden.h"
#include "tomato.h"

// Singleton:

garden * garden::the_instance(nullptr);

garden::garden(lettuce * a_lettuce_prototype)
{
	set_lettuce_prototype(a_lettuce_prototype);
}

garden::~garden()
{
}

garden & garden::get_instance()
{
	if (the_instance == nullptr)
	{
		if (true)
		{
			the_instance = new conventional_garden(new conventional_lettuce(1, 2));
		}
		else
		{
			the_instance = new organic_garden(new organic_lettuce(1, 2));
		}
	}
	return *the_instance;
}

// non-Singleton:

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