//
// Created by Xiaopi Zhu on 2021/10/17.
//
#include "loop_learn.h"
#include <iostream>

void loop_learn(){
    //for循环
    std::cout << "This is for loop" << std::endl;
    for (int i {0}; i < 3; i++){
        std::cout << i << std::endl;
    }

    //for范围循环；用在数组上面，算是个语法糖吧
    int array[3]{1,3,3};
    for (auto item:array) {
        std::cout << item << std::endl;  //可以使用auto &item来改原数组的值

    }

    //while 循环
    int i{3};
    std::cout << "This is while loop!" << std::endl;
    while (i--){
        std::cout << i*2 << std::endl;

    }

    //do while循环，会确保至少进行了一次循环体
    i = 2;
    std::cout << "This is do while loop" << std::endl;
    do{
        std::cout << i*3 << std::endl;
        i--;
    }
    while(i);  //i--就是i逐步减去1，到于0为止
}
