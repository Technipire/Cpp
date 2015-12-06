#ifndef ORGANIC_GARDEN__H__
#define ORGANIC_GARDEN__H__

#include "garden.h"
#include "organic_lettuce.h"
#include "organic_tomato.h"

class organic_garden : public garden
{
	organic_garden(organic_lettuce* a_lettuce_prototype);
	void set_lettuce_prototype(organic_lettuce* a_lettuce_prototype);
	organic_tomato* make_tomato();
}

#endif