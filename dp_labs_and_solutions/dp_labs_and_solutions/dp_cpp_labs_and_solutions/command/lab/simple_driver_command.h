#ifndef SIMPLE_DRIVER_COMMAND__H__
#define SIMPLE_DRIVER_COMMAND__H__

#include "driver.h"

class simple_driver_command : public command
{
public:
	simple_driver_command(driver* a_driver);
	virtual void execute() = 0;
	virtual void undo() = 0;
protected:
	driver* get_driver();
	driver* my_driver;
private:
	void set_driver(driver* a_driver);
};

#endif