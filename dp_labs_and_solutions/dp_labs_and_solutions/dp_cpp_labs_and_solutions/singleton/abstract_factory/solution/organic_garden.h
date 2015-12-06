// organic_garden.h

#ifndef organic_garden_header
#define organic_garden_header

class organic_lettuce;
#include "organic_tomato.h"
#include "garden.h"

class organic_garden : public garden
{
// singleton:

private:
	organic_garden(organic_lettuce * a_lettuce_prototype);
	organic_garden(const organic_garden & other); // DO NOT DEFINE!
	organic_garden & operator=(const organic_garden & other); // DO NOT DEFINE!
	virtual ~organic_garden();

	friend garden & garden::get_instance();

// non-singleton:

public:
	void set_lettuce_prototype(organic_lettuce * a_lettuce_prototype);

	virtual organic_tomato * make_tomato() const;
};

#endif
