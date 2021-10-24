//
// Created by Xiaopi Zhu on 2021/10/24.
//

#ifndef MAIN_CPP_REFERENCE_LEARN_H
#define MAIN_CPP_REFERENCE_LEARN_H
#include <iostream>

class ReferenceLearn {
public:
    void SetMyNumber(const int& my_refer_number);

    void GetMyNumber();
private:
    int my_refer_number_ {0};
};


#endif //MAIN_CPP_REFERENCE_LEARN_H
