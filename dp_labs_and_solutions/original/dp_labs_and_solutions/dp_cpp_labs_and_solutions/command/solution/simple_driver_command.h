// simple_driver_command.h

#ifndef simple_driver_command_header
#define simple_driver_command_header

class driver;
#include "command.h"

class simple_driver_command : public command
{
public:
	simple_driver_command(driver * a_driver);

	virtual void execute() = 0;
	virtual void undo() = 0;

protected:
	driver * get_driver() const;

private:
	void set_driver(driver * a_driver);

	driver * my_driver;
};

#endif
