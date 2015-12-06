#ifndef REPORT_POSITION_COMMAND__H__
#define REPORT_POSITION_COMMAND__H__

class report_position_command
{
public:
	report_position_command(driver* a_driver);
	void execute();
	void undo();
};

#endif
