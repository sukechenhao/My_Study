#include <iostream>
#include <string>
#include "circle.h"

int main()
{

    point m_center1{1, 1};
    circle a{5, m_center1};
    point b{4, 3};
    a.isINcircle(b);
}
