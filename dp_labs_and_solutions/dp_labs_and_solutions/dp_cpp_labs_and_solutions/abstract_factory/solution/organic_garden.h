// organic_garden.h

#ifndef organic_garden_header
#define organic_garden_header

class organic_lettuce;
#include "organic_tomato.h"
#include "garden.h"

class organic_garden : public garden
{
public:
	organic_garden(organic_lettuce * a_lettuce_prototype);

	void set_lettuce_prototype(organic_lettuce * a_lettuce_prototype);

	virtual organic_tomato * make_tomato() const;
};

#endif
