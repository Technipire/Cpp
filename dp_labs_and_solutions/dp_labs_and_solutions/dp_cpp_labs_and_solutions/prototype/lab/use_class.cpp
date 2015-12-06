// use_class.cpp

#include <iostream>
#include <typeinfo>
#include "lettuce.h"
#include "garden.h"
#include "use_class.h"

void use_class::use(garden * a_garden)
{
	
	lettuce * a_lettuce = a_garden->make_lettuce();

	std::cout << typeid(*a_lettuce).name() << std::endl;
}

