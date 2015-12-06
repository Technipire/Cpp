// organic_garden.h

#ifndef organic_garden_header
#define organic_garden_header

#include "organic_tomato.h"
#include "garden.h"

class organic_garden : public garden
{
public:
	virtual organic_tomato * make_tomato() const;
};

#endif
