//
// Created by Xiaopi Zhu on 2021/10/30.
//

#ifndef MAIN_CPP_CLASS_H
#define MAIN_CPP_CLASS_H
#include <string>
using std::string;
class Account {  //创建Account的类型
    double balance_ {0.0};


public:
    //ctor
    Account();  //推荐的默认构造函数的写法，用处在于有的时候编译器会不生成无参构造函数，（但是我们还是要用到无参构造函数）
    //所以我们要强制用default实现一个无参构造函数
    Account(const Account& account);  //这就是有参拷贝构造
    Account(double money_deposit);  //有参普通构造
    //方法
    //存钱
    string Deposit( double  money_deposit);

    //取钱
    std::string Withdraw(double money_withdraw);

    //check balance
    double CheckBalance();


};

#endif //MAIN_CPP_CLASS_H
