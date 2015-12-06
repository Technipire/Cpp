// organic_garden.cpp

#include "organic_garden.h"
#include "organic_tomato.h"
#include "garden.h"

organic_tomato * organic_garden::make_tomato() const
{
	return new organic_tomato(1, 2);
}
