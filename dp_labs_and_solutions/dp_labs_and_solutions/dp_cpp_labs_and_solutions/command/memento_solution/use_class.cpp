// use_class.cpp

#include "command.h"
#include "use_class.h"

void use_class::use(command * a_command)
{
	a_command->execute();

	a_command->undo();
}
