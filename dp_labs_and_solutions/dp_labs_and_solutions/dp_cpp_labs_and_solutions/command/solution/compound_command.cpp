// compound_command.cpp

#include "compound_command.h"
#include "dp_exception.h"
#include "dp_iterator.h"
#include "dp_vector.h"

compound_command::compound_command()
{
}

void compound_command::add(command * a_command)
{
	if (a_command == nullptr)
	{
		throw dp_exception("void compound_command::add(command * a_command) -- a_command == nullptr.");
	}
	my_commands.add(a_command);
}

void compound_command::execute()
{
	dp_iterator<command *> * a_iterator = my_commands.make_iterator();
	while (!a_iterator->is_done())
	{
		command * a_command = a_iterator->get_current();
		a_command->execute();
		a_iterator->advance();
	}
}

void compound_command::undo()
{
	dp_iterator<command *> * a_iterator = my_commands.make_reverse_iterator();
	while (!a_iterator->is_done())
	{
		command * a_command = a_iterator->get_current();
		a_command->undo();
		a_iterator->advance();
	}
}
