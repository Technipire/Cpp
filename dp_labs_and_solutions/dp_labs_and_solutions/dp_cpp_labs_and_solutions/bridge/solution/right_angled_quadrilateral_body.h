// right_angled_quadrilateral_body.h

#ifndef right_angled_quadrilateral_body_header
#define right_angled_quadrilateral_body_header

class right_angled_quadrilateral_body
{
public:
	virtual double get_height() const = 0;
	virtual double get_width () const = 0;

	virtual bool is_square() const = 0;
};

#endif
