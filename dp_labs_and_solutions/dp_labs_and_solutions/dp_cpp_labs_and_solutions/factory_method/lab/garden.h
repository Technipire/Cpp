// garden.h

#ifndef garden_header
#define garden_header

class tomato;
//#include "tomato.h"
class garden
{
public:
//	garden(tomato* a_tomato_type);

// 	void set_tomato_type(tomato* a_tomato_type);

	virtual tomato* make_tomato() = 0;

};

#endif
