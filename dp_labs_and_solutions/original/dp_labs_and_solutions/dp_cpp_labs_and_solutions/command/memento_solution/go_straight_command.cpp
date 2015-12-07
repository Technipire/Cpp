// go_straight_command.cpp

#include "driver.h"
#include "go_straight_command.h"

go_straight_command::go_straight_command(driver * a_driver, int a_how_far)
: simple_driver_command(a_driver)
{
	set_how_far(a_how_far);
}

void go_straight_command::execute()
{
	simple_driver_command::execute();
	get_driver()->go_straight(get_how_far());
}

void go_straight_command::set_how_far(int a_how_far)
{
	my_how_far = a_how_far;
}

int go_straight_command::get_how_far() const
{
	return my_how_far;
}
