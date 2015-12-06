// compound_command.h

#ifndef compound_command_header
#define compound_command_header

#include "command.h"
#include "dp_vector.h"

class compound_command : public command
{
public:
	compound_command();

	void add(command * a_command);

	virtual void execute();
	virtual void undo();

private:
	dp_vector<command *> my_commands;
};

#endif
