// conventional_lettuce.h

#ifndef conventional_lettuce_header
#define conventional_lettuce_header

#include "lettuce.h"

class conventional_lettuce : public lettuce
{
public:
	conventional_lettuce(double a_price, int a_number_of_pesticides = 0);
	conventional_lettuce(const conventional_lettuce & other);
	virtual ~conventional_lettuce();

	virtual conventional_lettuce * clone() const;

private:
	int my_number_of_pesticides;
};

#endif
