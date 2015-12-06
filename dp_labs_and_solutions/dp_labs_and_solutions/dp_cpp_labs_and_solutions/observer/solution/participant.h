// participant.h

#ifndef participant_header
#define participant_header

#include "dp_vector.h"
class meeting;

class participant
{
public:
	virtual void add(meeting * a_meeting);

	virtual void remove(meeting * a_meeting);

	virtual void update(meeting * a_meeting);

private:
	dp_vector<meeting *> my_meetings;
};

#endif
