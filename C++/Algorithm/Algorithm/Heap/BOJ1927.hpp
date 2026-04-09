//
//  BOJ1927.hpp
//  Algorithm
//
//  Created by 박정하 on 2021/11/28.
//

#ifndef BOJ1927_hpp
#define BOJ1927_hpp

#include <bits/stdc++.h>

using namespace std;

class BOJ1927 {
public:
    int heap[100007] = {};
    int sz = 0; // heap에 들어있는 원소의 수
    void push(int x);
    int top();
    void pop();
    void test();
};

#endif /* BOJ1927_hpp */
