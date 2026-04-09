//
//  BOJ2751.hpp
//  Algorithm
//
//  Created by 박정하 on 2021/11/24.
//

#ifndef BOJ2751_hpp
#define BOJ2751_hpp

#include <bits/stdc++.h>

using namespace std;

class BOJ2751 {
public:
    int arr[1000007];
    int tmp[1000007];
    int n;
    void merge(int st, int en);
    void merge_Sort(int st, int en);
};

#endif /* BOJ2751_hpp */
