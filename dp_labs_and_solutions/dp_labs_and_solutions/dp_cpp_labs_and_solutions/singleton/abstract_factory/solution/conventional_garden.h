// conventional_garden.h

#ifndef conventional_garden_header
#define conventional_garden_header

class conventional_lettuce;
#include "conventional_tomato.h"
#include "garden.h"

class conventional_garden : public garden
{
// singleton:

private:
	conventional_garden(conventional_lettuce * a_lettuce_prototype);
	conventional_garden(const conventional_garden & other); // DO NOT DEFINE!
	conventional_garden & operator=(const conventional_garden & other); // DO NOT DEFINE!
	virtual ~conventional_garden();

	friend garden & garden::get_instance();

// non-singleton:

public:
	void set_lettuce_prototype(conventional_lettuce * a_lettuce_prototype);

	virtual conventional_tomato * make_tomato() const;
};

#endif
