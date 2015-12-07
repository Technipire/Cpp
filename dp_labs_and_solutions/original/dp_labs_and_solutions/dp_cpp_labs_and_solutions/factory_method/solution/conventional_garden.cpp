// conventional_garden.cpp

#include "conventional_garden.h"
#include "conventional_tomato.h"
#include "garden.h"

conventional_tomato * conventional_garden::make_tomato() const
{
	return new conventional_tomato(1, 2);
}
