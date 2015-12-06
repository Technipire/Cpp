// manager.h

#ifndef manager_header
#define manager_header

#include "dp_vector.h"
class meeting;

class manager
{
public:
	void add(meeting * a_meeting);

	void remove(meeting * a_meeting);

	void update(meeting * a_meeting);

};

#endif
