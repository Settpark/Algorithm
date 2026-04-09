//
//  PRO_Triangle.cpp
//  Algorithm
//
//  Created by 박정하 on 2022/01/10.
//

#include "PRO_Triangle.hpp"

int PRO_Triangle::solution(vector<vector<int>> triangle) {
    int answer = 0;
    vector<vector<int>> dp(triangle);
    dp[0][0] = triangle[0][0];
    for (int i = 1; i<triangle.size(); i++) {
        for (int j = 0; j<triangle[i].size(); j++) {
            if (j == 0) dp[i][j] = triangle[i][j] + dp[i-1][j];
            else if (j == triangle[i].size()-1) dp[i][j] = triangle[i][j] + dp[i-1][j-1];
            else dp[i][j] = triangle[i][j] + max(dp[i-1][j-1], dp[i-1][j]);
        }
    }
    unsigned long lastidx = triangle.size()-1;
    answer = *max_element(dp[lastidx].begin(), dp[lastidx].end());
    return answer;
}
