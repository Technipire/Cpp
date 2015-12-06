// garden.cpp

#include "dp_exception.h"
#include "lettuce.h"
#include "garden.h"
#include "conventional_garden.h"
#include "organic_garden.h"
#include "tomato.h"

garden::garden(lettuce * a_lettuce_prototype)
{
}

garden& garden::get_instance()
{
	if (the_instance == nullptr)
	{
		if (1)
		{
			the_instance = new conventional_garden();
		}
		else
		{
			the_instance = new organic_gardent();
		}
	}
	return *the_instance;
}
lettuce * garden::make_lettuce() const
{
	return my_lettuce_prototype->clone();
}
