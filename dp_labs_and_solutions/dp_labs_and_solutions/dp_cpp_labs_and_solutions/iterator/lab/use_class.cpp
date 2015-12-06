// use_class.cpp

#include <iostream>
#include "dp_iterator.h"
#include "use_class.h"

void use_class::use(dp_iterator<int> * a_iterator)
{
	while (!a_iterator->is_done())
	{
		std::cout << a_iterator->get_current() << std::endl;

		a_iterator->advance();
	}
}
