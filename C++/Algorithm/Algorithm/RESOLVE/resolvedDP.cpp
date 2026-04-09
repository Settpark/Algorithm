//
//  DHK3.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/12/03.
//

#include "resolvedDP.hpp"

int resolvedDP::solution(vector<int> &A) {
    vector<int> dp(107);
    vector<int> vis(107);
    dp[0] = A[0]; int ans = 0;
    for(auto i = 1; i<A.size(); i++) {
        dp[i] = dp[i-1] + A[i];
    }
    for(auto i = 0; i<A.size(); i++) {
        if (A[i] == 0) continue;
        if (vis[A[i]] == 0) {
            vis[A[i]] = i+1;
        } else if (vis[A[i]] != 0){
            int index = vis[A[i]]-1;
            ans = max(ans, dp[i] - dp[index-1]);
            
        }
    }
    return ans;
}
