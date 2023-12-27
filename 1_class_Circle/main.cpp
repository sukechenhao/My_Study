#include <iostream>
#include <string>
#include "circle.h"
using namespace std;

//  设计一个圆类，求圆的周长和面积
//  圆的周长 2 * PI * r
//  圆的面积 PI * r * r

void test(circle &c1)
{
    std::cout<<"圆的半径为："<<c1.get_r()<<std::endl;
    std::cout<<"圆的周长为："<<c1.calculate_private()<<std::endl;
    std::cout<<"圆的面积为："<<c1.calculate_area()<<std::endl;
}


int main()
{
    std::cout<<"请输入圆的半径："       <<std::endl;
    double r;
    std::cin>>r;
    circle c1(r);
    test(c1);    
}











