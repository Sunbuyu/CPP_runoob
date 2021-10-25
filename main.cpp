#include <iostream>
#include "header_learn.h"
#include "tuple_learn.h"
#include "loop_learn.h"
#include "class_learn.h"
#include "reference_learn.h"
#include "auto_learn.h"

extern void write();  //行后的注释要空两格

int main() {


//    write();  //尝试extern的写法
//    header_learn();  //尝试头文件的写法和外部函数的写法
//    tuple_learn();  //学习使用tuple
//    loop_learn();

    //测试类的调用
//    MyBox my_box;
//    my_box.Set(11,2.1,3.3);
//    std::cout << "正方体的体积是：" << my_box.GetVolume() << std::endl;

    //测试引用
//    int var{1};
//    ReferenceLearn reference_learn;
//    reference_learn.SetMyNumber(var);
//    reference_learn.GetMyNumber();

    //测试auto
    auto number_1 {1};
    auto number_2 {2};
    std::cout << "the bigger number is: " <<  Max(number_1,number_2)  <<  std::endl;
    LearnAuto();



    return 0;
}
