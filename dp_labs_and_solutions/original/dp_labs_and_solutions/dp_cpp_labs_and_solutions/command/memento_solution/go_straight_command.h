// go_straight_command.h

#ifndef go_straight_command_header
#define go_straight_command_header

class driver;
#include "simple_driver_command.h"

class go_straight_command : public simple_driver_command
{
public:
	go_straight_command(driver * a_driver, int a_how_far);

	virtual void execute();

private:
	void set_how_far(int a_how_far);
	int get_how_far() const;

private:
	int my_how_far;
};

#endif
