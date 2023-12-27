#include "point.h"

point::point(float a, float b)
{
    _x = a;
    _y = b;
}

void point::set_x(float a)
{
    _x = a;
}

float point::get_x()
{
    return _x;
}

void point::set_y(float b)
{
    _y = b;
}

float point::get_y()
{
    return _y;
}
