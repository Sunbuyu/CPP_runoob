//
// Created by Xiaopi Zhu on 2021/10/15.
//这是学习头文件写法的一个小程序


/////////////////////////////////////////
//cpp文件和h文件相同的名字
//cpp文件只用includeh文件就行，可以重复include标准库
//但是建议放到.h文件include，但是都行，反正目前的工作特别小
//h文件中要包含cpp文件的声明原型。

//.h文件只要是用到这个.h头文件对应的cpp文件里的文件
// 就都要include这个cpp文件对应的头文件
//这样，其他文件用到这个cpp文件里的内容的时候，只用
//include头文件就行

#include "header_learn.h"  //包含对应的头文件

void header_learn(){
    std::cout << "This is hearder_learn!" << std::endl;
}


