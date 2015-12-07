// use_class.cpp

#include <iostream>
#include "foo.h"
#include "use_class.h"

void use_class::use(foo * a_foo)
{
	std::cout << "before:" << std::endl;
	a_foo->bar();
	std::cout << "after:" << std::endl;

	std::cout << "before:" << std::endl;
	a_foo->bar();
	std::cout << "after:" << std::endl;

	std::cout << "before:" << std::endl;
	a_foo->bar();
	std::cout << "after:" << std::endl;
}
