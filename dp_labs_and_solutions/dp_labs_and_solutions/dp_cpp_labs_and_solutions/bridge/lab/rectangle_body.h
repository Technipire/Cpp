// rectangle_body.h

#ifndef rectangle_body_header
#define rectangle_body_header

#include "right_angled_quadrilateral_body.h"

class rectangle_body : public right_angled_quadrilateral_body
{
public:
	rectangle_body(double a_height, double a_width);

	virtual double get_height() const;
	virtual double get_width () const;
    virtual bool is_square() const;

private:
	double my_height;
	double my_width ;
};

#endif
