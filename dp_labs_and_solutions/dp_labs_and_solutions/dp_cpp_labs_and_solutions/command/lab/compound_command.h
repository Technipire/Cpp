#ifndef COMPOUND_COMMAND__H__
#define COMPOUND_COMMAND__H__

class compound_command : public command
{
public:
	compound_command();
	void add(command* a_command);
	void execute();
	void undo();
};

#endif
