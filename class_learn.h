//
// Created by Xiaopi Zhu on 2021/10/19.
//

#ifndef MAIN_CPP_CLASS_LEARN_H
#define MAIN_CPP_CLASS_LEARN_H
#include <string>
using std::string;
//类的分文件编写是这样的：class的主体部分全部放在头文件里面；
//主体包括成员变量和成员函数的声明
//成员函数的实现放在对应的cpp文件里面
//类的文件名和类的名字是可以不一样的。就像本例一样。

class MyBox{


public:
    double box_length_;  //分别是盒子的长宽高
    double box_width_;
    double box_height_;

    double GetVolume();  //成员函数声明
    void Set(double box_length, double box_width, double box_hight);



};
#endif //MAIN_CPP_CLASS_LEARN_H
