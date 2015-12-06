// conventional_tomato.h

#ifndef conventional_tomato_header
#define conventional_tomato_header

#include "tomato.h"

class conventional_tomato : public tomato
{
public:
	conventional_tomato(double a_price, int a_number_of_pesticides = 0);
	virtual ~conventional_tomato();

private:
	int my_number_of_pesticides;
};

#endif
