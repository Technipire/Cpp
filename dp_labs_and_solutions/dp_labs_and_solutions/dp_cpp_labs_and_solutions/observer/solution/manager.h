// manager.h

#ifndef manager_header
#define manager_header

class meeting;
#include "participant.h"

class manager : public participant
{
public:
	virtual void add(meeting * a_meeting);

	virtual void remove(meeting * a_meeting);

	virtual void update(meeting * a_meeting);
};

#endif
