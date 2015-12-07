// driver.cpp

#include <iostream>
#include <string>
#include "dp_exception.h"
#include "driver.h"

driver::driver(const std::string & a_name)
{
	set_name(a_name);
	set_x(0);
	set_y(0);
	set_heading(NORTH);
}

void driver::turn_left()
{
	switch(get_heading())
	{
	case NORTH: set_heading(WEST);  break;
	case EAST:  set_heading(NORTH); break;
	case SOUTH: set_heading(EAST);  break;
	case WEST:  set_heading(SOUTH); break;
	}
}

void driver::go_straight(int how_far)
{
	switch(get_heading())
	{
	case NORTH: set_y(get_y() + how_far);  break;
	case EAST:  set_x(get_x() + how_far); break;
	case SOUTH: set_y(get_y() - how_far);  break;
	case WEST:  set_x(get_x() - how_far); break;
	}
}

void driver::turn_right()
{
	switch(get_heading())
	{
	case NORTH: set_heading(EAST);  break;
	case EAST:  set_heading(SOUTH); break;
	case SOUTH: set_heading(WEST);  break;
	case WEST:  set_heading(NORTH); break;
	}
}

void driver::undo_turn_left()
{
	switch(get_heading())
	{
	case NORTH: set_heading(EAST);  break;
	case EAST:  set_heading(SOUTH); break;
	case SOUTH: set_heading(WEST);  break;
	case WEST:  set_heading(NORTH); break;
	}
}

void driver::undo_go_straight(int how_far)
{
	switch(get_heading())
	{
	case NORTH: set_y(get_y() - how_far);  break;
	case EAST:  set_x(get_x() - how_far); break;
	case SOUTH: set_y(get_y() + how_far);  break;
	case WEST:  set_x(get_x() + how_far); break;
	}
}

void driver::undo_turn_right()
{
	switch(get_heading())
	{
	case NORTH: set_heading(WEST);  break;
	case EAST:  set_heading(NORTH); break;
	case SOUTH: set_heading(EAST);  break;
	case WEST:  set_heading(SOUTH); break;
	}
}

void driver::report_position() const
{
	std::cout
		<< get_name()
		<< " is located at ("
		<< get_x()
		<< ", "
		<< get_y()
		<< ") facing "
		<< get_heading_as_string()
		<< "."
		<< std::endl;
}

driver * driver::clone() const
{
	return new driver(*this);
}

void driver::set_name(const std::string & a_name)
{
	my_name = a_name;
}

const std::string & driver::get_name() const
{
	return my_name;
}

void driver::set_x(int a_x)
{
	my_x = a_x;
}

int driver::get_x() const
{
	return my_x;
}

void driver::set_y(int a_y)
{
	my_y = a_y;
}

int driver::get_y() const
{
	return my_y;
}

void driver::set_heading(int a_heading)
{
	my_heading = a_heading;
}

int driver::get_heading() const
{
	return my_heading;
}

std::string driver::get_heading_as_string() const
{
	std::string result;

	switch(get_heading())
	{
	case NORTH: result = "NORTH"; break;
	case EAST:  result = "EAST" ; break;
	case SOUTH: result = "SOUTH"; break;
	case WEST:  result = "WEST" ; break;
	}

	return result;
}

driver::memento_interface * driver::backup()
{
	return new memento_implementation(*this);
}

void driver::restore(memento_interface * a_memento_interface)
{
	memento_implementation * a_memento_implementation =
		dynamic_cast<memento_implementation *>(a_memento_interface);

	if (a_memento_implementation == nullptr)
	{
		throw dp_exception("void driver::restore(memento_interface * a_memento_interface) -- that's the wrong kind of memento.");
	}

	if (a_memento_implementation->my_originator != this)
	{
		throw dp_exception("void driver::restore(memento_interface * a_memento_interface) -- that memento didn't come from me.");
	}

	*this = *a_memento_implementation->my_clone;
}

driver::memento_interface::memento_interface()
{
}

driver::memento_interface::~memento_interface()
{
}

driver::memento_implementation::memento_implementation(driver & a_originator)
{
	my_originator = &a_originator;
	my_clone      = a_originator.clone();
}
