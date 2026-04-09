//
//  BOJ1182.hpp
//  Algorithm
//
//  Created by 박정하 on 2021/12/11.
//

#ifndef BOJ1182_hpp
#define BOJ1182_hpp

#include <bits/stdc++.h>

using namespace std;

class BOJ1182 {
public:
    void solution();
    void func1(int cur, int sum);
    int ans, n, s;
    int arr[27];
    int isused[27];
};

#endif /* BOJ1182_hpp */
