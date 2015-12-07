// meeting.h

#ifndef meeting_header
#define meeting_header

#include <string>
class developer;
#include "dp_iterator.h"
#include "dp_vector.h"
class manager;

class meeting
{
public:
	meeting(int a_month, int a_day, int a_year, int a_hour, int a_minute, const std::string & a_location);

	void add(manager   * a_manager  );
	void add(developer * a_developer);

	dp_iterator<manager *>   * get_managers();
	dp_iterator<developer *> * get_developers();

	void cancel();

	std::string to_string() const;

	void set_month(int a_month);
	void set_day(int a_day);
	void set_year(int a_year);
	void set_hour(int a_hour);
	void set_minute(int a_minute);
	void set_location(const std::string & a_location);

private:
	void update();

	int my_month;
	int my_day;
	int my_year;
	int my_hour;
	int my_minute;
	std::string my_location;

	dp_vector<manager   *> my_managers;
	dp_vector<developer *> my_developers;
};

#endif
