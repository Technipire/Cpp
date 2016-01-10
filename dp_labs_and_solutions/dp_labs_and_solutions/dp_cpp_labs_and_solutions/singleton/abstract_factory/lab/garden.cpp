// garden.cpp

#include "dp_exception.h"
#include "lettuce.h"
#include "garden.h"
#include "conventional_garden.h"
#include "organic_garden.h"
#include "tomato.h"
#include "conventional_lettuce.h"
#include "organic_lettuce.h"

garden* garden::the_instance(nullptr);

garden::garden(lettuce* a_lettuce_prototype)
{
    set_lettuce_prototype(a_lettuce_prototype);
}

garden::~garden()
{
    delete my_lettuce;
    my_lettuce = nullptr;
}

void garden::set_lettuce_prototype(lettuce* a_lettuce_prototype)
{
    if (a_lettuce_prototype == nullptr)
    {
        dp_exception("a_lettuce_prototype is NULL!");
    }
    my_lettuce = a_lettuce_prototype->clone();
}

garden& garden::get_instance()
{
	if (the_instance == nullptr)
	{
		if (1)
		{
			the_instance = new conventional_garden(new conventional_lettuce(2, 1));
		}
		else
		{
			the_instance = new organic_garden(new organic_lettuce(2, 1));
		}
	}
	return *the_instance;
}
lettuce * garden::make_lettuce() const
{
	return my_lettuce;
}
