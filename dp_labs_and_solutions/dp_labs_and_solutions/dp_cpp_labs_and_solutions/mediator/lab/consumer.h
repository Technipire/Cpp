// consumer.h

#ifndef consumer_header
#define consumer_header

#include <string>
#include "dp_vector.h"
class producer;

class consumer
{
public:
	consumer(const std::string & a_name);

	void add_producer(producer * a_producer);

	producer * choose_producer() const;

	void consume();

private:
	std::string my_name;
	dp_vector<producer *> my_producers;
};

#endif
