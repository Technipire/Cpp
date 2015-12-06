// meeting.h

#ifndef meeting_header
#define meeting_header

#include <string>
#include "dp_iterator.h"
#include "dp_vector.h"
class participant;

class meeting
{
public:
	meeting(int a_month, int a_day, int a_year, int a_hour, int a_minute, const std::string & a_location);

	void add(participant * a_participant);

	dp_iterator<participant *> * get_participants();

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

	dp_vector<participant *> my_participants;
};

#endif
