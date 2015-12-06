#ifndef TURN_RIGHT_COMMAND__H__
#define TURN_RIGHT_COMMAND__H__

#include "driver.h"

class turn_right_command
{
public:
	turn_right_command(driver* a_driver);
	void execute();
	void undo();
};

#endif