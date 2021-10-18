#include <iostream>
#include "header_learn.h"
#include "tuple_learn.h"
#include "loop_learn.h"

extern void write();  //行后的注释要空两格

int main() {


//    write();  //尝试extern的写法
//    header_learn();  //尝试头文件的写法和外部函数的写法
//    tuple_learn();  //学习使用tuple
    loop_learn();
    return 0;
}
