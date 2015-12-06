#include "organic_garden.h"

organic_garden::organic_garden(organic_lettuce* a_lettuce_prototype)
{
	set_lettuce_prototype(a_lettuce_prototype);
}

void organic_garden::set_lettuce_prototype(organic_lettuce* a_lettuce_prototype)
{
	my_lettuce = a_lettuce_prototype;
}

organic_tomato* organic_garden::make_tomato()
{
	return new organic_tomato();
}