//
// Created by Xiaopi Zhu on 2021/10/17.
//
#include <iostream>
#include "tuple_learn.h"

void tuple_learn(){
//    double balance[3] = {10.11, 2.0, 5.55}; //创建名为balance的3个
//                        //元素的double类型的数
//                        //并初始化数组
//    //数组元素赋值
//    balance[1] = {0};

    //数组的初始化可以全部置为零
    //对于数字不够项目的，自动填上0
    //double balance[3] = {0};


    //一致性初始化和初始化列表
    double balance[3] {0};  //等号不写也是可以的
    //一致性初始化数组        //所谓一致性初始化就是
                            //全部用花括号括起来就行
    //一致性初始化一个实数
    int my_number {0};
    //
    std::cout << my_number << std::endl;
    // 输出数组元素
    std::cout << "This is tuple_learn function" << std::endl;
    int length = sizeof(balance)/sizeof(balance[1]);
    for (int i = 0; i < length; i++ ){
        std::cout << "数组元素分别是" << std::endl;
        std::cout << balance[i] << std::endl;



    }

}

//在C++11之前，如何初始化一个变量或对象的概念比较混淆。初始化的场景可以发生在：小括号、大括号或赋值操作符中
//        C++11引入了“列表初始化/一致性初始化”，意思为：面对任何初始化动作，你可以使用相同语法，就是使用大括号
