//
//  BOJ11053.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/12/22.
//

#include "BOJ11053.hpp"

void BOJ11053::solution() {
    ios::sync_with_stdio(0);
        cin.tie(0);
        int n; cin >> n;
        for (int i = 0; i<n; i++) cin >> arr[i];
        dp[0] = 1;
        for (int i = 1; i<n; i++) {
            for (int j = i-1; j>=0; j--) {
                if (arr[i] > arr[j])
                    dp[i] = max(dp[j]+1, dp[i]);
            }
            if (dp[i] == 0) dp[i] = 1;
        }
        cout << *max_element(dp, dp+n);
}
