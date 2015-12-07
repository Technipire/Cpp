// square.h

#ifndef square_header
#define square_header

#include "right_angled_quadrilateral.h"

class square : public right_angled_quadrilateral
{
public:
	square(double a_side);

	double get_side() const;

	void set_side(double a_side);

private:
	double my_side;
};

#endif
