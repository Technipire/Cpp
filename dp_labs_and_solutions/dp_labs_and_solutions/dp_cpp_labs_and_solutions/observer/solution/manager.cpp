// manager.cpp

#include <iostream>
#include "manager.h"
#include "meeting.h"

void manager::add(meeting * a_meeting)
{
	participant::add(a_meeting);

	std::cout
		<< "manager.add("
		<< a_meeting->to_string()
		<< ")"
		<< std::endl;
}

void manager::remove(meeting * a_meeting)
{
	participant::remove(a_meeting);

	std::cout
		<< "manager.remove("
		<< a_meeting->to_string()
		<< ")"
		<< std::endl;
}

void manager::update(meeting * a_meeting)
{
	participant::update(a_meeting);

	std::cout
		<< "manager.update("
		<< a_meeting->to_string()
		<< ")"
		<< std::endl;
}
