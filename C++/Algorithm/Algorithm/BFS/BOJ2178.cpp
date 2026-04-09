//
//  BOJ2178.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/09/27.
//

#include "BOJ2178.hpp"

void BOJ2178::solution() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string board[102];
    int dis[102][102];
    
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    
    int n, m;
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) fill(dis[i], dis[i] + m, -1);
    
    for (int i = 0; i < n; i++)
        cin >> board[i];
        
        queue<pair<int, int>> Q;
    Q.push({0,0});
    dis[0][0] = 0;
    
    while(!Q.empty()) {
        pair<int,int> cur = Q.front(); Q.pop();
        
        for (int dir = 0; dir<4; dir++) {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (board[nx][ny] != '1' || dis[nx][ny] != -1) continue;
            Q.push({nx, ny});
            dis[nx][ny] = dis[cur.first][cur.second] + 1;
        }
    }
    cout << dis[n-1][m-1] + 1;
}
