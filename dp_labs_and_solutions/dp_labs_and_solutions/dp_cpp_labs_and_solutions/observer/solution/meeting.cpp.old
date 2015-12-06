// meeting.cpp

#include <iostream>
#include "dp_exception.h"
#include "dp_iterator.h"
#include "dp_vector.h"
#include "meeting.h"
#include "participant.h"
#include "to_string.h"

meeting::meeting(int a_month, int a_day, int a_year, int a_hour, int a_minute, const std::string & a_location)
{
	// do not call set_XXX() here, as they will call update().
	my_month    = a_month;
	my_day      = a_day;
	my_year     = a_year;
	my_hour     = a_hour;
	my_minute   = a_minute;
	my_location = a_location;
}

void meeting::add(participant * a_participant)
{
	std::cout << "meeting.add(a_participant)" << std::endl;

	if (a_participant == NULL)
	{
		throw dp_exception("void meeting::add(participant * a_participant) -- a_participant == NULL.");
	}

	my_participants.add(a_participant);

	a_participant->add(this);
}

dp_iterator<participant *> * meeting::get_participants()
{
	return my_participants.make_iterator();
}

void meeting::update()
{
	std::cout << "meeting.update()" << std::endl;

	dp_iterator<participant *> * a_iterator = get_participants();
	while (!a_iterator->is_done())
	{
		participant * a_participant = a_iterator->get_current();
		a_participant->update(this);
		a_iterator->advance();
	}
}

void meeting::stop_updating()
{
	std::cout << "meeting.stop_updating()" << std::endl;

	dp_iterator<participant *> * a_iterator = get_participants();
	while (!a_iterator->is_done())
	{
		participant * a_participant = a_iterator->get_current();
		a_participant->stop_updating(this);
		a_iterator->advance();
	}
}

void meeting::cancel()
{
	std::cout << "meeting.cancel()" << std::endl;

	dp_iterator<participant *> * a_iterator = get_participants();
	while (!a_iterator->is_done())
	{
		participant * a_participant = a_iterator->get_current();
		a_participant->remove(this);
		a_iterator->advance();
	}
}

std::string meeting::to_string() const
{
	return
	""
	+ ::to_string(my_month)
	+ "/"
	+ ::to_string(my_day)
	+ "/"
	+ ::to_string(my_year)
	+ "."
	+ ::to_string(my_hour)
	+ ":"
	+ ::to_string(my_minute)
	+ " at "
	+ my_location;
}

void meeting::set_month(int a_month)
{
	my_month = a_month;
	update();
}

void meeting::set_day(int a_day)
{
	my_day = a_day;
	update();
}

void meeting::set_year(int a_year)
{
	my_year = a_year;
	update();
}

void meeting::set_hour(int a_hour)
{
	my_hour = a_hour;
	update();
}

void meeting::set_minute(int a_minute)
{
	my_minute = a_minute;
	update();
}

void meeting::set_location(const std::string & a_location)
{
	my_location = a_location;
	update();
}
