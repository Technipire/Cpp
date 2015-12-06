#ifndef TURN_LEFT_COMMAND__H__
#define TURN_LEFT_COMMAND__H__

#include "driver.h"

class turn_left_command
{
public:
	turn_left_command(driver* a_driver);
	void execute();
	void undo();
};

#endif