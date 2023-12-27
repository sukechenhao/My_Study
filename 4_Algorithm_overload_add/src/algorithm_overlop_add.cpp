#include "algorithm_overlop_add.h"

cuboid::cuboid(double i_length, double i_width, double i_height) : m_length(i_length), m_width(i_width), m_height(i_height)
{

}


double cuboid::get_length()
{
    return this->m_length;
}
double cuboid::get_width()
{
    return this->m_width;
}
double cuboid::get_height()
{
    return this->m_height;
}
double cuboid::get_m_S()
{
    return 2 * (this->m_length * this->m_width +
                this->m_length * this->m_height +
                this->m_width * this->m_height);
}
double cuboid::get_m_V()
{
    return this->m_length * this->m_width * this->m_height;
}

cuboid cuboid::operator+(const cuboid &add_b)
{
    cuboid tmp(this->m_length + add_b.m_length,this->m_width + add_b.m_width,this->m_height + add_b.m_height);
    // tmp.m_length = this->m_length + add_b.m_length;
    // tmp.m_width = this->m_width + add_b.m_width;
    // tmp.m_height = this->m_height + add_b.m_height;
    return tmp;
}
