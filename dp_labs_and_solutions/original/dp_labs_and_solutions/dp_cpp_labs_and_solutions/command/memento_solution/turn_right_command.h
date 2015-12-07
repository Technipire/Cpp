// turn_right_command.h

#ifndef turn_right_command_header
#define turn_right_command_header

class driver;
#include "simple_driver_command.h"

class turn_right_command : public simple_driver_command
{
public:
	turn_right_command(driver * a_driver);

	virtual void execute();
};

#endif
