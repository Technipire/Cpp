// right_angled_quadrilateral.h

#ifndef right_angled_quadrilateral_header
#define right_angled_quadrilateral_header
class right_angled_quadrilateral_body;
class right_angled_quadrilateral
{
public:
	right_angled_quadrilateral(double a_height, double a_width);
	right_angled_quadrilateral(double a_side);
	void set_height(double a_height);
	void set_width(double a_width);
	void set_side(double a_side);
	double get_height();
	double get_width();
	bool is_square();
private:
    right_angled_quadrilateral_body* make_body(double a_height, double a_width);
    right_angled_quadrilateral_body* my_body;
};

#endif
