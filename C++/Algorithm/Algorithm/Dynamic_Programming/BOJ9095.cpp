//
//  BOJ9095.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/11/21.
//

#include "BOJ9095.hpp"

void BOJ9095::solution() {
    int n;
    cin >> n;
    int d[11] = {};
    d[1] = 1;
    d[2] = 2;
    d[3] = 4;
    
    for (int i = 4; i < 11; i++) {
        d[i] = d[i-1] + d[i-2] + d[i-3];
    }
    
    for (int j = 0; j<n; j++) {
        int a;
        cin >> a;
        cout << d[a] << '\n';
    }
}
