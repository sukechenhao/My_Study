#include <iostream>
#include <string>
#include "cube.h"


int main()
{
    cube c_a(2.2,3.3,5);
    cube c_b(2.2,3.3,4);
    if (c_a.Judging_equality(c_b))
    {
        std::cout<<"�������������"<<std::endl;
    }
    else
    {
        std::cout<<"���������岻���"<<std::endl;
    }
}
