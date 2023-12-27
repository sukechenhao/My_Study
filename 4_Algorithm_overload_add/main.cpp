#include <iostream>
#include <string>
#include "algorithm_overlop_add.h"

int main(int argc, char *argv[])
{
    cuboid a(2.0, 2.0, 2.0);
    cuboid b(2.0, 2.0, 2.0);
    cuboid c = a + b;
    std::cout << "长：" << c.get_length() << "宽：" << c.get_width() << "高：" << c.get_height() << std::endl;
    std::cout << "表面积：" << c.get_m_S() << "体积：" << c.get_m_V() << std::endl;
}
