#include <iostream>
#include "header_learn.h"
#include "tuple_learn.h"
#include "loop_learn.h"
#include "class_learn.h"

extern void write();  //行后的注释要空两格

int main() {


//    write();  //尝试extern的写法
//    header_learn();  //尝试头文件的写法和外部函数的写法
//    tuple_learn();  //学习使用tuple
//    loop_learn();

    //测试类的调用
    MyBox my_box;
    my_box.Set(11,2.1,3.3);
    std::cout << "正方体的体积是：" << my_box.GetVolume() << std::endl;

    return 0;
}
