#include "go_straight_command.h"

go_straight_command::go_straight_command(driver* a_driver, int a_how_far) : simple_driver_command(a_driver)
{
	set_how_far(a_how_far);
}

void go_straight_command::execute()
{
	my_driver->go_straight(my_how_far);
}

void go_straight_command::undo()
{
	my_driver->undo_go_straight(my_how_far);
}

void go_straight_command::set_how_far(int a_how_far)
{
	my_how_far = a_how_far;
}

int go_straight_command::get_how_far()
{
	return my_how_far;
}