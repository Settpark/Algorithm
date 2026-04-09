//
//  BOJ2579.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/11/21.
//

#include "BOJ2579.hpp"

void BOJ2579::solution() {
    int sum[307] = {};
    int d[307][307] = {};
    
    int n;
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        int v;
        cin >> v;
        sum[i] = v;
    }
    
    d[1][1] = sum[1];
    d[1][2] = 0;
    d[2][1] = sum[2];
    d[2][2] = d[1][1] + sum[2];
    
    for (int i = 3; i <= n; i++) {
        d[i][1] = max(d[i-2][1], d[i-2][2]) + sum[i];
        d[i][2] = d[i-1][1] + sum[i];
    }
    
    cout << max(d[n][1], d[n][2]) << '\n';
}
