// setup_class.cpp

#include "consumer.h"
#include "producer.h"
#include "setup_class.h"

consumer * setup_class::setup()
{
	producer * a_producer1 = new producer("Alpha");
	producer * a_producer2 = new producer("Bravo");
	producer * a_producer3 = new producer("Charlie");
	producer * a_producer4 = new producer("Delta");
	producer * a_producer5 = new producer("Echo");
	producer * a_producer6 = new producer("Foxtrot");

	consumer * a_consumer = new consumer("Zulu");
	a_consumer->add_producer(a_producer1);
	a_consumer->add_producer(a_producer2);
	a_consumer->add_producer(a_producer3);
	a_consumer->add_producer(a_producer4);
	a_consumer->add_producer(a_producer5);
	a_consumer->add_producer(a_producer6);

	return a_consumer;
}
