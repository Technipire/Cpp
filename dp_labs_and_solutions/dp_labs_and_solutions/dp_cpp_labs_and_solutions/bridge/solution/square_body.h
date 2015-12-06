// square_body.h

#ifndef square_body_header
#define square_body_header

#include "right_angled_quadrilateral_body.h"

class square_body : public right_angled_quadrilateral_body
{
public:
	square_body(double a_side);

	virtual double get_height() const;
	virtual double get_width () const;

	virtual bool is_square() const;

private:
	double my_side;
};

#endif
