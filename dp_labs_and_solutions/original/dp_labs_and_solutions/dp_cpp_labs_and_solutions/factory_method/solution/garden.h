// garden.h

#ifndef garden_header
#define garden_header

class tomato;

class garden
{
public:
	virtual tomato * make_tomato() const = 0;
};

#endif
