// consumer.h

#ifndef consumer_header
#define consumer_header

#include <string>
class middleman;

class consumer
{
public:
	consumer(const std::string & a_name, middleman * a_middleman);

	void consume();

private:
	std::string my_name;
	middleman * my_middleman;
};

#endif
