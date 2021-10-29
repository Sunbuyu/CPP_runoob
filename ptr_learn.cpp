//
// Created by Xiaopi Zhu on 2021/10/29.
//

#include "ptr_learn.h"
#include <string>
#include <array>

/*这个文件是为了学习指针的用法，一步到位
 * 具体的会有小标题来显示当前的东西
*/
void LearnPtr(){
    //定义一个变量
    auto my_var_number{0};
    //定义一个常量
    auto const kFirstNumber {33};
    auto const kSecondNumber {44};

    //定义一个常量指针，指向就是指向常量的指针，根据在前先读就可以这么写出来
    //常量指针就是指针变量里存的地址是可以变化的，但是这些地址也就是指针指向的地方必须要是常量，
    //也就是指向的地址上存的东西必须不能变
    //也就是说derefer（解引用）的方式对*my_ptr = 3赋值就是错误的用法，*my_ptr的值不能改变
    const auto* my_ptr {&kFirstNumber};  //常量指针必须指向常量，因此初始化的时候不能用nullptr

    //接下来我们把my_ptr指向的地址改变，但是仍然只能指向另外的一个常量
    std::cout << "常量指针是" << my_ptr << std::endl;  //输出一下更改之前的指针变量值
    my_ptr = {&kSecondNumber};
    std::cout << "常量指针是" << my_ptr << std::endl;  //输出一下更改之后的指针变量值

    //一个指针常量--指针是常量，也就是指针里面存的地址是不变的，但是这个地址里存的东西可以变
    auto* const kMyConstPtr {&my_var_number};
    std::cout << "修改值前指针常量里存的地址是" << kMyConstPtr << std::endl;
    std::cout << "修改值前指针常量指向的值是" << *kMyConstPtr << std::endl;

    *kMyConstPtr = 11;  //修改指针常量指向的地址的值，通过解引用的方式
    std::cout << "修改值后指针常量里存的地址是" << kMyConstPtr << std::endl;
    std::cout << "修改值后指针常量指向的值是" << *kMyConstPtr << std::endl;

    //最特殊的就是两个const
    const auto* const kMyConstPtrToConst {&kFirstNumber};  //这样kMyConstPtrToConst就是完全的一个常量指针常量，2333
    std::cout << "常量指针常量" << "  " << kMyConstPtrToConst << std:: endl;

    //指针和常量要完全搞懂必须结合简化的内存分区来理解
    //OneNote上老师的图很有用

    //关于字符串的指针
    std::string first_string = "Hello!";  //用c++的STL创建字符串，省事儿
    std::array<int,4> first_array {0};
    int second_array[] {1,2,3,4};

    //字符串是常量，因此要用常量指针指向它
    const std::string * string_ptr {&first_string};
    std::cout << string_ptr << std::endl;
    std::cout << string_ptr << std::endl;  //数组和string的名字是首个元素的地址别名，请一定要记住
    std::cout << *string_ptr << std::endl;  //所以解引用只会得到第一个字母。
    //翻车，看来解引用stringSTL是会得到整个string的，只会得到第一个字母的是c的char数组类型，也就是c风格的字符串，其本质还是数组


    //而数组创建后没有销毁的话地址是不变的，因此指向它的必须是一个指针常量
    //std::array * const array_ptr {&first_array};  //不对，总是报错，烦，待解决
    auto* const array_ptr {&second_array};
    std::cout << array_ptr << std::endl;


}