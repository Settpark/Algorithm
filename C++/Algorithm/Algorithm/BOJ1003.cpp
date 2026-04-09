//
//  BOJ1003.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/12/21.
//

#include "BOJ1003.hpp"

void BOJ1003::fibonacci(int n) {
    if (n == 0) {
        dp[0] = {1, 0};
    } else if (n == 1) {
        dp[1] = {0, 1};
    } else {
        dp[n].first = dp[n-1].first + dp[n-2].first;
        dp[n].second = dp[n-1].second + dp[n-2].second;
    }
}

void BOJ1003::solution() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    
    for (int i = 0; i<41; i++) fibonacci(i);
        
    for(int i = 0; i<n; i++) {
        int k; cin >> k;
        cout << dp[k].first << ' ' << dp[k].second << '\n';
    }
}
