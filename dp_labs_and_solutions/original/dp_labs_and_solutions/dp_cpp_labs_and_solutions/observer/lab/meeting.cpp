// meeting.cpp

#include <iostream>
#include "developer.h"
#include "dp_exception.h"
#include "dp_iterator.h"
#include "dp_vector.h"
#include "manager.h"
#include "meeting.h"
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

void meeting::add(manager * a_manager)
{
	std::cout << "meeting.add(a_manager)" << std::endl;

	if (a_manager == nullptr)
	{
		throw dp_exception("void meeting::add(manager * a_manager) -- a_manager == nullptr.");
	}

	my_managers.add(a_manager);

	a_manager->add(this);
}

void meeting::add(developer * a_developer)
{
	std::cout << "meeting.add(a_developer)" << std::endl;

	if (a_developer == nullptr)
	{
		throw dp_exception("void meeting::add(developer * a_developer) -- a_developer == nullptr.");
	}

	my_developers.add(a_developer);

	a_developer->add(this);
}

dp_iterator<manager *> * meeting::get_managers()
{
	return my_managers.make_iterator();
}

dp_iterator<developer *> * meeting::get_developers()
{
	return my_developers.make_iterator();
}

void meeting::update()
{
	std::cout << "meeting.update()" << std::endl;

	{
		dp_iterator<manager *> * a_iterator = get_managers();
		while (!a_iterator->is_done())
		{
			manager * a_manager = a_iterator->get_current();
			a_manager->update(this);
			a_iterator->advance();
		}
	}

	{
		dp_iterator<developer *> * a_iterator = get_developers();
		while (!a_iterator->is_done())
		{
			developer * a_developer = a_iterator->get_current();
			a_developer->update(this);
			a_iterator->advance();
		}
	}
}

void meeting::cancel()
{
	std::cout << "meeting.cancel()" << std::endl;

	{
		dp_iterator<manager *> * a_iterator = get_managers();
		while (!a_iterator->is_done())
		{
			manager * a_manager = a_iterator->get_current();
			a_manager->remove(this);
			a_iterator->advance();
		}
	}

	{
		dp_iterator<developer *> * a_iterator = get_developers();
		while (!a_iterator->is_done())
		{
			developer * a_developer = a_iterator->get_current();
			a_developer->remove(this);
			a_iterator->advance();
		}
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
