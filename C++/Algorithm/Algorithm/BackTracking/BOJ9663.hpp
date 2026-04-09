//
//  BOJ9663.hpp
//  Algorithm
//
//  Created by 박정하 on 2021/12/09.
//

#ifndef BOJ9663_hpp
#define BOJ9663_hpp

#include <bits/stdc++.h>

using namespace std;

class BOJ9663 {
public:
    int N;
    int ans;
    int arr[15][15];
    int isused[15];
    int isused2[15];
    int isused3[15];
    void func1(int cur);
};

#endif /* BOJ9663_hpp */
