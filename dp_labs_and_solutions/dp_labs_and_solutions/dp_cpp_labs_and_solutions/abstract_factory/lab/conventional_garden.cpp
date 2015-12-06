#include "conventional_garden.h"
#include "conventional_tomato.h"
conventional_garden::conventional_garden(conventional_lettuce* a_lettuce_type)
{
	set_lettuce_prototype(a_lettuce_type);
}

void conventional_garden::set_lettuce_prototype(conventional_lettuce* a_lettuce_type)
{
	my_lettuce = a_lettuce_type;
}

conventional_tomato* conventional_garden::make_tomato()
{
	return new conventional_tomato();
}