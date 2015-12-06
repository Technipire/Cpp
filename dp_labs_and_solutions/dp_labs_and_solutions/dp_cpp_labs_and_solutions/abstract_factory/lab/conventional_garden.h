#ifndef CONVENTIONAL_GARDEN__H__
#define CONVENTIONAL_GARDEN__H__

#include "garden.h"
#include "conventional_lettuce.h"
#include "conventional_tomato.h"

class conventional_garden : public garden
{
	conventional_garden(conventional_lettuce* a_lettuce_prototype);
	void set_lettuce_prototype(conventional_lettuce* a_lettuce_prototype);
	conventional_tomato* make_tomato();
}

#endif