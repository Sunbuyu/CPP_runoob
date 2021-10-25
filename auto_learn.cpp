//
// Created by Xiaopi Zhu on 2021/10/25.
//

#include "auto_learn.h"
//auto当成函数输入和返回
//auto其实就相当于一个自动类型，尽量全部使用auto，这样会使得代码更加健壮。
 int Max(int num1, int num2){
    if (num1 < num2){
        return num2;
    }
    else{
        return num1;
    }  //输出最大值
}

//auto的其他用法的练习
void LearnAuto(){
    //auto用来初始化，和初始列表搭配使用
    auto x {3};  //int类型
    auto my_string {"43"};  //string类型 相当于std：：string my_string = {"43"}
    auto y {10ul};  //unsigned long类型

    //同样可以指定类型
    auto number_3 = int{4};  //强制指定类型为int，感觉有点别扭，但是可以统一写法
    //auto会去除引用和const语义
    //auto& 不去除引用和const语义
    const int kForAutoLearnExample {10};
    auto auto_test_const1 {kForAutoLearnExample};  //这里，auto——test仍然是一个int类型，而不是一个const int类型
    auto& auto_test_const2 {kForAutoLearnExample};  //这里，左边的test2变量就是一个const int类型了，这个对&符号也是一样的
    std::cout << auto_test_const1 << std::endl;

    //auto初始化列表是数组的时候，auto推导为指针类型（其实就是取决于初始化,和auto没关系）
    auto array1 = {1,2,3};
    auto array2 {array1};
    std::cout << typeid(array2).name() << std::endl;  //输出array2的类型



}