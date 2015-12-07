// conventional_garden.h

#ifndef conventional_garden_header
#define conventional_garden_header

#include "conventional_tomato.h"
#include "garden.h"

class conventional_garden : public garden
{
public:
	virtual conventional_tomato * make_tomato() const;
};

#endif
