// turn_left_command.h

#ifndef turn_left_command_header
#define turn_left_command_header

class driver;
#include "simple_driver_command.h"

class turn_left_command : public simple_driver_command
{
public:
	turn_left_command(driver * a_driver);

	virtual void execute();
};

#endif
