// barista.cpp

#include <string>
#include <vector>
#include "barista.h"
#include "coffee.h"
#include "coffee_with_milk_with_sugar.h"
#include "coffee_with_milk_without_sugar.h"
#include "coffee_without_milk_with_sugar.h"
#include "coffee_without_milk_without_sugar.h"

coffee * barista::make_coffee(const std::vector<std::string> & a_description)
{
	switch (a_description.size())
	{
		case 1:
			if (a_description[0] == "coffee")
			{
				return new coffee_without_milk_without_sugar();
			}
			else
			{
				// throw an exception.
			}
			break;
		case 2:
			if (a_description[0] == "coffee")
			{
				if (a_description[1] == "milk")
				{
					return new coffee_with_milk_without_sugar();
				}
				else if (a_description[1] == "sugar")
				{
					return new coffee_without_milk_with_sugar();
				}
				else
				{
					// throw an exception.
				}
			}
			else
			{
				// throw an exception.
			}
			break;
		case 3:
			if (a_description[0] == "coffee")
			{
				if (a_description[1] == "milk")
				{
					if (a_description[2] == "sugar")
					{
						return new coffee_with_milk_with_sugar();
					}
					else
					{
						// throw an exception.
					}
				}
				else if (a_description[1] == "sugar")
				{
					if (a_description[2] == "milk")
					{
						return new coffee_with_milk_with_sugar();
					}
					else
					{
						// throw an exception.
					}
				}
				else
				{
					// throw an exception.
				}
			}
			else
			{
				// throw an exception.
			}
			break;
		default:
			// throw an exception.
			break;
	}
	return nullptr; // when we add exceptions, we can remove this.
}
