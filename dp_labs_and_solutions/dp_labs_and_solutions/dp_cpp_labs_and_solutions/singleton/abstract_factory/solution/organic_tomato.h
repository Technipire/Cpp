// organic_tomato.h

#ifndef organic_tomato_header
#define organic_tomato_header

#include "tomato.h"

class organic_tomato : public tomato
{
public:
	organic_tomato(double a_price, int a_number_of_insects = 0);
	virtual ~organic_tomato();

private:
	int my_number_of_insects;
};

#endif
