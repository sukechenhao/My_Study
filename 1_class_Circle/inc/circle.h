#ifndef _CIRCLE_H_
#define _CIRCLE_H_

class circle
{
private:
    double _r;
public:
    // 构造函数
    circle(double r)
    {
        this->_r = r;
    }
    
    // 定义圆的面积
    double calculate_area();
    // 定义圆的周长
    double calculate_private();
    // 获取圆的周长
    double get_r();
    // 设置圆的半径
    void set_r(double r);
};

#endif