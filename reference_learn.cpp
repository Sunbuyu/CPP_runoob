//
// Created by Xiaopi Zhu on 2021/10/24.
//

#include "reference_learn.h"
void ReferenceLearn::SetMyNumber(const int& my_refer_number){  //使用const就无法将传入的变量的值改变了
                                                                //而使用引用传递参数则是为了效率的考量
                                                                //比指针会更好用更安全，毕竟引用很大一部分是为了解决指针的操作问题
    my_refer_number_ = my_refer_number;


}

void ReferenceLearn:: GetMyNumber(){
    std::cout << "This is GetMyNumber of method class ReferenceLearn" << std::endl;
    std::cout << my_refer_number_ << std::endl;
}