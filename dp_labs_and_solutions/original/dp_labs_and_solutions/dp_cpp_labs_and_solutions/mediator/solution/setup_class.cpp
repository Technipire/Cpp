// setup_class.cpp

#include "consumer.h"
#include "middleman.h"
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

	middleman * a_middleman = new middleman();
	a_middleman->add_producer(a_producer1);
	a_middleman->add_producer(a_producer2);
	a_middleman->add_producer(a_producer3);
	a_middleman->add_producer(a_producer4);
	a_middleman->add_producer(a_producer5);
	a_middleman->add_producer(a_producer6);

	consumer * a_consumer = new consumer("Zulu", a_middleman);

	return a_consumer;
}
