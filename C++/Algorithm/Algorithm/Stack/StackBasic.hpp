//
//  StackBasic.hpp
//  Algorithm
//
//  Created by 박정하 on 2021/09/23.
//

#ifndef StackBasic_hpp
#define StackBasic_hpp

#include <iostream>
#include <string>

using namespace std;

const int MX = 10000005;

class StackBasic {
public:
    void push(int x);
    void pop();
    int top();
private:
    int dat[MX];
    int pos = 0;
};

#endif /* StackBasic_hpp */
