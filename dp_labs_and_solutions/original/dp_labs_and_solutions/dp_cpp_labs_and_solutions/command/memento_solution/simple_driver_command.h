// simple_driver_command.h

#ifndef simple_driver_command_header
#define simple_driver_command_header

#include "command.h"
#include "driver.h"

class simple_driver_command : public command
{
public:
	simple_driver_command(driver * a_driver);

	virtual void execute();
	virtual void undo();

protected:
	driver * get_driver() const;

private:
	void set_driver(driver * a_driver);

	driver * my_driver;
	driver::memento_interface * my_driver_memento_interface;
};

#endif
