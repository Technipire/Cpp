// report_position_command.h

#ifndef report_position_command_header
#define report_position_command_header

class driver;
#include "simple_driver_command.h"

class report_position_command : public simple_driver_command
{
public:
	report_position_command(driver * a_driver);

	virtual void execute();
	virtual void undo();
};

#endif
