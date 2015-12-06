// conventional_garden.cpp

#include "conventional_garden.h"
#include "conventional_lettuce.h"
#include "conventional_tomato.h"
#include "garden.h"

conventional_garden::conventional_garden(conventional_lettuce * a_lettuce_prototype)
: garden(a_lettuce_prototype)
{
}

void conventional_garden::set_lettuce_prototype(conventional_lettuce * a_lettuce_prototype)
{
	garden::set_lettuce_prototype(a_lettuce_prototype);
}

conventional_tomato * conventional_garden::make_tomato() const
{
	return new conventional_tomato(1, 2);
}
