//
// Created by Xiaopi Zhu on 2021/10/30.
//

#include "class.h"


//这是为了学习类的创建和ctor和dtor等的代码
//类是一个type，和int char是一样的，int其实也是一个类型。只是自己定义的type而已
//对于一个变量，int类型的变量不过是构造函数、析构函数c++默认给写好了而已，创建一个int类型的时候也是走的构造函数（只是无感化了），
//不用的时候销毁的时候也是走的析构函数（也是无感化了---c++自有的数据类型的构造和析构函数c++给你已经实现好了）
//对于自定义的class类型，如果显式地给出构造和析构函数，那么就会走给出的代码
//如果用户没有给定ctor和dtor，那么就走c++默认给出的代码，同样也是无感化的

//这就是万物皆对象的好处，通通看成对象，简洁抽象的统一





    //析构函数和构造函数也通通放到cpp文件夹里面。
    //实现和定义分离的类成员函数写法是这样写的：   返回类型 类名字：：函数名字（）{函数体}；构造函数没有返回类型就不用写就是了
    //ctor
    Account::Account()= default;  //推荐的默认构造函数的写法，用处在于有的时候编译器会不生成无参构造函数，（但是我们还是要用到无参构造函数）
                            //所以我们要强制用default实现一个无参构造函数
    Account::Account(const Account& account){
        balance_ = account.balance_;  //拷贝构造函数
    }
    Account::Account(double money_deposit){
        balance_ = money_deposit;
    };

    //方法
    //存钱
    string Account::Deposit( double  money_deposit){
        balance_ += money_deposit;
        return "Deposit Success!";
    };

    //取钱
    string Account::Withdraw(double money_withdraw){
        if(money_withdraw > balance_){  //判断余额和取钱额度，最多取的钱不能超过余额
            return "Withdraw Success!";
        }
        else{
            return "Balance is Not Enough!";
        }


    };

    //check balance
    double Account::CheckBalance() {
        return balance_;
    }