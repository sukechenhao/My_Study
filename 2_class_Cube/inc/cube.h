#ifndef _CUBE_H_
#define _CUBE_H_H

#include <iostream>
// 立方体类设计
// 1、创建立方体类
// 2、设计属性
// 3、设计行为 获取立方体面积和体积
// 4、分别利用全局函数和成员函数  判断两个立方体是否相等

class cube
{
private:
    float Length; // 长
    float width;  // 宽
    float height; // 高
public:
    // 构造函数
    cube(float a,float b,float c);
    // 析构函数
    ~cube();
    // 设置长宽高
    void set_Dimensions(float a,float b,float c);
    float get_cube_Length();
    float get_cube_width();
    float get_cube_height();
    float get_cube_area();
    float get_cube_perimeter();
    bool Judging_equality(cube &c_tmp);

};

#endif