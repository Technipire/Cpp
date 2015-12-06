// report_position_command.cpp

#include "driver.h"
#include "report_position_command.h"

report_position_command::report_position_command(driver * a_driver)
: simple_driver_command(a_driver)
{
}

void report_position_command::execute()
{
	get_driver()->report_position();
}

void report_position_command::undo()
{
	get_driver()->report_position();
}
