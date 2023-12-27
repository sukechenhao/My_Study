#pragma once
#include "point.h"

class circle
{
private:
    float _r;
    point _center{0, 0};

public:
    circle(float a,point &b);
    void set_r(float a);
    void set_center(point a);
    float get_r();
    point get_center();
    void isINcircle(point &a);
};
