// person.cpp

#include <iostream>
#include <string>
#include "dp_exception.h"
#include "person.h"

person::person(
			   const std::string & a_first_name,
			   const std::string & a_last_name,
			   const std::string & a_street,
			   const std::string & a_city,
			   const std::string & a_state,
			   const std::string & a_phone_number)
{
	set_first_name(a_first_name);
	set_last_name(a_last_name);
	set_street(a_street);
	set_city(a_city);
	set_state(a_state);
	set_phone_number(a_phone_number);
}

const std::string & person::get_field_value(int a_field) const
{
	switch (a_field)
	{
	case 0:
		return my_first_name;
	case 1:
		return my_last_name;
	case 2:
		return my_street;
	case 3:
		return my_city;
	case 4:
		return my_state;
	case 5:
		return my_phone_number;
	default:
		throw dp_exception("const std::string & person::get_field_value(int a_field) const -- invalid a_field.");
	}
}

int person::get_number_of_fields_per_person()
{
	return 6;
}

const std::string & person::get_field_name(int a_field)
{
	static std::string field_names[6] =
	{
		"First Name",
		"Last Name",
		"Street",
		"City",
		"State",
		"Phone Number",
	};
	return field_names[a_field];
}

void person::set_first_name(const std::string & a_first_name)
{
	my_first_name = a_first_name;
}

const std::string & person::get_first_name() const
{
	return my_first_name;
}

void person::set_last_name(const std::string & a_last_name)
{
	my_last_name = a_last_name;
}

const std::string & person::get_last_name() const
{
	return my_last_name;
}

void person::set_street(const std::string & a_street)
{
	my_street = a_street;
}

const std::string & person::get_street() const
{
	return my_street;
}

void person::set_city(const std::string & a_city)
{
	my_city = a_city;
}

const std::string & person::get_city() const
{
	return my_city;
}

void person::set_state(const std::string & a_state)
{
	my_state = a_state;
}

const std::string & person::get_state() const
{
	return my_state;
}

void person::set_phone_number(const std::string & a_phone_number)
{
	my_phone_number = a_phone_number;
}

const std::string & person::get_phone_number() const
{
	return my_phone_number;
}
