// developer.h

#ifndef developer_header
#define developer_header

#include "dp_vector.h"
class meeting;

class developer
{
public:
	void add(meeting * a_meeting);

	void remove(meeting * a_meeting);

	void update(meeting * a_meeting);

private:
	dp_vector<meeting *> my_meetings;
};

#endif
