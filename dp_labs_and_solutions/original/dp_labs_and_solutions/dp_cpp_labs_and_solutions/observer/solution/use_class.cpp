// use_class.cpp

#include "meeting.h"
#include "use_class.h"

void use_class::use(meeting * a_meeting)
{
	a_meeting->set_day(4);

	a_meeting->set_location("Cafeteria");

	a_meeting->cancel();
}
