// use_class.cpp

#include <iostream>
#include <typeinfo>
#include "lettuce.h"
#include "garden.h"
#include "tomato.h"
#include "use_class.h"

void use_class::use()
{
	lettuce * a_lettuce = garden::get_instance();

	std::cout << typeid(*a_lettuce).name() << std::endl;

	tomato * a_tomato = garden::get_instance();

	std::cout << typeid(*a_tomato).name() << std::endl;
}
