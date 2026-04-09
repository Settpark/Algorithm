//
//  BOJ15650.hpp
//  Algorithm
//
//  Created by 박정하 on 2021/12/15.
//

#ifndef BOJ15650_hpp
#define BOJ15650_hpp

#include <bits/stdc++.h>

using namespace std;

class BOJ15650 {
public:
    int arr[17];
    bool isused[17];
    int n, m;
    void tracking(int cur, int value);
};

#endif /* BOJ15650_hpp */
