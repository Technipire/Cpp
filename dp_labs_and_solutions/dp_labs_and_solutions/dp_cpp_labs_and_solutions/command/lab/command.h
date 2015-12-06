#ifndef COMMAND__H__
#define COMMAND__H__

class command
{
public:
	virtual void execute() = 0;
	virtual void undo() = 0;
};

#endif