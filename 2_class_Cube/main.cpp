#include <iostream>
#include <string>
#include "cube.h"


int main()
{
    cube c_a(2.2,3.3,5);
    cube c_b(2.2,3.3,4);
    if (c_a.Judging_equality(c_b))
    {
        std::cout<<"两个立方体相等"<<std::endl;
    }
    else
    {
        std::cout<<"两个立方体不相等"<<std::endl;
    }
}
