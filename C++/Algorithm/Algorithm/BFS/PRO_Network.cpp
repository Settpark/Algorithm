//
//  PRO_Network.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/12/29.
//

#include "PRO_Network.hpp"

int PRO_Network::solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    queue<int> q;
    for(int i = 0; i<computers.size(); i++) {
        if (vis[i]) continue;
        q.push(i);
        vis[i] = 1;
        answer++;
        while (!q.empty()) {
            int cur = q.front(); q.pop();
            for (int j = 0; j<computers[cur].size(); j++) {
                if (vis[j] || computers[cur][j] == 0) continue;
                vis[j] = 1;
                q.push(j);
            }
        }
    }
    return answer;
}
