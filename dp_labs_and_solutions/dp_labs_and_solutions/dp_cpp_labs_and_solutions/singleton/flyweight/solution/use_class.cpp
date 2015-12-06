// use_class.cpp

#include <iostream>
#include "dp_exception.h"
#include "journey.h"
#include "use_class.h"

void use_class::use(journey * a_journey)
{
	if (a_journey == nullptr)
	{
		throw dp_exception("void use_class::use(journey * a_journey) -- a_journey == nullptr.");
	}

	a_journey->output(std::cout);
}
