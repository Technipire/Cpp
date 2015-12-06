// turn_left_command.cpp

#include "driver.h"
#include "turn_left_command.h"

turn_left_command::turn_left_command(driver * a_driver)
: simple_driver_command(a_driver)
{
}

void turn_left_command::execute()
{
	simple_driver_command::execute();
	get_driver()->turn_left();
}
