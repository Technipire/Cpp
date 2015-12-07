// simple_driver_command.cpp

#include "dp_exception.h"
class driver;
#include "simple_driver_command.h"

simple_driver_command::simple_driver_command(driver * a_driver)
{
	set_driver(a_driver);
}

void simple_driver_command::set_driver(driver * a_driver)
{
	if (a_driver == nullptr)
	{
		throw dp_exception("void simple_driver_command::set_driver(driver * a_driver) -- a_driver == nullptr.");
	}

	my_driver = a_driver;
}

driver * simple_driver_command::get_driver() const
{
	return my_driver;
}
