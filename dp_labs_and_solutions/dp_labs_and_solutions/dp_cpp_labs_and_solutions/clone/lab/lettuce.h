// lettuce.h

#ifndef lettuce_header
#define lettuce_header

class lettuce
{
public:
	lettuce(double a_price);
	lettuce(const lettuce & other);
	virtual lettuce* clone() = 0;
	virtual ~lettuce();

private:
	double my_price;
};

#endif
