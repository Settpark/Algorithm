//
//  main.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/07/02.
//

#include <bits/stdc++.h>

using namespace std;
#define mod 1000000000

int dp[101][10];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j<10; j++) {
            if(abs(i-j) == 1) {
                if(j == 0 || j == 9) {
                    dp[i][j] = dp[i-1][j] + 1;
                } else {
                    dp[i][j] = dp[i-1][j] + 2;
                }
            }
        }
    }
}
