// barista.cpp

#include <string>
#include <vector>
#include "barista.h"
#include "beverage.h"
#include "coffee.h"
#include "with_milk.h"
#include "with_sugar.h"

beverage * barista::make_beverage(const std::vector<std::string> & a_description)
{
	if (a_description.size() == 0)
	{
		// throw an exception.
	}

	if (a_description[0] != "coffee")
	{
		// throw an exception.
	}

	beverage * a_beverage = new coffee();

	for (std::vector<std::string>::size_type i = 1; i < a_description.size(); ++i)
	{
		if (a_description[i] == "milk")
		{
			a_beverage = new with_milk(a_beverage);
		}
		else if (a_description[i] == "sugar")
		{
			a_beverage = new with_sugar(a_beverage);
		}
		else
		{
			// throw an exception.
		}
	}

	return a_beverage;
}
