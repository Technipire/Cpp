// literal_flyweight_factory.h

#ifndef literal_flyweight_factory_header
#define literal_flyweight_factory_header

#include "dp_map.h"
class literal;

class literal_flyweight_factory
{
public:
	literal * get_flyweight_for(int a_value);

private:
	dp_map<int, literal *> my_map;

private:
	literal_flyweight_factory();

public:
	static literal_flyweight_factory & get_instance();

private:
	static literal_flyweight_factory * the_instance;
};

#endif
