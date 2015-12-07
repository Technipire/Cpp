// conventional_garden.h

#ifndef conventional_garden_header
#define conventional_garden_header

class conventional_lettuce;
#include "conventional_tomato.h"
#include "garden.h"

class conventional_garden : public garden
{
private:
	conventional_garden(conventional_lettuce * a_lettuce_prototype);
	friend garden& garden::get_instance();
	
public:

	virtual conventional_tomato * make_tomato() const;
};

#endif