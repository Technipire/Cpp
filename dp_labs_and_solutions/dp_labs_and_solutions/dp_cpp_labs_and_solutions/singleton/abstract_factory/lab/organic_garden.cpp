// organic_garden.cpp

#include "organic_garden.h"
#include "organic_lettuce.h"
#include "organic_tomato.h"
#include "garden.h"

organic_garden::organic_garden(organic_lettuce * a_lettuce_prototype)
: garden(a_lettuce_prototype)
{
}


organic_tomato * organic_garden::make_tomato() const
{
	return new organic_tomato(1, 2);
}