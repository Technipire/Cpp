// organic_lettuce.h

#ifndef organic_lettuce_header
#define organic_lettuce_header

#include "lettuce.h"

class organic_lettuce : public lettuce
{
public:
	organic_lettuce(double a_price, int a_number_of_insects = 0);
	organic_lettuce(const organic_lettuce & other);
	virtual lettuce* clone() const;
	virtual ~organic_lettuce();

private:
	int my_number_of_insects;
};

#endif
