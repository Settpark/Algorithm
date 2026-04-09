//
//  BOJ12852.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/11/23.
//

#include "BOJ12852.hpp"

void BOJ12852::solution() {
    int k; cin >> k;
    int d[1000007] = {};
    int s[1000007] = {};
    d[1] = 0;
    
    for(int i = 2; i<=k; i++) {
        d[i] = d[i-1] + 1;
        s[i] = i-1;
        if(i%3 == 0 && d[i] > d[i/3]) { d[i] = d[i/3] + 1; s[i] = i/3;}
        if(i%2 == 0 && d[i] > d[i/2]) { d[i] = d[i/2] + 1; s[i] = i/2;}
    }
    
    cout << d[k] << '\n';
    int cur = k;
    while(true) {
        cout << cur << ' ';
        if (cur == 1) break;
        cur = s[cur];
    }
}
