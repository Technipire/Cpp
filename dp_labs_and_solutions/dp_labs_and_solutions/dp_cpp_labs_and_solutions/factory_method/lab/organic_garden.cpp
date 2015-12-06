#include "organic_garden.h"

organic_tomato* organic_garden::make_tomato()
{
	return new organic_tomato(4, 0);
}