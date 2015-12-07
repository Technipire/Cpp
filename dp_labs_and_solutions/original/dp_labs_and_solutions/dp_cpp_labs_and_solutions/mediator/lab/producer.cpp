// producer.cpp

#include <iostream>
#include <cstdlib>
#include "producer.h"

producer::producer(const std::string & a_name)
{
	my_name = a_name;
}

int producer::get_bid() const
{
	int result = rand() % 100 + 1;

	std::cout << my_name << " bids " << result << "." << std::endl;

	return result;
}

void producer::produce()
{
	std::cout << my_name << " produces." << std::endl;
}
