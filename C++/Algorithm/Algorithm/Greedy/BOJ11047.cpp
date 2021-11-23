//
//  BOJ11047.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/11/23.
//

#include "BOJ11047.hpp"

void BOJ11047::solution() {
    int count[17] = {};
    
    int n, cost; cin >> n >> cost;
    int cnt = 0;
    
    for (int i = 0; i<n; i++) {
        int k; cin >> k;
        count[i] = k;
    }
    n-=1;
    while(cost != 0) {
        if (cost < count[n]) { n--; continue;;}
        cost -= count[n];
        cnt++;
    }
    cout << cnt;
}
