// developer.cpp

#include <iostream>
#include "developer.h"
#include "meeting.h"

void developer::add(meeting * a_meeting)
{
	participant::add(a_meeting);

	std::cout
		<< "developer.add("
		<< a_meeting->to_string()
		<< ")"
		<< std::endl;
}

void developer::remove(meeting * a_meeting)
{
	participant::remove(a_meeting);

	std::cout
		<< "developer.remove("
		<< a_meeting->to_string()
		<< ")"
		<< std::endl;
}

void developer::update(meeting * a_meeting)
{
	participant::update(a_meeting);

	std::cout
		<< "developer.update("
		<< a_meeting->to_string()
		<< ")"
		<< std::endl;
}
