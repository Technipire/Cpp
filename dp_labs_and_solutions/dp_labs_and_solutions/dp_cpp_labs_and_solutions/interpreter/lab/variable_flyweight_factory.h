// variable_flyweight_factory.h

#ifndef variable_flyweight_factory_header
#define variable_flyweight_factory_header

#include <string>
#include "dp_map.h"
class variable;

class variable_flyweight_factory
{
public:
	variable * get_flyweight_for(const std::string & a_name);

private:
	dp_map<std::string, variable *> my_map;

private:
	variable_flyweight_factory();

public:
	static variable_flyweight_factory & get_instance();

private:
	static variable_flyweight_factory * the_instance;

};

#endif
