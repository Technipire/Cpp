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
	else
	{
		a_copy = a_lettuce->clone();
	}
}
