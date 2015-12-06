#include "garden.h"
#include "organic_tomato.h"

class organic_garden : public garden
{
	private:
		organic_garden();
		organic_garden(const & aGarden);
		virtual organic_tomato* make_tomato();
}