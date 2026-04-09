//
//  BOJ15988.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/12/17.
//

#include "BOJ15988.hpp"

void BOJ15988::solution() {
    int dp[1000007];
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    
    for (int i = 4; i<=sizeof(dp)/sizeof(int); i++) {
        for (int j = 1; j<=3; j++) {
            dp[i] = (dp[i] + dp[i-j]) % 1000000009;
        }
    }
    
    while (n--) {
        int k; cin >> k;
        cout << dp[k] << '\n';
    }
}
