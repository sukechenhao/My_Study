#include "circle.h"
#include <iostream>

// 定义PI值
#define PI 3.1415926

// 设置圆的半径
void circle::set_r(double r)
{
    this->_r = r;
}

// 获取圆的周长
double circle::get_r()
{
    return this->_r;
}

// 得到圆的面积
double circle::calculate_area()
{
    return PI * this->_r * this->_r;
}

// 得到圆的周长
double circle::calculate_private()
{
    return 2* PI * this->_r;
}




