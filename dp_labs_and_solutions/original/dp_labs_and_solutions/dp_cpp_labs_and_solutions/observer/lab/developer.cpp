// developer.cpp

#include <iostream>
#include "dp_exception.h"
#include "dp_vector.h"
#include "developer.h"
#include "meeting.h"

void developer::add(meeting * a_meeting)
{
	if (a_meeting == nullptr)
	{
		throw dp_exception("void developer::add(meeting * a_meeting) -- Invalid a_meeting.");
	}

	std::cout
		<< "developer.add("
		<< a_meeting->to_string()
		<< ")"
		<< std::endl;
	my_meetings.add(a_meeting);
}

void developer::remove(meeting * a_meeting)
{
	if (a_meeting == nullptr)
	{
		throw dp_exception("void developer::remove(meeting * a_meeting) -- Invalid a_meeting.");
	}

	std::cout
		<< "developer.remove("
		<< a_meeting->to_string()
		<< ")"
		<< std::endl;
	// I was too lazy to implement this. :-(
}

void developer::update(meeting * a_meeting)
{
	if (a_meeting == nullptr)
	{
		throw dp_exception("void developer::update(meeting * a_meeting) -- Invalid a_meeting.");
	}

	std::cout
		<< "developer.update("
		<< a_meeting->to_string()
		<< ")"
		<< std::endl;
}
