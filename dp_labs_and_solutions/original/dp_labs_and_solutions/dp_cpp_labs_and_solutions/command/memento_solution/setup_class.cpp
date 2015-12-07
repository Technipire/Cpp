// setup_class.cpp

#include "compound_command.h"
#include "driver.h"
#include "go_straight_command.h"
#include "report_position_command.h"
#include "setup_class.h"
#include "turn_left_command.h"
#include "turn_right_command.h"

command * setup_class::setup()
{
	driver * a_driver = new driver("Robert");

	compound_command * a_compound_command = new compound_command();

	a_compound_command->add(new report_position_command(a_driver));
	a_compound_command->add(new turn_left_command(a_driver));
	a_compound_command->add(new go_straight_command(a_driver, 3));
	a_compound_command->add(new turn_right_command(a_driver));
	a_compound_command->add(new go_straight_command(a_driver, 6));
	a_compound_command->add(new turn_right_command(a_driver));
	a_compound_command->add(new report_position_command(a_driver));

	return a_compound_command;
}
