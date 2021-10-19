//
// Created by Xiaopi Zhu on 2021/10/19.
//
#include "class_learn.h"

//成员函数的定义
double MyBox::GetVolume() {
    return box_height_ * box_length_ * box_width_;  //计算体积
}

//设置长宽高
void MyBox::Set(double box_length, double box_width, double box_hight) {
    box_width_ = box_width;
    box_height_ = box_hight;
    box_length_ = box_length;
}
