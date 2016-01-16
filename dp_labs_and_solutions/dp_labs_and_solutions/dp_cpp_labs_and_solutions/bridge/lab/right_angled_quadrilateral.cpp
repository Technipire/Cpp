// right_angled_quadrilateral.cpp
#include <iostream>
#include "right_angled_quadrilateral.h"
#include "rectangle_body.h"
#include "square_body.h"

right_angled_quadrilateral::right_angled_quadrilateral(double a_height, double a_width)
{
    my_body = make_body(a_height, a_width);
}

right_angled_quadrilateral::right_angled_quadrilateral(double a_side)
{
    my_body = new square_body(a_side);
}


void right_angled_quadrilateral::set_height(double a_height)
{
    my_body = make_body(a_height, my_body->get_width());
}

void right_angled_quadrilateral::set_width(double a_width)
{
    my_body = make_body(my_body->get_height(), a_width);
}

void right_angled_quadrilateral::set_side(double a_side)
{
    my_body = make_body(a_side, a_side);
}

double right_angled_quadrilateral::get_height()
{
    return my_body->get_height();
}

double right_angled_quadrilateral::get_width()
{
    return my_body->get_width();
}

bool right_angled_quadrilateral::is_square()
{
    return my_body->is_square();
}

right_angled_quadrilateral_body* right_angled_quadrilateral::make_body(double a_height, double a_width)
{
    if (a_height <= 0 || a_width <= 0)
    {
        std::cerr << "Invalid parameters!" << std::endl;
        return nullptr;
    }
    if (a_height == a_width)
    {
        return new square_body(a_height);
    }
    else
    {
        return new rectangle_body(a_height, a_width);
    }

}
