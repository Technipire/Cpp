// rectangle.h

#ifndef rectangle_header
#define rectangle_header

#include "right_angled_quadrilateral.h"

class rectangle : public right_angled_quadrilateral
{
public:
	rectangle(double a_height, double a_width);

	double get_height() const;
	double get_width () const;

	void set_height(double a_height);
	void set_width (double a_width );

private:
	double my_height;
	double my_width ;
};

#endif
