//
// Created by Xiaopi Zhu on 2021/10/29.
//

#include "for_range_loop.h"
void LearnForRangeLoop(){
    //创建数组
    //请注意c++官方不建议用int[] = {1,2,3,4}这种方式建数组了，所以这个都不支持auto，不能写auto array{1,3,4}，而只能写
    //auto array = {1,3,4}这种不伦不类的杂交，事实就是不建议这么建数组了，请用STL。
    std::array<int,4> first_array {1,3,5,7};  //利用标准库创建int类型的容量为4的数组

    for (const auto& i : first_array){  //i叫做元素名变量，可以是引用类型，也可以是const类型,一定要多用引用，加快速度
        std::cout << i *2  << std::endl;  //输出每个元素乘上2
    }

    std::string first_string {"Hello"};
    for (const auto& i : first_string){  //冒号后面的只要是范围体就行了。
        std::cout << i << std::endl;
    }

}