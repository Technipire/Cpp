// consumer.cpp

#include <iostream>
#include "consumer.h"
#include "middleman.h"
#include "producer.h"

consumer::consumer(const std::string & a_name, middleman * a_middleman)
{
	my_name = a_name;
	my_middleman = a_middleman;
}

void consumer::consume()
{
	producer * a_producer = my_middleman->choose_producer();
	if (a_producer == nullptr)
	{
		throw dp_exception("void consumer::consume() -- a_producer == nullptr.");
	}
	
	a_producer->produce();
	std::cout << my_name << " consumes." << std::endl;
}
