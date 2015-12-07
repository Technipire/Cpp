// participant.cpp

#include <iostream>
#include "dp_exception.h"
#include "dp_vector.h"
#include "meeting.h"
#include "participant.h"

void participant::add(meeting * a_meeting)
{
	if (a_meeting == NULL)
	{
		throw dp_exception("void participant::add(meeting * a_meeting) -- Invalid a_meeting.");
	}

	std::cout
		<< "participant.add("
		<< a_meeting->to_string()
		<< ")"
		<< std::endl;
	my_meetings.add(a_meeting);
}

void participant::remove(meeting * a_meeting)
{
	if (a_meeting == NULL)
	{
		throw dp_exception("void participant::remove(meeting * a_meeting) -- Invalid a_meeting.");
	}

	std::cout
		<< "participant.remove("
		<< a_meeting->to_string()
		<< ")"
		<< std::endl;
	// I was too lazy to implement this. :-(
}

void participant::update(meeting * a_meeting)
{
	if (a_meeting == NULL)
	{
		throw dp_exception("void participant::update(meeting * a_meeting) -- Invalid a_meeting.");
	}

	std::cout
		<< "participant.update("
		<< a_meeting->to_string()
		<< ")"
		<< std::endl;
}

void participant::stop_updating(meeting * a_meeting)
{
	if (a_meeting == NULL)
	{
		throw dp_exception("void participant::stop_updating(meeting * a_meeting) -- Invalid a_meeting.");
	}

	std::cout
		<< "participant.stop_updating("
		<< a_meeting->to_string()
		<< ")"
		<< std::endl;
}
