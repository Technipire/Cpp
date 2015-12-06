// use_class.cpp

#include <iostream>
#include <typeinfo>
#include "lettuce.h"
#include "use_class.h"

void use_class::use(lettuce * a_lettuce)
{
	lettuce * a_copy(nullptr);

	if (a_lettuce == nullptr)
	{
		a_copy = nullptr;
	}
	else
	{
		a_copy = a_lettuce->clone();
	}

	if (a_copy == nullptr)
	{
		std::cout << "nullptr" << std::endl;
	}
	else
	{
		std::cout << typeid(*a_copy).name() << std::endl;
	}
}
