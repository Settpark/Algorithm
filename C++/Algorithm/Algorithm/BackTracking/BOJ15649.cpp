//
//  BOJ15649.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/10/01.
//

#include "BOJ15649.hpp"

void BOJ15649::solution() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m;
    backTracking(0);
}

void BOJ15649::backTracking(int k) {
    
    if (k == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    
    for (int i = 1; i < n; i++) {
        if(!isused[i]) {
            arr[k] = i;
            isused[i] = 1;
            backTracking(k + 1);
            isused[i] = 0;
        }
    }
}
