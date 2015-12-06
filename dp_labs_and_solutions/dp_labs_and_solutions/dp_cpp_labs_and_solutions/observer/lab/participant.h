#ifndef PARTICIPANT__H__
#define PARTICIPANT__H__
#include "meeting.h"

class participant
{
public:
	virtual void add(meeting* a_meeting);
	
	virtual void remove(meeting* a_meeting);
	
	virtual void update(meeting* a_meeting);
	
private:
	dp_vector<meeting* > my_meetings;

};

#endif