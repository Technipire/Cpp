// middleman.h

#ifndef middleman_header
#define middleman_header

#include "dp_vector.h"
class producer;

class middleman
{
public:
	middleman();

	void add_producer(producer * a_producer);

	producer * choose_producer() const;

private:
	dp_vector<producer *> my_producers;
};

#endif
