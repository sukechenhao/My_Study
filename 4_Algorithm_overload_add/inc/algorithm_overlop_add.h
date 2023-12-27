#pragma once

class cuboid
{
public:
    // 长 宽 高 表面积 体积
    double m_length;
    double m_width;
    double m_height;

public:
    cuboid(double i_length, double i_width, double i_height);

    double get_length();
    double get_width();
    double get_height();
    double get_m_S();
    double get_m_V();

    cuboid operator+(const cuboid &add_b);
};
