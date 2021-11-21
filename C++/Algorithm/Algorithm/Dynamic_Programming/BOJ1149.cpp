//
//  BOJ1149.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/11/21.
//

#include "BOJ1149.hpp"

void BOJ1149::solution() {
    int h[1005][3] = {};
    int d[1005][3] = {};
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j<3; j++) {
            int k; cin >> k;
            h[i][j] = k;
        }
    }
    
    d[0][0] = h[0][0];
    d[0][1] = h[0][1];
    d[0][2] = h[0][2];
    
    for(int i = 1; i <= n; i++) {
        d[i][0] = min(d[i-1][1], d[i-1][2]) + h[i][0];
        d[i][1] = min(d[i-1][0], d[i-1][2]) + h[i][1];
        d[i][2] = min(d[i-1][0], d[i-1][1]) + h[i][2];
    }
    
    int first = min(d[n][0], d[n][1]);
    cout << min(first, d[n][2]);
}
