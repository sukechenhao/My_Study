#include <iostream>
#include "cube.h"
#include <string>

cube::cube(float a, float b, float c)
{
    this->Length = a;
    this->width = b;
    this->height = c;
}

cube::~cube()
{
}

void cube::set_Dimensions(float a, float b, float c)
{
    this->Length = a;
    this->width = b;
    this->height = c;
    std::cout << "set Dimensions ok" << std::endl;
}

float cube::get_cube_Length()
{
    return this->Length;
}

float cube::get_cube_width()
{
    return this->width;
}

float cube::get_cube_height()
{
    return this->height;
}

float cube::get_cube_area()
{
    return this->Length * this->width * this->height;
}

float cube::get_cube_perimeter()
{
    return 2 * (this->Length * this->width +
                this->width * this->height +
                this->Length * this->height);
}

bool cube::Judging_equality(cube &c_tmp)
{
    if (this->Length == c_tmp.get_cube_Length() &&
        this->width == c_tmp.get_cube_width() &&
        this->height == c_tmp.get_cube_height())
    {
        return true;
    }
    else
    {
        return false;
    }     
}
