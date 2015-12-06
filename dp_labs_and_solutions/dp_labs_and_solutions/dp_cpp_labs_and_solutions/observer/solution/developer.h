// developer.h

#ifndef developer_header
#define developer_header

class meeting;
#include "participant.h"

class developer : public participant
{
public:
	virtual void add(meeting * a_meeting);

	virtual void remove(meeting * a_meeting);

	virtual void update(meeting * a_meeting);
};

#endif
