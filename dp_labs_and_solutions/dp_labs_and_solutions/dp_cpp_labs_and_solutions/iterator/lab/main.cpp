// main.cpp

#include <iostream>
#include "dp_iterator.h"
#include "dp_list.h"
#include "use_class.h"

int main()
{
	dp_list<int> * a_list = new dp_list<int>();

	std::cout << "List of length 0:" << std::endl;
	use_class::use(a_list->make_reverse_iterator());
	std::cout << std::endl;

	a_list->add(1);

	std::cout << "List of length 1:" << std::endl;
	use_class::use(a_list->make_reverse_iterator());
	std::cout << std::endl;

	a_list->add(2);

	std::cout << "List of length 2:" << std::endl;
	use_class::use(a_list->make_reverse_iterator());
	std::cout << std::endl;

	a_list->add(3);

	std::cout << "List of length 3:" << std::endl;
	use_class::use(a_list->make_reverse_iterator());
	std::cout << std::endl;

	return 0;
}
