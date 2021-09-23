//
//  StackBasic.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/09/23.
//

#include "StackBasic.hpp"

void StackBasic::push(int x) {
    dat[pos++] = x;
}

void StackBasic::pop() {
    pos--;
}

int StackBasic::top() {
    return dat[pos-1];
}
