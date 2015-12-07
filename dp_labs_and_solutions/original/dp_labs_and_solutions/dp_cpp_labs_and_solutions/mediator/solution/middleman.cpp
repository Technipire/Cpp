// middleman.cpp

#include "dp_const_iterator.h"
#include "middleman.h"
#include "producer.h"

middleman::middleman()
{
}

void middleman::add_producer(producer * a_producer)
{
	if (a_producer == nullptr)
	{
		throw dp_exception("void middleman::add_producer(producer * a_producer) -- a_producer == nullptr.");
	}

	my_producers.add(a_producer);
}

producer * middleman::choose_producer() const
{
	producer * a_lowest_bid_producer(nullptr);
	int a_lowest_bid(0);

	dp_const_iterator<producer *> * a_iterator = my_producers.make_iterator();
	while (!a_iterator->is_done())
	{
		producer * a_producer = a_iterator->get_current();
		int a_bid = a_producer->get_bid();
		if (a_lowest_bid == 0 || a_bid < a_lowest_bid)
		{
			a_lowest_bid = a_bid;
			a_lowest_bid_producer = a_producer;
		}
		a_iterator->advance();
	}

	return a_lowest_bid_producer;
}
