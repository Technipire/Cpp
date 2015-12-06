// use_class.cpp

#include <iostream>
#include "driver.h"
#include "use_class.h"

void use_class::use(driver * a_driver)
{
	a_driver->report_position();

	const driver::memento_interface * a_driver_memento_interface(a_driver->backup());

	a_driver->turn_left();
	a_driver->go_straight(3);
	a_driver->turn_right();
	a_driver->go_straight(6);
	a_driver->turn_right();

	a_driver->report_position();

	a_driver->restore(a_driver_memento_interface);

	a_driver->report_position();
}
