#include "garden.h"

class conventional_garden : public garden
{
	conventional_tomato* make_tomato()
	{
		return new conventioal_tomato(3, 1);
	}
};