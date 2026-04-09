//
//  BOJ15649.hpp
//  Algorithm
//
//  Created by 박정하 on 2021/10/01.
//

#ifndef BOJ15649_hpp
#define BOJ15649_hpp

#include <bits/stdc++.h>

using namespace std;

class BOJ15649 {
public:
    int arr[10];
    int isused[10];
    int n, m;
    void solution();
    void backTracking(int k);
};

#endif /* BOJ15649_hpp */
