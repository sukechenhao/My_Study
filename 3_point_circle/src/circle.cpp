#include <iostream>
#include "circle.h"
#include <cmath>

circle::circle(float a, point &b)
{
    _r = a;
    _center = b;
}

void circle::set_r(float a)
{
    _r = a;
}

void circle::set_center(point a)
{
    _center = a;
}

float circle::get_r()
{
    return _r;
}

point circle::get_center()
{
    return _center;
}

void circle::isINcircle(point &a)
{
    float distance =
        std::pow((_center.get_x() - a.get_x()), 2.0) +
        std::pow((_center.get_y() - a.get_y()), 2.0);

    if (distance == _r * _r)
    {
        std::cout << "点在圆上" << std::endl;
    }
    else if (distance > _r * _r)
    {
        std::cout << "点在圆外" << std::endl;
    }
    else
    {
        std::cout << "点在圆内" << std::endl;
    }
}