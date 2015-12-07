// person.h

#ifndef person_header
#define person_header

#include <string>

class person
{
public:
	person(
		const std::string & a_first_name,
		const std::string & a_last_name,
		const std::string & a_street,
		const std::string & a_city,
		const std::string & a_state,
		const std::string & a_phone_number);

	const std::string & get_field_value(int a_field) const;

	static int get_number_of_fields_per_person();
	static const std::string & get_field_name(int a_field);

	const std::string & get_first_name() const;
	const std::string & get_last_name() const;
	const std::string & get_street() const;
	const std::string & get_city() const;
	const std::string & get_state() const;
	const std::string & get_phone_number() const;

private:
	void set_first_name(const std::string & a_first_name);
	void set_last_name(const std::string & a_last_name);
	void set_street(const std::string & a_street);
	void set_city(const std::string & a_city);
	void set_state(const std::string & a_state);
	void set_phone_number(const std::string & a_phone_number);

	std::string my_first_name;
	std::string my_last_name;
	std::string my_street;
	std::string my_city;
	std::string my_state;
	std::string my_phone_number;
};

#endif
