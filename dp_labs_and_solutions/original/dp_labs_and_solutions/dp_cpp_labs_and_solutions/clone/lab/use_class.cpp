// use_class.cpp

#include <iostream>
#include <typeinfo>
#include "conventional_lettuce.h"
#include "dp_exception.h"
#include "lettuce.h"
#include "organic_lettuce.h"
#include "use_class.h"

void use_class::use(lettuce * a_lettuce)
{
	lettuce * a_copy(nullptr);

	if (a_lettuce == nullptr)
	{
		a_copy = nullptr;
	}
	else if (typeid(*a_lettuce) == typeid(conventional_lettuce))
	{
		a_copy = new conventional_lettuce(1, 2);
	}
	else if (typeid(*a_lettuce) == typeid(organic_lettuce))
	{
		a_copy = new organic_lettuce(1, 2);
	}
	else
	{
		throw dp_exception("Unrecognized subclass of lettuce.");
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
