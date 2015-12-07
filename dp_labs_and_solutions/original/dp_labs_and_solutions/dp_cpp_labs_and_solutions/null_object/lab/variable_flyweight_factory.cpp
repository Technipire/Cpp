// variable_flyweight_factory.cpp

#include <string>
#include "dp_map.h"
#include "variable.h"
#include "variable_flyweight_factory.h"

variable_flyweight_factory * variable_flyweight_factory::the_instance(nullptr);

variable * variable_flyweight_factory::get_flyweight_for(const std::string & a_name)
{
	if (!my_map.contains(a_name))
	{
		my_map.put(a_name, new variable(a_name));
	}

	variable * result = my_map.get(a_name);

	return result;
}

variable_flyweight_factory::variable_flyweight_factory()
{
}

variable_flyweight_factory & variable_flyweight_factory::get_instance()
{
	if (the_instance == nullptr)
	{
		the_instance = new variable_flyweight_factory();
	}

	return *the_instance;
}
