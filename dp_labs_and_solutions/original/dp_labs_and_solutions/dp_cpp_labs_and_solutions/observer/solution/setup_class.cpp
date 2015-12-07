// setup_class.cpp

#include "developer.h"
#include "manager.h"
#include "meeting.h"
#include "setup_class.h"

meeting * setup_class::setup()
{
	meeting * a_meeting =
		new meeting(
		4, 3, 2005, 2, 15,
		"Conference Room 3");

	a_meeting->add(new manager());

	a_meeting->add(new developer());

	return a_meeting;
}
