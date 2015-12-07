// turn_right_command.cpp

#include "driver.h"
#include "turn_right_command.h"

turn_right_command::turn_right_command(driver * a_driver)
: simple_driver_command(a_driver)
{
}

void turn_right_command::execute()
{
	get_driver()->turn_right();
}

void turn_right_command::undo()
{
	get_driver()->undo_turn_right();
}
