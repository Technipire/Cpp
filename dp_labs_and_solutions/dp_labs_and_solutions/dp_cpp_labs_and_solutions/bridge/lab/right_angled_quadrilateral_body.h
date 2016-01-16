#ifndef RIGHT_ANGLED_QUADRILATERAL_BODY__H__
#define RIGHT_ANGLED_QUADRILATERAL_BODY__H__

class right_angled_quadrilateral_body
{
    public:
        virtual double get_height() const = 0;
        virtual double get_width() const = 0;
        virtual bool is_square() const = 0;
};

#endif
