// command.h

#ifndef command_header
#define command_header

class command
{
public:
	virtual void execute() = 0;
	virtual void undo() = 0;
};

#endif
