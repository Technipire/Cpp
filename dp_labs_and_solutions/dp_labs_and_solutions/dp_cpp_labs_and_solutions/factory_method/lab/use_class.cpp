// use_class.cpp

#include <iostream>
#include <typeinfo>
#include "garden.h"
#include "tomato.h"
#include "use_class.h"

void use_class::use(garden * a_garden)
{
	tomato * a_tomato = a_garden->make_tomato();

	std::cout << typeid(*a_tomato).name() << std::endl;
}
