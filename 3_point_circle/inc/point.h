#pragma once

class point
{
private:
    float _x;
    float _y;

public:
    point(float a, float b);
    void set_x(float a);
    float get_x();
    void set_y(float b);
    float get_y();
};
