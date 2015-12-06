// main.cpp

#include <iostream>
#include "right_angled_quadrilateral.h"

void test(right_angled_quadrilateral & a_right_angled_quadrilateral)
{
	std::cout
	<< "height == "
	<< a_right_angled_quadrilateral.get_height()
	<< "\n";

	std::cout
	<< "width  == "
	<< a_right_angled_quadrilateral.get_width()
	<< "\n";

	std::cout
	<< "is_square == "
	<< a_right_angled_quadrilateral.is_square()
	<< "\n";

	std::cout
	<< "\n";
}

int main()
{
	std::cout
	<< std::boolalpha;

	{
		right_angled_quadrilateral a_right_angled_quadrilateral(3.0, 4.0);
		test(a_right_angled_quadrilateral);
	}

	{
		right_angled_quadrilateral a_right_angled_quadrilateral(3.0, 4.0);
		a_right_angled_quadrilateral.set_height(a_right_angled_quadrilateral.get_width());
		test(a_right_angled_quadrilateral);
	}

	{
		right_angled_quadrilateral a_right_angled_quadrilateral(3.0, 4.0);
		a_right_angled_quadrilateral.set_width(a_right_angled_quadrilateral.get_height());
		test(a_right_angled_quadrilateral);
	}

	{
		right_angled_quadrilateral a_right_angled_quadrilateral(3.0, 4.0);
		a_right_angled_quadrilateral.set_side(2.0);
		test(a_right_angled_quadrilateral);
	}

	{
		right_angled_quadrilateral a_right_angled_quadrilateral(2.0);
		test(a_right_angled_quadrilateral);
	}

	{
		right_angled_quadrilateral a_right_angled_quadrilateral(2.0);
		a_right_angled_quadrilateral.set_height(3.0);
		test(a_right_angled_quadrilateral);
	}

	{
		right_angled_quadrilateral a_right_angled_quadrilateral(2.0);
		a_right_angled_quadrilateral.set_width(3.0);
		test(a_right_angled_quadrilateral);
	}

	return 0;
}
