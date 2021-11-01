#include <iostream>
using std::cout;
using std::endl;
#include "header_learn.h"
#include "tuple_learn.h"
#include "loop_learn.h"
#include "class_learn.h"
#include "reference_learn.h"
#include "auto_learn.h"
#include "ptr_learn.h"
#include "for_range_loop.h"
#include "class.h"

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

//    //测试auto
//    auto number_1 {1};
//    auto number_2 {2};
//    std::cout << "the bigger number is: " <<  Max(number_1,number_2)  <<  std::endl;
//    LearnAuto();

//    //测试常量和指针
//    LearnPtr();


    //测试class的三个构造函数
    Account account_1(222.2);  //普通有参构造函数
    cout << "普通有参构造后的值：" << account_1.CheckBalance() << endl; //查看属性
    //测试一下匿名对象，匿名对象就是就用一次，用完就销毁,请着重记忆这里的用法，到时候别不会了
    std::cout << "test anonymous object" << Account(33.2).CheckBalance() << std::endl;
    //创建临时匿名对象进行赋值,这同时也是一个拷贝构造调用
    Account account_3 {Account(55.3)};
    std::cout << account_3.CheckBalance() << endl;  //初始化完了，查一下余额
    std::cout << account_3.Deposit(66.6) << std::endl;  //存钱
    std::cout << account_3.CheckBalance() << std::endl;
    std::cout << account_3.Withdraw(33.3) << std::endl;  //withdraw
    std::cout << account_3.Withdraw(100) << std::endl;  //withdraw




    return 0;
};
