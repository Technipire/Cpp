// producer.h

#ifndef producer_header
#define producer_header

#include <string>

class producer
{
public:
	producer(const std::string & a_name);

	int get_bid() const;

	void produce();

private:
	std::string my_name;
};

#endif
